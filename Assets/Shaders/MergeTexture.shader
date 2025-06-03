Shader "Custom/MergeTexture"
{
	Properties
	{
		_MainTex("Base Texture", 2D) = "white" {}
		_OverlayTex("Overlay Texture", 2D) = "white" {}
	}
		SubShader
	{
		Tags { "RenderType" = "Opaque" }
		LOD 100

		Blend SrcAlpha OneMinusSrcAlpha // Alpha blending

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 vertex : SV_POSITION;
			};

			sampler2D _MainTex;
			sampler2D _OverlayTex;

			v2f vert(appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = v.uv;
				return o;
			}

			fixed4 frag(v2f i) : SV_Target
			{
				fixed4 baseCol = tex2D(_MainTex, i.uv);
				fixed4 overlayCol = tex2D(_OverlayTex, i.uv);
				return lerp(baseCol, overlayCol, overlayCol.a);
			}
			ENDCG
		}
	}
		Fallback "Unlit/Texture"
}
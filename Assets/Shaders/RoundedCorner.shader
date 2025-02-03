Shader "UI/RoundedMask"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Radius ("Corner Radius", Range(0, 100)) = 20
    }
    SubShader
    {
        Tags { "Queue"="Overlay" "RenderType"="Transparent" }
        
        Stencil
        {
            Ref 1
            Comp Always
            Pass Replace
        }

        Pass
        {
            Blend SrcAlpha OneMinusSrcAlpha
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            struct appdata_t
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
            float4 _MainTex_ST;
            float _Radius;

            v2f vert (appdata_t v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float2 uv = i.uv;
                float2 roundedUv = abs(uv - 0.5) * 2.0;
                float radius = _Radius / 100.0;

                if (roundedUv.x > 1.0 - radius && roundedUv.y > 1.0 - radius)
                {
                    float2 corner = roundedUv - float2(1.0 - radius, 1.0 - radius);
                    if (length(corner) > radius)
                    {
                        discard;
                    }
                }

                return tex2D(_MainTex, uv);
            }
            ENDCG
        }
    }
}
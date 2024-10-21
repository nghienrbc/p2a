using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class teeety : MonoBehaviour
{
    public GameObject myPrefab;
    public GameObject meshObj;
    // Start is called before the first frame update
    int index = 15000;
    void Start()
    {


    }

    public void buttonClick()
    { 
        index += 3; 
        Mesh mesh = meshObj.GetComponent<MeshFilter>().mesh;
        int[] tris = mesh.triangles;
        Vector2[] uvs = mesh.uv;
        Vector3[] verts = mesh.vertices;
        Vector3 P1 = meshObj.transform.TransformPoint(verts[tris[index]]);
        Vector3 P2 = meshObj.transform.TransformPoint(verts[tris[index + 1]]);
        Vector3 P3 = meshObj.transform.TransformPoint(verts[tris[index + 2]]);
        // tìm tam giác được tạo bởi P1

        Debug.DrawLine(P1, P2, Color.red, 150, false);
        //Debug.DrawLine(P2, P3, Color.red, 150, false);
        Debug.DrawLine(P3, P1, Color.blue, 150, false);

        Vector3 side1 = P2 - P1;
        Vector3 side2 = P3 - P1;
        Vector3 dir = new Vector3();

        dir = Vector3.Cross(side1, side2);
        float perpLength = dir.magnitude;
        dir /= perpLength;

        Debug.Log("Direction: " + dir);

        Vector3 point_C = P1 + (dir * 150); // + hay - :((

        //Draw the line
        Debug.DrawLine(P1, point_C, Color.green, 150, false);

        Instantiate(myPrefab, P1, Quaternion.identity);
        Instantiate(myPrefab, P2, Quaternion.identity);
        Instantiate(myPrefab, P3, Quaternion.identity);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

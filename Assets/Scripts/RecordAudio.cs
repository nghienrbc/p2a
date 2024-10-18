using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RecordAudio : MonoBehaviour
{
    private AudioClip recordedClip;
    [SerializeField] AudioSource audioSource;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void StartRecording()
    {
        string device = Microphone.devices.Length > 0 ? Microphone.devices[0] : "";
        if(device != "")
        { 
            int sampleRate = 44100;
            int lengthSec = 3599; 
            recordedClip = Microphone.Start(device, false, lengthSec, sampleRate);
        }
    }

    public void StopRecording()
    {
        Microphone.End(null);
    }

    public void PlayRecording()
    {
        audioSource.clip = recordedClip;
        audioSource.Play();
    }
}

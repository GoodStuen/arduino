/*
  Simple Audio Player

 Demonstrates the use of the Audio library for the Arduino Due

 Hardware required :
 * Arduino shield with a SD card on CS4
 * A sound file named "test.wav" in the root directory of the SD card
 * An audio amplifier to connect to the DAC0 and ground
 * A speaker to connect to the audio amplifier

 Original by Massimo Banzi September 20, 2012
 Modified by Scott Fitzgerald October 19, 2012

 This example code is in the public domain

 http://arduino.cc/en/Tutorial/SimpleAudioPlayer

*/

#include <Audio.h>

void setup()
{
  // 44100Khz stereo => 88200 sample rate
  // 100 mSec of prebuffering.
  int sampleRate = 4000;
  Audio.begin(sampleRate, 100);
}

void loop()
{
  int count = 0;

  const int S = 1024; // Number of samples to read in block
  short buffer[S];

  // until the file is not finished
  while (myFile.available()) {
    // read from the file into buffer
    myFile.read(buffer, sizeof(buffer));

    // Prepare samples
    int volume = 1024;
    Audio.prepare(buffer, S, volume);
    // Feed samples to audio
    Audio.write(buffer, S);
  }
  while (true) ;
}


#include <stdio.h>
//#include <tchar.h>
//#include <conio.h>
#include <math.h>

#include <string.h>
#include <errno.h>
#include "WaveFileHeader.h"

struct WAVHEADER {
    // RIFF Header
    char riff_header[4]; // Contains "RIFF"
    int wav_size; // Size of the wav portion of the file, which follows the first 8 bytes. File size - 8
    char wave_header[4]; // Contains "WAVE"

    // Format Header
    char fmt_header[4]; // Contains "fmt " (includes trailing space)
    int fmt_chunk_size; // Should be 16 for PCM
    short audio_format; // Should be 1 for PCM. 3 for IEEE Float
    short num_channels;
    int sample_rate;
    int byte_rate; // Number of bytes per second. sample_rate * num_channels * Bytes Per Sample
    short sample_alignment; // num_channels * Bytes Per Sample
    short bit_depth; // Number of bits per sample

    // Data
    char data_header[4]; // Contains "data"
    int data_bytes; // Number of bytes in data. Number of samples * num_channels * sample byte size
    // uint8_t bytes[]; // Remainder of wave file is bytes
};

int main(int argc, char ** argv)
{
  FILE *file;
  long PCM_total_size = 0;

  file = fopen("vantage600_-_F_KING_BOUNCE_by_aud.wav", "rb");
  if (!file)
  {
      printf("Failed open file, error");
      return 0;
  }
  else {
    printf("%s\n", "file opened");
  }

  /*WaveFileHeader* wfh = new WaveFileHeader();

  fseek(file, 0, SEEK_END);
  PCM_total_size = ftell(file);
  fseek(file, 0, SEEK_SET);

  if(!wfh->IsWAVE(file, wfh))
  {
    printf("%s\n", "not wave");
  }
  else {
    printf("%s\n", "correct wave");
  }*/

  WAVHEADER header;

  ///fread_s(&header, sizeof(WAVHEADER), sizeof(WAVHEADER), 1, file);

  fread(&header, sizeof(WAVHEADER), 1, file);

  //fread(&header, sizeof(WAVHEADER), 1, file);

  // Выводим полученные данные
  printf("Sample rate: %d\n", header.sample_rate);
  printf("Channels: %hu\n", header.num_channels);
  printf("Bits per sample: %d\n", header.bit_depth);

  float fDurationSeconds = 1.f * header.wav_size / (header.bit_depth / 8) / header.num_channels / header.sample_rate;
  int iDurationMinutes = (int)floor(fDurationSeconds) / 60;
  fDurationSeconds = fDurationSeconds - (iDurationMinutes * 60);
  printf("Duration: %02d:%02.f\n", iDurationMinutes, fDurationSeconds);



  return 0;
}

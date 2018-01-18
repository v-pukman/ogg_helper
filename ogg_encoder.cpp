#include "oggHelper.h"

int main(int argc, char ** argv)
{
  if (argc < 3) {
    printf ("*** oggHelper example program. ***\n");
    printf ("usage: %s infile outfile\n", argv[0]);
    printf ("Opens a WAV file and encodes it to an Ogg file.\n");
    return 0;
  }

  const char * infilename, * outfilename;
  infilename = argv[1];
  outfilename = argv[2];

  oggHelper h;
  EncodeSetting es; /* add custom settings here if you want */
  VorbisComment ivc; /* set vorbis comments here if you want */
  h.encode(infilename, outfilename, es, ivc);
  return 0;
}

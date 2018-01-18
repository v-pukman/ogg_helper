#include "oggHelper.h"

int main(int argc, char ** argv)
{
  if (argc < 3) {
    printf ("*** oggHelper example program. ***\n");
    printf ("usage: %s infile outfile\n", argv[0]);
    printf ("Opens an Ogg file and decodes it to a WAV file.\n");
    return 0;
  }

  const char * infilename, * outfilename;
  infilename = argv[1];
  outfilename = argv[2];

  oggHelper h;
  h.decode(infilename, outfilename);
  return 0;
}

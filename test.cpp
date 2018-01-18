#include <stdio.h>
//#include <tchar.h>
//#include <conio.h>
#include <math.h>

#include <string.h>
#include <errno.h>

#include "oggHelper.h"

int main(int argc, char ** argv)
{
  /*oggHelper h;
  EncodeSetting es;
  VorbisComment ivc;
  h.encode("vantage600_-_F_KING_BOUNCE_by_aud.wav", "vantage600_-_F_KING_BOUNCE_by_ogghelp.ogg", es, ivc);
  return 0;*/

  oggHelper h;
  h.decode("vantage600_-_F_KING_BOUNCE_by_ogghelp.ogg", "output.wav");
  return 0;
}

/**********************************************************************************************
	* Author:	Oso, Oluwafemi Ebenezer
	* Date:		5th of June, 2014
	* Filename:	OggHelper_VorbisSettings.cpp

	Vorbis settings (comments, encode mode, etc) used for OggHelper (Vorbis Wrapper by Osofem)
***********************************************************************************************/
#include "OggHelper_VorbisSettings.h"

VorbisComment::VorbisComment()
{
	TITLE = "";
	VERSION = "";
	ALBUM = "";
	TRACKNUMBER = "";
	ARTIST = "";
	PERFORMER = "";
	COPYRIGHT = "";
	LICENSE = "";
	ORGANISATION = "";
	DESCRIPTION = "";
	GENRE = "";
	DATE = "";
	LOCATION = "";
	CONTACT = "";
	ISRC = "";
}

EncodeSetting::EncodeSetting()
{
	channel = Stereo;
	encode_mode = VBR;
	min_abr_br = OGG_BR_UNSET;
	max_abr_br = OGG_BR_UNSET;
	abr_br = OGG_BR_128kbps;
	vbr_quality = 0.5;
	cbr_br = OGG_BR_128kbps;
}

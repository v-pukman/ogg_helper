/*********************************************************************************************************
	* Author:	Oso, Oluwafemi Ebenezer
	* Date:		5th of June, 2014
	* Filename:	AudioSettings.h

	A generic audio settings common to all audio file format (samplerate, bitrate, number of channel, etc)
***********************************************************************************************************/
//Frequency
enum SampleRate
{
	OGG_SR_8khz = 8000,
	OGG_SR_11khz = 11025,
	OGG_SR_12khz = 12000,
	OGG_SR_16khz = 16000,
	OGG_SR_22khz = 22050,
	OGG_SR_24khz = 24000,
	OGG_SR_32khz = 32000,
	OGG_SR_44khz = 44100,
	OGG_SR_48khz = 48000
};

enum Channel
{
	Mono = 1,
	Stereo = 2
};

enum Bitrate
{
	OGG_BR_UNSET = -1,
	OGG_BR_8kbps = 8000,
	OGG_BR_16kbps = 16000,
	OGG_BR_24kbps = 24000,
	OGG_BR_32kbps = 32000,
	OGG_BR_40kbps = 40000,
	OGG_BR_48kbps = 48000,
	OGG_BR_56kbps = 56000,
	OGG_BR_64kbps = 64000,
	OGG_BR_80kbps = 80000,
	OGG_BR_96kbps = 96000,
	OGG_BR_112kbps = 112000,
	OGG_BR_128kbps = 128000,
	OGG_BR_144kbps = 144000,
	OGG_BR_160kbps = 160000,
	OGG_BR_192kbps = 192000,
	OGG_BR_224kbps = 224000,
	OGG_BR_256kbps = 256000,
	OGG_BR_320kbps = 320000
};

enum Encode_Mode
{
	VBR,
	ABR,
	CBR
};

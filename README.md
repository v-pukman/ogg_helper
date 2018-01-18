# OGG Wrapper (An Ogg audio converter) Decode .ogg to .wav and encode .wav to .ogg

OGG Wrapper based on [CodeProject solution by Oso Oluwafemi Ebenezer](https://www.codeproject.com/Articles/824199/The-OGG-Wrapper-An-audio-converter).
It reduces OGG encoding/decoding to just two lines of code.

## Changes

1. Wav Header logic is replaced and works well.
2. Multi processing is removed for personal needs.
3. File names are improved.

## Usage
### Decoding
```
oggHelper h;
h.decode(infilename, outfilename);
```

### Encoding
```
oggHelper h;
EncodeSetting es; /* add custom settings here if you want */
VorbisComment ivc; /* set vorbis comments here if you want */
h.encode(infilename, outfilename, es, ivc);
```


## Build examples on MacOS

### Install vorbis libraries
```
brew install libogg
brew install libvorbis
```

### Build decoder
```
cd examples
clang++ oggDecoder.cpp ../src/wavHeader.cpp ../src/oggHelper.cpp ../src/vorbisSettings.cpp -I ../src -o oggDecoder -lvorbis -logg -lvorbisenc -lvorbisfile -std=c++11
./oggDecoder "path_to_ogg_file.ogg" "decoded_file.wav"
```


### Build encoder
```
cd examples
clang++ oggEncoder.cpp ../src/wavHeader.cpp ../src/oggHelper.cpp ../src/vorbisSettings.cpp -I ../src -o oggEncoder -lvorbis -logg -lvorbisenc -lvorbisfile -std=c++11
./oggEncoder "path_to_wav_file.wav" "encoded_file.ogg"
```

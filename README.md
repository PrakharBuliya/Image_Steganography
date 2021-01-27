# Steganography In C
Image Steganography In C.

Steganography Is The Process To Hide Text Files In A Image Without Altering The Original Image.
The Text Is Hidden In .BMP Image Files.

# About CMake

CMake is an open-source, cross-platform family of tools designed to build, test and package software. CMake is used to control the software compilation process using simple platform and compiler independent configuration files, and generate native makefiles and workspaces that can be used in the compiler environment of your choice. The suite of CMake tools were created by Kitware in response to the need for a powerful, cross-platform build environment for open-source projects such as ITK and VTK.


# FILES

main.c - Is The Main Function Of The Program.

Encode.c - Encoding Function

Decode.c - Decoding function


# FOR EXECUTION OF THE PROGRAM , FOLLOW THE STEPS :-

~$ cd build
~$ cmake ..
~$ make

# ENCODING

~$ ./proj -E -i linux.bmp -s secret.txt -o output.bmp

# DECODING

~$ ./proj -D -i output.bmp -o out.txt
# INDEX
	-E = Encoding
	-D = Decoding
	-i = Input Source BMP Image / Output Image
	-s = Secret Text File
	-o = Output BMP Image / Output Text File
  
  ************ THANK YOU *****************


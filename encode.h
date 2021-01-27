#ifndef __ENCODE_H
#define __ENCODE_H

#include <stdio.h>

int size_of_image(FILE *);
void secret_text(FILE *);
int secret_text_size(FILE *);
int get_bit(char, int);
void stega_encrypt(FILE *, FILE *, FILE *);
void string_encrypt(char *, FILE *, FILE *);
void size_encrypt(int, FILE *, FILE *);
int Encoding(char *, char *, char *);

#endif				/* __ENCODE_H */

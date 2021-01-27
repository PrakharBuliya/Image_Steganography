#ifndef __DECODE_H
#define __DECODE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void size_decryption(FILE *, int *);
void string_decryption(FILE *, char *, int);
void secret_decryption(int, FILE *, FILE *);
int Decode(char *, char *);

#endif  /* __DECODE_H */
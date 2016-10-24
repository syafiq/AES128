#ifndef AES_H
#define AES_H

#include "string.h"
typedef unsigned char byte;

struct AES {
    byte key[4][4];
    byte expkey[44][4];
    byte a[4][4];
};

void enc(struct AES * aes);
void expand_key128(struct AES * aes);
void ark(struct AES * aes, int round);
void sb(byte a[4][4]);
void sr(byte a[4][4]);
void mc(byte a[4][4]);
void ksc(byte word[4], int inum);

#endif
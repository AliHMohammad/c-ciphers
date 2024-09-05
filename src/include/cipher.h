#ifndef CIPHER_H
#define CIPHER_H

int letterToNumber(char c);
char numberToLetter(int n);
int shift(int number, int shiftValue);
void encrypt(char *text, int shift);
void decrypt(char *text, int shift);

#endif // CIPHER_H

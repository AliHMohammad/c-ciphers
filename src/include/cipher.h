#ifndef CIPHER_H
#define CIPHER_H

int letter_to_number(char c);
char number_to_letter(int n);
int shift(int number, int shiftValue);
void encrypt(char *text, int shift);
void decrypt(char *text, int shift);

#endif // CIPHER_H

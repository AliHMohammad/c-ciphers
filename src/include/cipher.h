#ifndef CIPHER_H
#define CIPHER_H

int letter_to_number(char c);
char number_to_letter(int n);
int shift(int number, int shiftValue);
void enigma(char* text, int shiftValue);

#endif // CIPHER_H

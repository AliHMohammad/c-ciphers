#include <stdio.h>
#include "cipher.h"

char alphabet[255] = "abcdefghijklmnopqrstuvwxqzæøå";

int main(int argc, char const *argv[])
{
    char txt[] = "hello world";

    encrypt(txt, 3);
    printf("%s\n", txt);

    char txt2[] = "khoor zruog";
    decrypt(txt2, 3);
    printf("%s\n", txt2);

    return 0;
}

int letter_to_number(char c) {
    int number = 0;

    while (alphabet[number] != '\0') {
        if (alphabet[number] == c) {
            return number;
        }
        number++;
    }

    return -1;
}

char number_to_letter(int n) {
    return alphabet[n];
}

int shift(int number, int shiftValue) {
    if (number > 28){
        return shiftValue;
    }

    return number + shiftValue;
}

void encrypt(char* text, int shiftValue) {
    while (*text != '\0')
    {
        if (*text == ' ') {
            text++;
            continue;
        }

        int initialIndex = letter_to_number(*text);
        if (initialIndex == -1){
            printf("Something went wrong. -1 Error at %c\n", *text);
            break;
        }

        int newIndex = shift(initialIndex, shiftValue);
        char newChar = number_to_letter(newIndex);

        *text = newChar;

        text++;
    }
}

void decrypt(char* text, int shiftValue) {
    while (*text != '\0')
    {
        if (*text == ' ') {
            text++;
            continue;
        }

        int initialIndex = letter_to_number(*text);
        if (initialIndex == -1){
            printf("Something went wrong. -1 Error at %c\n", *text);
            break;
        }

        int newIndex = shift(initialIndex, (shiftValue * -1));
        char newChar = number_to_letter(newIndex);

        *text = newChar;

        text++;
    }
}

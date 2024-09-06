#include <stdio.h>
#include <string.h>
#include "cipher.h"

void show_welcome() {
    puts("Welcome to Ali's Cipher");
    puts("========================");
}

void show_menu() {
    puts("\nI want to:");
    puts("e) Encrypt text");
    puts("d) Decrypt text");
    puts("x) Exit");
}

void input_text(char* s) {
    printf("Please input the message: ");
    char input[255];
    //fgets(input, sizeof(input), stdin);
    scanf("%s", input);

    strcpy(s, input);
}

int input_shift() {
    printf("Shift by: ");
    int val;
    scanf("%d", &val);
    return val;
}

char get_section() {
    char input;
    scanf(" %c", &input);

    return input;
}

void select_encrypt() {
    int shift = input_shift();
    char text[255];
    input_text(text);

    enigma(text, shift);

    printf("\nHere is your encrypted message shifted by %d:\n", shift);
    printf("%s\n", text);
}

void select_decrypt() {
    int shift = input_shift();
    char text[255];
    input_text(text);

    enigma(text, (shift * -1));

    printf("\nHere is your decrypted message unshifted by %d:\n", shift);
    printf("%s\n", text);
}





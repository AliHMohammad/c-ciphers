#include <stdio.h>
#include "cipher.h"

char alphabet[255] = "abcdefghijklmnopqrstuvwxqzæøå";

int main(int argc, char const *argv[])
{
    
    int num = letter_to_number('o');
    printf("%d\n", num);

    char c = number_to_letter(14);
    printf("%c\n", c);

    return 0;
}

int letter_to_number(char c) {
    int number = 0;

    while (1)
    {
        if (alphabet[number] == c){
            break;
        }
        number++;
    }

    return number;
}

char number_to_letter(int n) {
    return alphabet[n];
}

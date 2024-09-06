#include <stdio.h>
#include "caesar.h"

int main()
{
    show_welcome();

    while (1)
    {
        show_menu();
        char selection = get_section();

        if (selection == 'x') {
            break;
        }

        switch (selection)
        {
        case 'e':
            select_encrypt();
            break;
        case 'd':
            select_decrypt();
            break;
        default:
            break;
        }
    }
    
    return 0;
}



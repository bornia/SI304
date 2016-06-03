// Author: Guilherme Bornia Miranda
// Matter: Software Engineering ll
//
// It is a program that formats texts
// checking if the first letter of each
// name is uppercase and returning, at
// terminal, the writing correctly.
//
// **| LIBRARIES |**
#include "source.h"
// **| MAIN |**
int main ()
{   // It is going to keep the name of my user;
	char name[500]; // 600 characters divided by 6 characters (one word on average) allows the user to digit 100 words approximately
	int opcao = 0, opcao1 = 0, opcao2 = 0,  // will be filled by the user
        aux = 0, aux1 = 0, aux2 = 0;    // used to control the menus

	do
    {
        if (aux1 == 0) // Allows that be impress once
        {
            do
            {
                fflush(stdin);  // Clean the buffer
                system("Clear");
                printf("\n Do you want to start the program?\n (1) Yes\n (2) No\n >> ");
                scanf("%d", &opcao);
            } while (opcao != 1 && opcao != 2); // Prevent bugs
            aux1++;
            if (opcao == 2) // Allows the user to shutdown the program
                break;
        }

        fflush(stdin);
        system("Clear");
        printf ("\n Type your name:\n >> ");
        fgets ( name, 500, stdin );

        do
        {
            fflush(stdin);
            system("Clear");
            printf("\n Do you want to format the text?\n (1) Yes\n (2) No\n >> ");
            scanf("%d", &opcao1);
        } while ( opcao1 != 1 && opcao1 != 2);  // Prevent bugs

        if (opcao1 == 1)    // Format the text
        {
            getting_uppercase ( name );
            realocating_spaces ( name );
            getting_uppercase_1_letter ( name );
        }

        system("Clear");
        printf ("\n Your name is:\n%s\n\n", name);
        system("Pause");

        do
        {
            fflush(stdin);
            system("Clear");
            printf("\n Do you want to type another text?\n (1) Yes\n (2) No\n >> ");
            scanf("%d", &opcao2);
        } while ( opcao2 != 1 && opcao2 != 2 ); // Prevent bugs

        if (opcao2 == 2)    // Allows the user to shutdown the program
            aux++;

    } while ( aux == 0 );   // Prevent bugs

    return 1;   // The program has been closed at beginning
}



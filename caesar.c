// libraries
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char argv[])
{
    int k = 0, i = 0, j = 0;

    // converting the string into integer
    if (argc == 2)
    {
        k = atoi(argv[1]);
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    char p[100];        
    // prompting the user for plaintext
    printf("plaintext: ");
    scanf("%c", &p[]);

    // Output
    printf("ciphertext: ");
    
    // traversal of the string
    for (i = 0; i < strlen(p); i++)
    {
        // if the input is Capital
        if (isupper (p[i]))
        {
            j = ((((int)p[i] + k) - 65) % 26) + 65;
            printf("%c", j);
        }
        // if the input is small
        else if (islower (p[i]))
        {
            j = ((((int)p[i] + k) - 97) % 26) + 97;
            printf("%c", j);
        }
        // if there is some space
        if (isspace (p[i]))
        {
            printf(" ");
        }
        // if there is any punctuation mark
        if (ispunct (p[i]))
        {
            printf("%c", p[i]);
        }

    }
    printf("\n");
}

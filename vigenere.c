#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[2])
{
    int a, i = 0, j = 0, l = 0, m = 0;
    char k[20];


     // key
    for (a = 0; a <= strlen(argv[i]); a++)
    {
        if (argc != 2 && !isalpha(argv[1]))
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
        else
        {
            strcpy(k, argv[1]);
        }
    }
    eprintf ("%s\n",k);

    // prompting the user for plaintext
    string p = get_string("plaintext: ");
//Issue
////////////////////////////////////////////////////////////////////////////////////
    // Output
    printf("ciphertext: ");
    // traversal of the string
    for (i = 0; i < strlen(p); i++)
    {
        for (m = 0; m < strlen(k); m++)
        {
            // if the input is Capital
            if (isupper (p[i]) && isupper (k[l]))
            {
                j = (((int)p[i] - 64 + (int)k[l] - 65) % 26) + 64;
                printf("%c", j);
                l++;
            }
            // if the input is small
            else if (islower (p[i]) & islower (k[l]))
            {
                j = (((int)p[i] - 96 + (int)k[l] - 97) % 26) + 96;
                printf("%c", j);
                l++;
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
///////////////////////////////////////////////////////////////////
    }
    printf("\n");
}

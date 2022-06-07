#include <stdio.h>
/**
*a function that prints 10 times the alphabet, in lowercase
*
*return: on success 1.
*
*/

void print_alphabet_x10(void);
{
    int i;
    char c;

    for (i=0; i<10; ++i)
    {
        for (c='a'; c<='z'; c++)
        {
            _punchar(c)
        }
        _punchar('\n');
    }
}

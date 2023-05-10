#include <stdio.h>

int main()
{
    int c, words, lastC;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == ' ' || c == '\t')
        {
            if (lastC != '\n' && lastC != ' ' && lastC != '\t')
            {
                words++;
            }
        }
        lastC = c;
    }

    printf("%d", words);
}
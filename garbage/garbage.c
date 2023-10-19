#include <stdio.h>

int getline(char s[]);

int main(){   }

int getline(char s[])
{
    int c,i;
    i = 0;

    while ((c = getchar()) != EOF)
    {
        s[i] = c;
        i++;
    }
    return i;
}
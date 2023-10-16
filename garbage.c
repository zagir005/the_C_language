#include <stdio.h>

int getline(char s[]);

int main()
{
    char s[1000];
    int lenght = getline(s);
    printf("%d\n", lenght);
    printf("%s", s);
    for (int i = 0; i < lenght; i++)
    {
        printf("%d; ", s[i]);
    }
    
}

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
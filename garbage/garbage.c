#include <stdio.h>
#include <limits.h>

int getline(char s[]);
void println(void);

int main()
{
    

    
}

void println(void)
{
    printf("\n");
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
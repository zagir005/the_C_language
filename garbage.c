#include <stdio.h>

int main()
{
    int size = 2;
    int i = 0;
    char c;
    char n[size];
    while ((c = getchar()) != EOF)
    {
        n[i] = c;
        i++;
        size++;
    }
    
    for (int i = 0; i < (sizeof(n) / sizeof(n[0])); i++)
    {
        printf("%d  ", n[i]);
    }
}
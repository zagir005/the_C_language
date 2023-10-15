#include <stdio.h>

#define MAXLINE 1000

char line[MAXLINE];
char longest[MAXLINE];
int max;

int getline();
void copy();


int main()
{
    int long;

    while ((long = getline()) != 0)
        if (long > max)
        {
            copy();
            max = long;
        }
    
    printf("%s", longest);
    return 0;
}

int getline()
{
    int c, i;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;

    if (i == 0)
    {
        return 0;
    }

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void copy()
{
    int i = 0;
    while (line[i] != '\0')
    {
        longest[i] = line[i];
        ++i;
    }

    longest[i] = '\0';
}



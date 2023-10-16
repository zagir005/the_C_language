#include <stdio.h>

/* Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter? */

#define TAB_LENGHT 4

void replace_tabs(char insteadC, char s[], int lenght);

int main()
{
    char s[] = "fdaslfjdsa\tfdasfa\t";
    int array_size = sizeof(s) / sizeof(s[0]);
    replace_tabs('|', s, array_size);
}

void replace_tabs(char insteadC, char s[], int lenght)
{
    int tab_count = 0;
    for (int i = 0; i < lenght - 1; i++)
        if (s[i] == '\t')
            tab_count++;

    int element_size = sizeof(s[0]);
    int tab_byte_count = element_size * tab_count;
    int old_array_size = element_size * lenght;
    int new_array_size = (old_array_size - tab_byte_count) + (element_size * tab_byte_count * TAB_LENGHT);

    printf("new_array_size %d\n", new_array_size);
    printf("tab_count %d\n", tab_count);

    char new_s[new_array_size];

    int i = 0;
    int a = i;
    while (i < new_array_size)
    {
        if (s[i] != '\t')
        {
            new_s[i] = s[i];
            i++;
        }
        else
        {
            for (a = i; a < i + 4; a++)
            {
                new_s[a] = insteadC;
                
            }
            i += 4;
        }
    }

    printf("%s", new_s);
}

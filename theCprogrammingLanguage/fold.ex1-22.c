#include <stdio.h>

#define MAX_LENGHT 70

void fold_line(char s[], char new_s[]);

/*
Write a program entab that replaces strings of blanks by the minimum 
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. 
When either a tab or a single blank would suffice to reach a tab stop, which should be given 
preference?
*/

int main()
{
    char s[] = "Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?";
    printf("%s\n", s);
    char new_s[1000];
    fold_line(s,new_s);
    printf("%s\n", new_s);
}

void fold_line(char s[], char new_s[]){
    int s_i, new_s_i = 0;
    char c;
    int last_divider_s_i;
    int last_divider_new_s_i;
    int current_lenght = 0;
    for (s_i = 0; s[s_i] != '\0'; s_i++)
    {
        c = s[s_i];
        new_s[new_s_i] = c;
        
        if (c == ' ' || c == '.' || c == ',' || c == '!' || c == '?')
        {
            last_divider_new_s_i = new_s_i;
            last_divider_s_i = s_i;
        }

        new_s_i++;
        current_lenght++;
        
        if (current_lenght == MAX_LENGHT - 1)
        {
            new_s[last_divider_new_s_i + 1] = '\n';
            new_s_i = last_divider_new_s_i + 2;
            s_i = last_divider_s_i;
            current_lenght = 0;
            last_divider_new_s_i = 0;
            last_divider_s_i = 0;
        }
    }
}
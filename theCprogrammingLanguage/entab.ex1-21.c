#include <stdio.h>

#define TAB_LENGHT 8
#define IN 1
#define OUT 0

void entab_replace(char s[], char new_s[]);

int main()
{
    char s[] = "fdsa\tfdsa     fs fdsafsda  fdsa";
    char new_s[1000];
    entab_replace(s, new_s);
    printf("%s\n", s);
    printf("%s", new_s);

}

void entab_replace(char s[], char new_s[]){
    int i_s, i_new_s = 0;
    int state = OUT;
    int first_space_i;

    for (i_s = 0; s[i_s] != '\0'; i_s++)
    {
        if (s[i_s] == ' ' && state == OUT)
        {
            state = IN;
            first_space_i = i_s;
            new_s[i_new_s] = s[i_s];
        }else if (state == IN && i_new_s - first_space_i == 3)
        {
            state = OUT;
            new_s[first_space_i] = '\t';
            i_new_s = first_space_i;
        }else
        {
            if (s[i_s] == ' ')
            {
                new_s[i_new_s] = s[i_s];
            }else
            {
                new_s[i_new_s] = s[i_s];
                state = OUT;
            }
        }
        
        i_new_s++;
    }
    new_s[i_new_s] = '\0';
}
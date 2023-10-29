#include <stdio.h>

void squeeze(char s1[], char s2[]);
int have_char(char s[], char c);

int main()
{
    char s1[] = "abra cadabra eben";
    squeeze(s1, "mahrum batyr bek");
}

void squeeze(char s1[], char s2[])
{
    char ans_s[1000];
    int ans_s_i = 0;

    char n_common_cs[1000];
    int n_common_i = 0;

    char s1_c;

    for (int s1_i = 0; (s1_c = s1[s1_i]) != '\0'; s1_i++)
    {
        if (have_char(n_common_cs, s1_c))
        {
            ans_s[ans_s_i] = s1_c;
            ans_s_i++;
        }
        else
        {
            if (!have_char(s2, s1_c))
            {
                n_common_cs[n_common_i] = s1_c;
                n_common_i++;
                ans_s[ans_s_i] = s1_c;
                ans_s_i++;
            }
        }
    }

    printf("%s", ans_s);
}

int have_char(char s[], char c)
{
    int c_i;

    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            return 1;

    return 0;
}

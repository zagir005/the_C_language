#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize);

char *longestCommonPrefix(char **strs, int strsSize)
{
    int fsLengt = strlen(strs[0]);
    int fsSize = sizeof(char) * fsLengt + 1;

    char *ans = (char *)malloc(fsSize);

    strcpy(ans, strs[0]);

    for (int i = 0; i < fsLengt; i++)
        {
            for (int s = 0; s < strsSize - 1; s++)
            {
                if (strs[s][i] == strs[s + 1][i])
                    ans[i] = strs[s][i];
                else
                {
                    ans[i] = '\0';
                    return ans;
                }
            }
        }
    return ans;
}
#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int malloc_test();

int main()
{
    char *str = "aboba";
    printf("%d \n", sizeof(char));
}

int malloc_test()
{
    int *p;
    int n;

    printf("Enter the size of memory space you need: ");
    scanf("%d\n", &n);
    
    p = (int*) malloc(sizeof(int) * n);

    if (p == NULL)
    {
        printf("Memory is not allocated\n");
        return 0;
    }
    else
    {
        printf("Was good\n");
        return 1;
    }
}


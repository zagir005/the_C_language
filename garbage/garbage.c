#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
// константа перечисления. первое значение (true) равно нулю, а далее +1
enum bool
{
    true,
    false
};

//это константы. еще их называют неавтоматическими переменными. они должны быть инициализированы 
//константными значениями, либо же в них будут содержаться нулевые значения
char line[1000];
char lines[] = "fdkjsalf";
int a = 10;

//объявление функции
int lower(int c);

//параметр массив с квалификатором const указывает на то, что элементы этого массива изменить нельзя
int someShit(const char s[]);

int main()
{
}

void garbage(){
    //это объявления
    int lower,middle,higher;

    //это объявление и инициализацией
    int i = 0;

    //константная переменная.
    const int year = 2004;

    //const в объявлении массива означает, что его элементы нельзя изменять.
    const int month[12];

    //приведение типа. целочисленное 12 будет приведено к типу double (12.90) 
    (double) 12;
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

void println(void)
{
    printf("asdf\n");
}

int getline(char s[])
{
    int c, i;
    i = 0;

    while ((c = getchar()) != EOF)
    {
        s[i] = c;
        i++;
    }
    return i;
}
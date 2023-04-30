/**
Курс: Стивен Прата "Язык программирования C"
Глава: 7
Дата выполнения: 01.05.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/**
5. Выполните упражнение 4, но с применением оператора switch.
*/
#include <stdio.h>
int main ()
{

char ch;
int count=0;


while ((ch = getchar()) != '#')
{
    switch (ch)
    {
        case '.':
        {
            count++;
            putchar('!');
            break;
        }
        case '!':
        {
            putchar('!');
            putchar('!');
            count++;
            break;
        }
        default:
            printf("%c", ch);
    }
}
printf("%d ", count);

return 0;
}
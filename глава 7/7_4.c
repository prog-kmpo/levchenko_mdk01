/**
Курс: Стивен Прата "Язык программирования C"
Глава: 7
Дата выполнения: 01.05.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/**
4. Используя операторы if else, напишите программу, которая читает входные
данные, пока не встретит символ #, заменяет каждую точку восклицательным
знаком, изначально присутствующие восклицательные знаки — двумя восклицательными 
знаками и в конце сообщает о количестве произведенных замен.
*/
#include <stdio.h>
int main ()
{

char ch;
int count=0;

while ((ch = getchar()) != '#')
{
 if (ch == '.')
    {
    ch = '!';
    count++;
    printf("%c", ch);
    }
 else if (ch == '!')
    {
    putchar('!');
    putchar('!');
    count++;
    }
 else
    printf("%c", ch);
}
printf("%d ", count);


return 0;
}
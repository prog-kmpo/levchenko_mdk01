/*
Курс: Стивен Прата "Язык программирования C"
Глава: 2
Дата выполнения: 21.02.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/*
1.
Напишите программу, которая использует вызов функции print f () для печати
ваше го имени и фамилии в одной строке, использует второй вызов функции
print f ( ) , чтобы напечатать ваше имя и фамилию в двух строках, и использует
два вызова функции printf () для печати вашего имени и фамилии в одной
строке . Выходные данные должны иметь следующий вид (при этом используются ваши персональные данные): 
*/

#include <stdio.h>
#include <string.h>
int main()
{
    printf("Саша Левченко\n");
    printf("Саша\nЛевченко\n");
    printf("Саша ");
    printf("Левченко");
    return 0;
}
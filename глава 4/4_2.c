/*
Курс: Стивен Прата "Язык программирования C"
Глава: 4
Дата выполнения: 24.02.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/*
2.
Напишите программу, которая запрашивает имя и выполняет с ним следующие 
действия: 
а. Печатает его заключенным в двойные кавычки. 
б. Печатает его в поле шириной 20 символов, при этом все поле заключается в 
кавычки. 
в. Печатает его с левого края поля шириной 20 символов, при этом все поле 
заключается в кавычки. 
г. Печатает его в поле шириной, на три с имвола превышающем длину имени. 
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[20];
    printf("Vvedite vashe Imya:\n");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("   %s", name);
    return 0;
}
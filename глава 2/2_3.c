/*
Курс: Стивен Прата "Язык программирования C"
Глава: 2
Дата выполнения: 21.02.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/*
3.
Напишите программу, которая преобразует ваш возраст в годах в количе ство
дней и отображает на экране оба значения. На этой стадии можно учитывать
только прожитые годы и не учитывать високосные года . 
*/

#include <stdio.h>
#include <string.h>
int main()
{
    int age;
    
    printf("Введите ваш возраст: ");
    scanf("%d", &age);
    printf("Ваш возраст в годах: %d ", age);
    
    printf("\nВаш возраст в днях: %d ", age*365, age);
    return 0;
}
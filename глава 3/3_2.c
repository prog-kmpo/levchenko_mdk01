/*
Курс: Стивен Прата "Язык программирования C"
Глава: 3
Дата выполнения: 22.02.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/*
2. 
Напишите программу, которая приглашает ввести некоторое значение в коде 
ASCII, например, 66, а затем печатает символ, которому соответствует введенный код. 
*/


#include<stdio.h>
int main()
{
    int a;
    
    printf("Vvedite celoe chislo: ");
    scanf("%d", &a);
    
    printf("Simvol chisla = %c", a);
    
    return 0;
}


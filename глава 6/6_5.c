/**
Курс: Стивен Прата "Язык программирования C"
Глава: 6
Дата выполнения: 01.05.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/**
5. Напишите программу для вывода таблицы, в каждой строке которой 
представлено целое число, его квадрат и его куб. 
Запросите у пользователя верхний и нижний пределы таблицы. Используйте цикл for.
*/
#include <stdio.h>
 int main()
 {
 int min, max;
 int sqrt, cube;
 scanf("%d", &min);
 scanf("%d", &max);
 printf("Number   Square   Cube\n");

 for (min; min <= max; min++)
            printf("%4d %7d %7d\n" , min, min*min, min*min*min);
        printf("\n");
 return 0;
 }
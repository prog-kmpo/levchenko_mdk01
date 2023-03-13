/**
Курс: Стивен Прата "Язык программирования C"
Глава: 5
Дата выполнения: 14.03.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/**
1. Напишите программу, которая преобразует время в минутах в часы и минуты.
Для значения бО создайте символическую констану посредством #define или
const. Используйте цикл while, чтобы обеспечить пользователю возможность
повторного ввода значений и для прекращения цикла, если вводится значение
времени, меньшее или равное нулю
*/

#include <stdio.h>
#define MIN_TO_HOUR 60
int main ()
{
int min, hour, min_passed;
printf("Vvedite vremya v minutah: ");
scanf("%d", &min);

while (min > 0)
    {
    hour = min / MIN_TO_HOUR;
    min_passed = min % MIN_TO_HOUR;
    printf("%d minut eto: %d chasov, %d minut\n\n", min, hour, min_passed);
    printf("Vvedite znachenie minut <= 0 dlya zaversheniya: ");
    scanf("%d", &min);
    }
    
return 0;
}
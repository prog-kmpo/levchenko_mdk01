/*
Курс: Стивен Прата "Язык программирования C"
Глава: 3
Дата выполнения: 22.02.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/*
7. 
В дюйме 2.54 сантиметра. Напишите программу, которая приглашает вас ввести 
рост в дюймах, после чего выводит на экран этот рост в сантиметрах. 
Либо, если вам так больше нравится , запрашивает рост в сантиметрах и переводит его в дюймы. 
*/

#include <stdio.h>
int main()
{
    float height1, height2;
    float n = 2.54;
    printf("Vvedite vash rost v sm: ");
    scanf("%f", &height1);
    height2 = height1 / n;
    printf("Vash rost v d'iumah: %f", height2);
    return 0;
}
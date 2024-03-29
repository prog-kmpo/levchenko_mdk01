/**
Курс: Стивен Прата "Язык программирования C"
Глава: 6
Дата выполнения: 01.05.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/**
10. Напишите программу, которая запрашивает ввод нижнего и 
верхнего пределов последовательности целых чисел, 
вычисляет сумму всех квадратов целых чисел, начиная 
с квадрата нижнего целочисленного предела и заканчивая 
квадратом верхнего целочисленного предела, после чего 
отображает результат на экране. Затем программа должна 
запрашивать ввод следующих предельных значений и отображать 
ответ, пока пользователь не введет значение верхнего предела, 
который меньше или равен нижнему пределу. 
Результаты выполнения программы должны выглядеть следующим образом:

Введите нижний и верхний целочисленные пределы: 5 9
Сумма квадратов целых чисел от 25 до 81 равна 255
Введите следующую комбинацию пределов: 3 25
Сумма квадратов целых чисел от 9 до 625 равна 95
Введите следующую комбинацию пределов: 5 5
Работа завершена
*/
#include <stdio.h>
#include <locale.h>

 int main()
 {
 
 setlocale(LC_ALL, "Rus");

 int min, max;
 int summ = 0;
 int m, M;

 printf("Введите нижний и верхний целочисленные пределы:\n");

 scanf("%d %d", &min, &max);

 while (min != max)
        {
         for (m=min, M=max+1; m != M; m++)
                 summ += m*m;
         printf("Сумма квадратов целых чисел от %d до %d равна %d\n",
                min*min, max*max, summ);
         summ=0;                       
         printf("Введите следующую комбинацию пределов:\n");
         scanf("%d %d", &min, &max);
        }
 printf("Работа завершена");
 
 return 0;
 }
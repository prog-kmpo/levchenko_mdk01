/**
Курс: Стивен Прата "Язык программирования C"
Глава: 6
Дата выполнения: 29.03.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/**
3. Воспользуйтесь вложенными циклами, чтобы написать программу, которая выводит следующую последовательность символов:

F
FE
FED
FEDC
FEDCB
FEDCBA
Примечание: если в вашей системе нс используется ASCII или какая-то другая
кодировка, в которой буквы представлены в числовом порядке, то для инициализации символьного массива буквами алфавита вы можете применять следующее объявление:
char lets[27] = «ABCDEFGHIJKLMNOPQRSTUVWXYZ»;
Затем для выбора конкретных букв можно использовать индексы массива, например, lets [О] для ‘А’ и т.д.
*/
#include <stdio.h>
 int main(void)
 {

 int r, c;
 char res;

 for (r = 0; r < 6; r++)
        {
        res = 'F';
        for (c = 0; c <= r; c++)
                {
                printf("%c", res--);
                }
        printf("\n");
        }

 return 0;
 }



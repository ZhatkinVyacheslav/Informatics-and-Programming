#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main() {
    //init
    setlocale(LC_ALL, "ru");
    int rannum;  // случайное число загаданное программой 
    int myot;    // мой ответ в 1-ом режиме игры 
    int mode;    // режим игры 
    int k;       // кол-во попыток
    int ot;      // ответ программы во втором режиме игры
    int izm;     // число на которое изменяется ответ программы 
    char znak;   // больше, меньше или равно 
    ot = 500;
    izm = 500;
    k = 0;

    printf("Введите номер режима (1 или 2): ");
    scanf_s("%d", &mode);

    //action and output

    switch (mode)
    {
    case 1:
    {
        srand(time(0));
        rannum = rand() % 1000;

        do
        {
            printf("Напишите число, которое как вы думаете загадала программа от 1 до 1000: ");
            scanf_s("%d", &myot);
            printf("----------------------------------------------------------------------\n");

            if (rannum == myot)
            {
                printf(">Юху! Вы угадали!");
                k++;
                printf("\nВы использовали %d попыток", k);
            }
            else
            {
                if (rannum < myot)
                {
                    printf(">Попробуйте число поменьше \n");
                    k++;
                }
                else
                {
                    if (rannum > myot)
                    {
                        printf(">Попробуйте число побольше \n");
                        k++;
                    }
                }
            }
        } while (rannum != myot);
    } break;

    case 2:
    {
        printf("Загадайте число от 1 до 1000, еслт число которое вам выведет робот будет меньше вашего напишие '>' если больше '<' и '=' если равно");
        printf("\n-------------------------------------------------------------------\n");
        do
        {
            printf(">Я думаю правильное число :%d ", ot);
            scanf_s("%ch", &znak);

            izm = izm * 0.9;
            if (izm < 1) izm = 1;
            if (ot > 1000) ot = 1000;
            if (ot < 1) ot = 1;

            if (znak == '=')
            {
                printf("\n>Хе-хе, я угадал!");
                k++;
                printf("\nЧисло попыток: %d", k);
            }
            else
            {
                if (znak == '>')
                {
                    printf("\n>Вот блин, нужно число поменьше");
                    ot = ot - izm;
                    k++;
                }
                else
                {
                    if (znak == '<')
                    {
                        ot = ot + izm;
                        k++;
                    }
                }
            }
    
        } while (znak != '=');
    } break;

    default:
    {
        printf(">Нужно написать число 1 или 2, попробуйте ещё раз");
    }
    break;
    }


    _getch();
    return 0;
}
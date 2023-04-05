#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main() {
    //init
    setlocale(LC_ALL, "ru");
    int rannum;  // ��������� ����� ���������� ���������� 
    int myot;    // ��� ����� � 1-�� ������ ���� 
    int mode;    // ����� ���� 
    int k;       // ���-�� �������
    int ot;      // ����� ��������� �� ������ ������ ����
    int izm;     // ����� �� ������� ���������� ����� ��������� 
    char znak;   // ������, ������ ��� ����� 
    ot = 500;
    izm = 500;
    k = 0;

    printf("������� ����� ������ (1 ��� 2): ");
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
            printf("�������� �����, ������� ��� �� ������� �������� ��������� �� 1 �� 1000: ");
            scanf_s("%d", &myot);
            printf("----------------------------------------------------------------------\n");

            if (rannum == myot)
            {
                printf(">���! �� �������!");
                k++;
                printf("\n�� ������������ %d �������", k);
            }
            else
            {
                if (rannum < myot)
                {
                    printf(">���������� ����� �������� \n");
                    k++;
                }
                else
                {
                    if (rannum > myot)
                    {
                        printf(">���������� ����� �������� \n");
                        k++;
                    }
                }
            }
        } while (rannum != myot);
    } break;

    case 2:
    {
        printf("��������� ����� �� 1 �� 1000, ���� ����� ������� ��� ������� ����� ����� ������ ������ ������� '>' ���� ������ '<' � '=' ���� �����");
        printf("\n-------------------------------------------------------------------\n");
        do
        {
            printf(">� ����� ���������� ����� :%d ", ot);
            scanf_s("%ch", &znak);

            izm = izm * 0.9;
            if (izm < 1) izm = 1;
            if (ot > 1000) ot = 1000;
            if (ot < 1) ot = 1;

            if (znak == '=')
            {
                printf("\n>��-��, � ������!");
                k++;
                printf("\n����� �������: %d", k);
            }
            else
            {
                if (znak == '>')
                {
                    printf("\n>��� ����, ����� ����� ��������");
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
        printf(">����� �������� ����� 1 ��� 2, ���������� ��� ���");
    }
    break;
    }


    _getch();
    return 0;
}
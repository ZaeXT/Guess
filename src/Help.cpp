#include <iostream>
#include <ctime>
using namespace std;

void restart1();

int Help(int num)
{
    srand((unsigned int)time(NULL));

    int var = rand() % 10; //���� 0 + 1 ~ 99 + 1 �����

    int val;

    val = num / 10 % 10;

    if ( var == 0 )
    {
        cout << "������� 0 + 1 �� 99 + 1 �ķ�Χ�ڣ��ϻ�\n";
    }
    else if (var == 1)
    {
        cout << "�������ʮλ��" << val << endl;
    }
    else if (var == 2 )
    {
        cout << "�������" << val << "*" << endl;
    }
    else if (var == 3)
    {
        if (val == 0)
        {
            cout << "�������"
                 << "0"
                 << "~" << val + 1 << "0"
                 << "֮��\n";
        }
        else if(val == 1)
        {
            cout << "�������"
                 << "0"
                 << "~"
                 << "20"
                 << "֮��\n";
        }
        else
        {
            cout << "�������" << val - 1 << "0"
                 << "~" << val + 1 << "0"
                 << "֮��\n"
                 << endl;
        }
    }
    else if( var == 4)
    {
        cout << "����һ��ƽƽ�������ʾ" << endl;
    }
    else if (var == 5)
    {
        if (num > 50)
        {
            cout << "���������50" << endl;
        }
        else
        {
            cout << "�����С�ڣ����ڣ�50" << endl;
        }
    }
    else if (var == 6)
    {
        cout << "д��ʾ���鷳������������" << endl;
    }
    else if(var == 7)
    {
        cout << "�������" << num << endl;
        cout << "��(�� �㧥 ��;)��\n";
        cout << "�㾹Ȼ������ô�ã�\n"
             << "���У�����һ�Σ�����" << endl;
        system("cls");
        restart1();
    }
    else
    {
        cout << "NULL......" << endl;
    }

    return (0);
}
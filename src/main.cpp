#include <iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include <ctime>

void restart1();

int Help(int num);

/*
���ļ���ϰ-������
*/

int main()
{
    START:
    //������������ ���ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��
    srand((unsigned int)time(NULL));

    //1��ϵͳ���������
    int num = rand() % 100 + 1; //���� 0 + 1 ~ 99 + 1 �����
    //cout << num << endl;

    //2����ҽ��в²�
    int val = 0; //������������
    int t = 0;
    cout << "����һ�������ֵ�Ӧ�ó���" << endl;
    cout << "���ȣ�ϵͳ����һ�������(���ɷ�ΧΪ1 ~ 100)" << endl;
    cout << "Ȼ������Ҳ²���ȷ����" << endl;
    cout << "���ֻ��10�β²����" << endl;
    cout << "�����������Ϸ����" << endl;
    cout << "���ܷ������޵Ĵ����ڲ³���ȷ���أ�" << endl;
    cout << "���� START ��ʼ��Ϸ" << endl;
    string start = "YES";

    cin >> start;
    if (start == "START")
    {
        while (t < 10)
        {
            t = ++t;
            cout << "���������Ĵ�:" << endl;
            cin >> val;

            //3���ж���ҵĲ²�
            if (val > num)
            {
                cout << "�²����" << endl;
            }
            else if (val < num)
            {
                cout << "�²��С" << endl;
            }
            else
            {
                cout << "��ϲ���¶���!" << endl;

                system("pause");
                Err_end_choice:
                system("cls");

                cout << "���� RESTART ���¿�ʼ������ END ������Ϸ" << endl;

                string end_choice = "????";
                cin >> end_choice;

                if (end_choice == "RESTART")
                {
                    system("cls");
                    restart1();
                }
                else if (end_choice == "END")
                {
                    goto END;
                }
                else
                {
                    system("cls");
                    cout << "�������������룡" << endl;
                    cin.get();
                    cin.get();
                    goto Err_end_choice;
                }

                //�¶�  �˳���Ϸ
                break; //break��ѭ���У��������øùؼ����˳���ǰѭ��
            }

            if (t == 5 )
            {
                cout << "���������� 114514 ��ȡ��ʾ��\n";
            }
            if (t > 5)
            {
                if (val == 114514)
                {
                    int chs = Help(num);
                    // if (chs == 0)
                    // {
                    //     goto ENDLESS;
                    // }
                    // ENDLESS:
                    // break;
                }
            }
        }
        cout << "��սʧ�ܣ�" << endl;
        system("pause");
        system("cls");
Err_choice:
        cout << "���� RESTART ���¿�ʼ������ END ������Ϸ" << endl;

        string out_end_choice = "????";
        cin >> out_end_choice;

        if (out_end_choice == "RESTART")
        {
            cout << "�����ؿ�..." << endl;

            system("cls");

            restart1();
        }
        else if (out_end_choice == "END")
        {
            goto END;
        }
        else
        {
            cout << "������󣡣���\n���������� �� ���� END �˳�\n";
            system("pause");
            system("cls");
            goto Err_choice;
        }
    }
    else if (start == "END")
    {
        exit(0);
    }
    else
    {
        cout << "������󣡣���\n���������� �� ���� END �˳�\n";
        system("pause");
        system("cls");
        goto START;
    }

    //�´�  ��ʾ�µĽ�� ������С ���·��ص�2��
END:
    system("pause");

    exit(0);
}

#include <iostream>
//timeϵͳʱ��ͷ�ļ�����
#include <ctime>
using namespace std;

int T_num()
{
    //������������ ���ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��
    srand((unsigned int)time(NULL));

    //1��ϵͳ���������
    int num = rand() % 100 + 1; //���� 0 + 1 ~ 99 + 1 �����
    //cout << num << endl;
    return num;
}
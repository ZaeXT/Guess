#include <iostream>
//�����ļ��洢ͷ�ļ�
#include <fstream>
//timeϵͳʱ��ͷ�ļ�����
#include <ctime>
using namespace std;

void T_num()
{
    //������������ ���ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��
    srand((unsigned int)time(NULL));

    //1��ϵͳ���������
    int num = rand() % 100 + 1; //���� 0 + 1 ~ 99 + 1 �����
    //cout << num << endl;
    int numR = num + 114514 - 1919810;
    //2��ϵͳ����.txt�ļ����������
    system("echo xxx>Num.txt");
    fstream f;
	f.open("Num.txt",ios::out);
	//��������д������� 
	f<< numR <<endl;
	f.close();
//    system("attrib +h +s +r Num.txt");
}
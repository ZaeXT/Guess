#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int T_Num();

int Tr_Num()
{
    //�ļ���ȡ����ԭ����ios::out�ĳ�ios::in 
    fstream f;
	f.open("Num.txt",ios::in);
	string s;
	//һֱ�����ļ�ĩβ 
	while(f>>s)
    cout << s << endl;
    int sa = stoi(s);
	f.close();
    //���ش���������
    return sa;
}


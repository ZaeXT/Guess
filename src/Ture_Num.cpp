#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void T_Num();

int Tr_Num()
{
    void T_Num();
    //�ļ���ȡ����ԭ����ios::out�ĳ�ios::in 
    fstream f;
//    system("attrib -h -s -r Num.txt");
    f.open("Num.txt",ios::in);
	string s;
	//һֱ�����ļ�ĩβ 
	while(f>>s)
    cout << s << endl;
    int sa = stoi(s);
	f.close();
    //���ش���������
    int sb = sa - 114514 + 1919810;
//    system("attrib +h +s +r Num.txt");
    return sb;
}


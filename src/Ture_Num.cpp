#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void T_Num();

int Tr_Num()
{
    void T_Num();
    //文件读取，把原来的ios::out改成ios::in 
    fstream f;
//    system("attrib -h -s -r Num.txt");
    f.open("Num.txt",ios::in);
	string s;
	//一直读到文件末尾 
	while(f>>s)
    cout << s << endl;
    int sa = stoi(s);
	f.close();
    //返回储存的随机数
    int sb = sa - 114514 + 1919810;
//    system("attrib +h +s +r Num.txt");
    return sb;
}


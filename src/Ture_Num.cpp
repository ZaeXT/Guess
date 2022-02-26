#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void T_Num();

int Tr_Num()
{
    T_Num();
    //cout << "T_Num函数运行成功！" << endl;
    //system("pause");
    //cin.get();
    //文件读取，把原来的ios::out改成ios::in 
    fstream f;
    system("attrib -h -s -r Num-By-Guess.txt");
    f.open("Num-By-Guess.txt",ios::in);
	string s;
	//一直读到文件末尾 
	while(f>>s)
    cout << "随机数生成成功，Raw:";
    cout << s << endl;
    int sa = stoi(s);
	f.close();
    //返回储存的随机数
    int sb = sa - 114514 + 1919810;
    system("attrib +h +s +r Num-By-Guess.txt");
    system("cls");
    return sb;
}

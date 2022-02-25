#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int T_Num();

int Tr_Num()
{
    //文件读取，把原来的ios::out改成ios::in 
    fstream f;
	f.open("Num.txt",ios::in);
	string s;
	//一直读到文件末尾 
	while(f>>s)
    cout << s << endl;
    int sa = stoi(s);
	f.close();
    //返回储存的随机数
    return sa;
}


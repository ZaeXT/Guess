#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int T_Num();

int Tr_Num()
{
    int num = T_Num();
    system("echo xxx>./Num.txt");
    fstream f;
	f.open("Num.txt",ios::out);
	//输入你想写入的内容 
	f<< num <<endl;
	f.close();
    return 0;
}


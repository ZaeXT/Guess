#include <Windows.h>
#include <shellapi.h>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void Chal_Time_S()
{
    system("mklink CT-By-Guess.txt %AppData%\\Guess-By-ZaeXT\\CT-By-Guess.txt");
    fstream f;
    system("attrib -h -s -r CT-By-Guess.txt");
    f.open("CT-By-Guess.txt",ios::in);
	string ct;
	//一直读到文件末尾 
	while(f>>ct)
    cout << "成功，Raw:";
    cout << ct << endl;
    int ctt = stoi(ct);
	f.close();
    int chal_t = ctt + 1;
    //cout << "创建文件成功！" << endl;
    //system("pause");
    fstream fa;
    fa.open("CT-By-Guess.txt",ios::out);
	//输入你想写入的内容 
	fa<< chal_t <<endl;
	fa.close();
    //cout << "写入数据成功！" << endl;
    //system("pause");
    system("attrib +h +s +r CT-By-Guess.txt");
}
#include <iostream>
//包含文件存储头文件
#include <fstream>
//time系统时间头文件包含
#include <ctime>
using namespace std;

void T_Num()
{

    //添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));

    //1、系统生成随机数
    int num = rand() % 100 + 1; //生成 0 + 1 ~ 99 + 1 随机数
    //cout << num << endl;
    int numR = num + 114514 - 1919810;
    //cout << "生成随机数成功！" << endl;
    //system("pause");
    //2、系统创建.txt文件储存随机数
    system("attrib -h -s -r Num-By-Guess.txt");
    system("del Num-By-Guess.txt");
    system("echo xxx>./Num-By-Guess.txt");
    //cout << "创建文件成功！" << endl;
    //system("pause");
    fstream f;
	f.open("Num-By-Guess.txt",ios::out);
	//输入你想写入的内容 
	f<< numR <<endl;
	f.close();
    //cout << "写入数据成功！" << endl;
    //system("pause");
    system("attrib +h +s +r Num-By-Guess.txt");
}
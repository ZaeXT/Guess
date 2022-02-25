#include <iostream>
//包含文件存储头文件
#include <fstream>
//time系统时间头文件包含
#include <ctime>
using namespace std;

void T_num()
{
    //添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));

    //1、系统生成随机数
    int num = rand() % 100 + 1; //生成 0 + 1 ~ 99 + 1 随机数
    //cout << num << endl;
    int numR = num + 114514 - 1919810;
    //2、系统创建.txt文件储存随机数
    system("echo xxx>Num.txt");
    fstream f;
	f.open("Num.txt",ios::out);
	//输入你想写入的内容 
	f<< numR <<endl;
	f.close();
//    system("attrib +h +s +r Num.txt");
}
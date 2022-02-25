#include <iostream>
//time系统时间头文件包含
#include <ctime>
using namespace std;

int T_num()
{
    //添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));

    //1、系统生成随机数
    int num = rand() % 100 + 1; //生成 0 + 1 ~ 99 + 1 随机数
    //cout << num << endl;
    return num;
}
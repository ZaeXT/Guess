#include <iostream>
#include <ctime>
using namespace std;

int main();

void Help(int num)
{
    //添加随机数种子，生成提示用
    srand((unsigned int)time(NULL));

    int var = rand() % 10;  //生成 10 个随机数
    // var = 7;

    int val;                //提示用，初始化提示值

    val = num / 10 % 10;    //提示用，计算随机数范围
                            //提示选择体
    if (var == 0)
    {
        cout << "这个数在 0 + 1 到 99 + 1 的范围内（废话\n";
    }
    else if (var == 1)
    {
        cout << "这个数的十位是" << val << endl;
    }
    else if (var == 2)
    {
        cout << "这个数是" << val << "*" << endl;
    }
    else if (var == 3)
    {
        if (val == 0)
        {
            cout << "这个数在"
                 << "0"
                 << "~" << val + 1 << "0"
                 << "之间\n";
        }
        else if (val == 1)
        {
            cout << "这个数在"
                 << "0"
                 << "~"
                 << "20"
                 << "之间\n";
        }
        else
        {
            cout << "这个数在" << val - 1 << "0"
                 << "~" << val + 1 << "0"
                 << "之间\n"
                 << endl;
        }
    }
    else if (var == 4)
    {
        cout << "这是一条平平无奇的提示" << endl;
    }
    else if (var == 5)
    {
        if (num > 50)
        {
            cout << "这个数大于50" << endl;
        }
        else
        {
            cout << "这个数小于（等于）50" << endl;
        }
    }
    else if (var == 6)
    {
        cout << "写提示好麻烦啊啊啊！！！" << endl;
    }
    else if (var == 7)
    {
        cout << "这个数是" << num << endl;
        cout << "Σ(っ °Д °;)っ\n";
        cout << "你竟然运气这么好！\n"
             << "不行，再来一次！！！" << endl;
        cin.get();
        cin.get();
        system("cls");
        main();
    }
    else if (var == 8)
    {
        cout << "这是个整数（废话" << endl;
    }
    else
    {
        cout << "NULL......" << endl;
    }
}
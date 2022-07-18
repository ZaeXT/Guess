#include <iostream>
#include <Windows.h>
#include <stdlib.h>
using namespace std;
extern int numT;
void Help(long numT);

int main();

void Fail();

long T_Num(long numC);

long WhileM(long num)
{
    int numTS = T_Num(1);   //加密数获取
    int pmp = T_Num(2);     //+ - 运算获取
    if (pmp == 0)
    {
        numT = num - numTS;
    }
    else
    {
        numT = num + numTS;
    }
    int val = 0;            //玩家输入的数字
    int t = 0;
    while (t < 10)
    {
        t = ++t;
        cout << "请输入您的答案:" << endl;
        cin >> val;
        if(cin.good())
        {
            goto START;
        }
        else
        {
            cout << "程序识别出错！！！" << endl;
            Sleep(1000);
            cout << "正在重启程序." << endl;
            Sleep(1000);
            cout << "正在重启程序.." << endl;
            Sleep(1000);
            cout << "正在重启程序..." << endl;
            Sleep(1500);
            cout << "重启完成！！！" << endl;
            system("cls");
            system("Guess.exe");
            exit(0);
            system("taskkill /f /im Guess.exe");
        }
START:
        // 3、判断玩家的猜测
        if (val > numT)
        {
            cout << "猜测过大" << endl;
        }
        else if (val < numT)
        {
            cout << "猜测过小" << endl;
        }
        else if (val == numT)
        {
            cout << "恭喜您猜对了!" << endl;

            system("pause");

            system("cls");

            cout << "您可以输入 RESTART 重新开始游戏或 END 结束游戏！" << endl;
            string choice = "abc";
            FChoice:
            cin >> choice;
            if (choice == "RESTART")
            {
                main();
            }
            else if (choice == "END")
            {
                exit(0);
            }
            else
            {
                cout << "输入错误！请重新输入！" << endl;
                goto FChoice;
            }
        }
        else
        {
            cout << "???" << endl;
        }
        if (t == 5 )
        {
            cout << "您可以输入 114514 获取提示！\n";
        }
        if (t > 5)
        {
            if (val == 114514)
            {
                Help(numT);
            }
        }
    }
    return 0;
}
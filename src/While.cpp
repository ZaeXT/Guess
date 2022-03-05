#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

void Help(int num);

int main();

void Fail();

int While(int num)
{
    int val = 0;    //玩家输入的数字
    int t = 0;
    while (t < 10)
    {
        t = ++t;
        cout << "请输入您的答案:" << endl;
        cin >> val;
        if(cin.good())
        {
            goto RSTART;
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
RSTART:
        // 3、判断玩家的猜测
        if (val > num)
        {
            cout << "猜测过大" << endl;
        }
        else if (val < num)
        {
            cout << "猜测过小" << endl;
        }
        else if (val == num)
        {
            cout << "恭喜您猜对了!" << endl;

            system("pause");

            system("cls");

            cout << "您可以输入 RESTART 重新开始游戏或 END 结束游戏！" << endl;
            string choice = "???";
            FChoice:
            cin >> choice;
            if (choice == "RESTART")
            {
                int main();
            }
            else if (choice == "END")
            {
                system("attrib -h -s -r Num-By-Guess.txt");
                system("del Num-By-Guess.txt");
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
                Help(num);
            }
        }
    }
    return 0;
}
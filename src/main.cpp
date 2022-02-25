#include <iostream>
using namespace std;
//time系统时间头文件包含
#include <ctime>

void restart1();

int Help(int num);

/*
本文件练习-猜数字
*/

int main()
{
    START:
    //添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));

    //1、系统生成随机数
    int num = rand() % 100 + 1; //生成 0 + 1 ~ 99 + 1 随机数
    //cout << num << endl;

    //2、玩家进行猜测
    int val = 0; //玩家输入的数字
    int t = 0;
    cout << "这是一个猜数字的应用程序" << endl;
    cout << "首先，系统生成一个随机数(生成范围为1 ~ 100)" << endl;
    cout << "然后，让玩家猜测正确数字" << endl;
    cout << "玩家只有10次猜测机会" << endl;
    cout << "机会用完后游戏结束" << endl;
    cout << "您能否在有限的次数内猜出正确答案呢？" << endl;
    cout << "输入 START 开始游戏" << endl;
    string start = "YES";

    cin >> start;
    if (start == "START")
    {
        while (t < 10)
        {
            t = ++t;
            cout << "请输入您的答案:" << endl;
            cin >> val;

            //3、判断玩家的猜测
            if (val > num)
            {
                cout << "猜测过大" << endl;
            }
            else if (val < num)
            {
                cout << "猜测过小" << endl;
            }
            else
            {
                cout << "恭喜您猜对了!" << endl;

                system("pause");
                Err_end_choice:
                system("cls");

                cout << "输入 RESTART 重新开始或输入 END 结束游戏" << endl;

                string end_choice = "????";
                cin >> end_choice;

                if (end_choice == "RESTART")
                {
                    system("cls");
                    restart1();
                }
                else if (end_choice == "END")
                {
                    goto END;
                }
                else
                {
                    system("cls");
                    cout << "错误，请重新输入！" << endl;
                    cin.get();
                    cin.get();
                    goto Err_end_choice;
                }

                //猜对  退出游戏
                break; //break在循环中，可以利用该关键字退出当前循环
            }

            if (t == 5 )
            {
                cout << "您可以输入 114514 获取提示！\n";
            }
            if (t > 5)
            {
                if (val == 114514)
                {
                    int chs = Help(num);
                    // if (chs == 0)
                    // {
                    //     goto ENDLESS;
                    // }
                    // ENDLESS:
                    // break;
                }
            }
        }
        cout << "挑战失败！" << endl;
        system("pause");
        system("cls");
Err_choice:
        cout << "输入 RESTART 重新开始或输入 END 结束游戏" << endl;

        string out_end_choice = "????";
        cin >> out_end_choice;

        if (out_end_choice == "RESTART")
        {
            cout << "正在重开..." << endl;

            system("cls");

            restart1();
        }
        else if (out_end_choice == "END")
        {
            goto END;
        }
        else
        {
            cout << "输入错误！！！\n请重新输入 或 输入 END 退出\n";
            system("pause");
            system("cls");
            goto Err_choice;
        }
    }
    else if (start == "END")
    {
        exit(0);
    }
    else
    {
        cout << "输入错误！！！\n请重新输入 或 输入 END 退出\n";
        system("pause");
        system("cls");
        goto START;
    }

    //猜错  提示猜的结果 过大或过小 重新返回第2步
END:
    system("pause");

    exit(0);
}

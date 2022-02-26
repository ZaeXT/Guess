#include <iostream>
using namespace std;

int Tr_Num();

void Start_Text();

void HelpMore();

int main()
{
START:
    int num = Tr_Num();
    //cout << num << endl;
    // 2、玩家进行猜测
    int val = 0; //玩家输入的数字
    int t = 0;
    Start_Text();
    string start = "YES";

    cin >> start;
    if (start == "START")
    {
        while (t < 10)
        {
            t = ++t;
            cout << "请输入您的答案:" << endl;
            cin >> val;

            // 3、判断玩家的猜测
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
            }
            Err_end_choice:
            system("cls");

            cout << "输入 RESTART 重新开始或输入 END 结束游戏" << endl;

            string end_choice = "????";
            cin >> end_choice;

            if (end_choice == "RESTART")
            {
                system("cls");
            }
            else if (end_choice == "END")
            {
                //goto END;
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
                //int chs = Help(num);
                // if (chs == 0)
                // {
                //     goto ENDLESS;
                // }
                // ENDLESS:
                // break;
            }
        }
    }
    else if(start == "HelpMore")
    {
        HelpMore();
        goto START;
    }
    //         cout << "挑战失败！" << endl;
    //         system("pause");
    //         system("cls");
    // Err_choice:
    //         cout << "输入 RESTART 重新开始或输入 END 结束游戏" << endl;

    //         string out_end_choice = "????";
    //         cin >> out_end_choice;

    //         if (out_end_choice == "RESTART")
    //         {
    //             cout << "正在重开..." << endl;

    //             system("cls");

    //             restart1();
    //         }
    //         else if (out_end_choice == "END")
    //         {
    //             goto END;
    //         }
    //         else
    //         {
    //             cout << "输入错误！！！\n请重新输入 或 输入 END 退出\n";
    //             system("pause");
    //             system("cls");
    //             goto Err_choice;
    //         }
    //     }
    //     else if (start == "END")
    //     {
    //         exit(0);
    //     }
    //     else
    //     {
    //         cout << "输入错误！！！\n请重新输入 或 输入 END 退出\n";
    //         system("pause");
    //         system("cls");
    //         goto START;
    //     }

    //     //猜错  提示猜的结果 过大或过小 重新返回第2步
    // END:
    //     system("pause");

    //     exit(0);
}

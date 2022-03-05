#include <iostream>
using namespace std;

int Tr_Num();

void Start_Text();

void HelpMore();

int While(int num);

void Fail();

int main()
{
START:
    int num = Tr_Num();
    //cout << num << endl;
    // 2、玩家进行猜测
    Start_Text();
    string start = "YES";
STARTF:
    cin >> start;
    if (start == "START")
    {
        cout << "开始挑战！" << endl;
        system("cls");
        While(num);
        cout << "挑战失败.输入 RESTART 重试或 END 退出" << endl;
        void Fail();
    }
    else if(start == "HelpMore")
    {
        HelpMore();
        goto START;
    }
    else
    {
        cout << "输入错误，请重新输入！！！" << endl;
        goto STARTF;
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

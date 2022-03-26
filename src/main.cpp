#include <iostream>
using namespace std;

int Tr_Num();
void Start_Text();
void HelpMore();
int While(int num);
void Fail();
void if_FS();
void Chal_Time_S();
int main()
{
    if_FS();
START:
    Chal_Time_S();
    int num = Tr_Num();
    //cout << num << endl;
    // 2、玩家进行猜测
    Start_Text();
    //cout << num << endl;
    string start = "YES";
STARTF:
    cin >> start;
    if (start == "START")
    {
        cout << "开始挑战！" << endl;
        system("cls");
        While(num);
        cout << "挑战失败.输入 RESTART 重试或 END 退出" << endl;
        Fail();
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
}

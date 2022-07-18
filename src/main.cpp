#include <iostream>
using namespace std;

int T_Num();                //生成随机数
void Start_Text();          //开始文本
// void HelpMore();
void WhileM(int num);       //主要功能实现函数
void Fail();                //失败后选择函数
// void if_FS();
// void Chal_Time_S();
int main()
{
    system("chcp 65001");   //设置命令行使用UTF-8标准   ---Windows用
    system("cls");
    int num = T_Num();      //获取随机数并赋值给 num 变量
    // cout << num << endl;  //输出数字  ---Debug用
    //玩家进行猜测
    Start_Text();           //开始文本
    string start = "aaa";   //初始化字符串start
STARTF:                     //输入错误时再次调用
    cin >> start;           //用户做出选择
    //判断选择
    if (start == "START")
    {
        cout << "开始挑战！" << endl;
        system("cls");
        WhileM(num);        //调用功能实现函数，传入随机数
        cout << "挑战失败 输入 RESTART 重试或 END 退出" << endl;
        Fail();             //调用失败后选择
    }
    else
    {
        cout << "输入错误 请重新输入！！！" << endl;
        goto STARTF;        //游戏开始输入错误时使用
    }
}

#include <iostream>
#include <string>
using namespace std;

int main();

void Fail()
{
    string choice = "xyz";  //初始化选择值
FChoice:                    //输入错误跳转用
    cin >> choice;
    if (choice == "RESTART")
    {
        main();             //调用主函数体重开
    }
    else if (choice == "END")
    {
        exit(0);
    }
    else
    {
        cout << "输入错误！请重新输入！" << endl;
        goto FChoice;       //输入错误跳转用
    }
}
#include <iostream>
#include <string>
using namespace std;

int main();

void Fail()
{
    string choice = "xyz";
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
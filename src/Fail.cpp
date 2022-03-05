#include <iostream>
#include <string>
using namespace std;

int main();

void Fail()
{
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
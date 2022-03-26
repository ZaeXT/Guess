#include <Windows.h>
#include <shellapi.h>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void if_FS()
{
    fstream f;
    // system("attrib -h -s -r FS-By-Guess.txt");
    // system("attrib -h -s -r Num-By-Guess.txt");
    // system("attrib -h -s -r CT-By-Guess.txt");
    // system("del FS-By-Guess.txt");
    // system("del Num-By-Guess.txt");
    // system("del CT-By-Guess.txt");
    system("mklink FS-By-Guess.txt %AppData%\\Guess-By-ZaeXT\\FS-By-Guess.txt");
    f.open("FS-By-Guess.txt", ios::in);
    string fs;
    //一直读到文件末尾
    while (f >> fs)
        cout << fs << endl;
    f.close();
    cout << fs << endl;
    if (fs == "xxx")
    {
        cout << fs << endl;
        system("cls");
    }
    else
    {
        // system("attrib -h -s -r Num-By-Guess.txt");
        // system("del Num-By-Guess.txt");
        system("mkdir %AppData%\\Guess-By-ZaeXT");
        system("mkdir %AppData%\\Guess-By-ZaeXT\\Challenge-Time");
        system("echo %AppData%\\Guess-By-ZaeXT\\Challenge-Time\\>CT-Path.txt");
        fstream fl;
        fl.open("CT-Path.txt", ios::in);
        string fp;
        fl >> fp;
        cout << "读取目录成功！" << endl;
        cout << fp << endl;
        fl.close();
        fstream File_output;
        File_output.open(fp + "Cha-Time" + ".txt", fstream::out);
        string text = "0";
        File_output << text;
        File_output.close();
        system("echo xxx>FS-By-Guess.txt");
        system("move FS-By-Guess.txt %AppData%\\Guess-By-ZaeXT\\iF-FirstStart\\");
        system("echo xxx>Num-By-Guess.txt");
        system("move Num-By-Guess.txt %AppData%\\Guess-By-ZaeXT\\Num\\");
    }
}

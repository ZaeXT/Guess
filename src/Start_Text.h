#include <iostream>
#ifndef Start_Texh_H
#define Start_Texh_H
void S_T();
class Start_T
{
    public:
        static void S_T();
};
void S_T()
{
        std::cout << "这是一个猜数字的应用程序\n"
                  << "首先，系统生成一个随机数(生成范围为1 ~ 100)\n"
                  << "然后，让玩家猜测正确数字\n"
                  << "玩家只有10次猜测机会\n"
                  << "机会用完后游戏结束\n"
                  << "您能否在有限的次数内猜出正确答案呢？\n"
                  << "输入 START 开始游戏 By Akaze\n";
}
#endif
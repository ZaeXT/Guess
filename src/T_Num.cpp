//time系统时间头文件包含
#include <ctime>
#include <stdlib.h>
using namespace std;

long T_Num(long numC)
{

    //添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));
    long NumC = numC;
    int *mp;
    int *pmp;
    if (NumC == 0)
    {
        //系统生成随机数
        long num = rand() % 100 + 1;        //生成 0 + 1 ~ 99 + 1 随机数
        int numR = rand();            //生成加密数
        int *np = &numR;
        *mp = *np;
        int pm = rand() % 2;                //选择进行 + 或 - 运算
        int *pms = &pm;
        *pmp = *pms;
        int numF;
        if (pm == 0)
        {
            numF = num + numR;
            return (numF);
        }
        else
        {
            numF = num - numR;
            return (numF);
        }
    }
    else if (NumC == 1)                     //返回numR加密数
    {
        return (*mp);
    }
    else if (NumC == 2)
    {
        return (*pmp);
    }
    return (0);
}
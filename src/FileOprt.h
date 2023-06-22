//File Operation
#include <fstream>
#include <string>
#ifndef FILEOPRT_H
#define FILEOPRT_H
class file_oprt
{
    private:
        int in_num, tmp_num, out_num;
        std::string in_str, tmp_str, out_str, path, file_name;
    public:
        std::string oprt_file;
        std::string create_file(int n = 1);
};
#endif
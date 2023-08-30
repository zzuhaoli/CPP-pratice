#include<iostream>

int g_a=10;
int g_b=10;
const int c_g_a=10;
const int c_g_b=10;
int main()
{
    int a=10;
    int b=10;
    static int s_a=10;
    static int s_b=10;
    const int c_a=10;
    const int c_b=10;
    std::cout<<"局部变量a的地址为:"<<&a<<std::endl;
    std::cout<<"局部变量b的地址为:"<<&b<<std::endl;
    std::cout<<"局部常c_a的地址为:"<<&c_a<<std::endl;
    std::cout<<"局部常c_b的地址为:"<<&c_b<<std::endl;
    std::cout<<"全局变量g_a的地址为:"<<&g_a<<std::endl;
    std::cout<<"全局变量g_b的地址为:"<<&g_b<<std::endl;
    std::cout<<"全局常量c_g_a的地址为:"<<&c_g_a<<std::endl;
    std::cout<<"全局常量c_g_b的地址为:"<<&c_g_b<<std::endl;
    std::cout<<"静态变量s_a的地址为:"<<&s_a<<std::endl;
    std::cout<<"静态变量s_b的地址为:"<<&s_b<<std::endl;
    return 0;
}


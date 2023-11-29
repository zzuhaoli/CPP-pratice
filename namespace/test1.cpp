#include<iostream>
void add(int a,int b)
{
    int c=a+b;
std::cout<<"求和值为："<<c<<std::endl;
}

namespace test
{
    void add(int a,int b)
    {
       int c=a+b;
       std::cout<<"求和值为："<<c<<std::endl;
    }
}

int main()
{
    int a=1;
    int b=2;
    add(1,2);
    test::add(1,2);
    return 0;
}

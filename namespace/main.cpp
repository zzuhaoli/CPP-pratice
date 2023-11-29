#include<iostream>
#include"test2.hh"
using namespace test2::rectangle;
using namespace test2::cube;

int main()
{
    rec rec1(2.0,3.0);
    double sur=rec1.surface();

    cub cub1(2.0,3.0,4.0);
    double vol=cub1.volume();
    
    std::cout<<"The surface of the rectangle is:"<<sur<<std::endl;
    std::cout<<"The volume of the cube is:"<<vol<<std::endl;
}


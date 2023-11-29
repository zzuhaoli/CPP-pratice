#include<iostream>
#include"f.hh"
int main()
{
    circle c1(6.6);
    circle c2(8.8);
    std::cout<<"The area of the c1 is "<<c1.cau_surface()<<std::endl;
    std::cout<<"The area of the c1 is "<<c1.cau_perimeter()<<std::endl;
    std::cout<<"The area of the c2 is "<<c2.cau_surface()<<std::endl;
    std::cout<<"The area of the c2 is "<<c2.cau_perimeter()<<std::endl;
    return 0;
}

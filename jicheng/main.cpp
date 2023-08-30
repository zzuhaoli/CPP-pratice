#include<iostream>
#include"f.hh"
int main()
{
    surface rectangle(2,2);
    rectangle.set(15,20);
    cube cube1(1,1,2);
    cube1.set(25,30);
    cube1.set_heigth(35);
    
    std::cout<<"长方形长为："<<rectangle.get_length()<<std::endl;
    std::cout<<"长方形宽为："<<rectangle.get_width()<<std::endl;
    std::cout<<"长方形面积为："<<rectangle.area()<<std::endl;
    std::cout<<"长方体长为："<<cube1.get_length()<<std::endl;
    std::cout<<"长方体宽为："<<cube1.get_width()<<std::endl;
    std::cout<<"长方体高为："<<cube1.get_heigth()<<std::endl;
    std::cout<<"长方体体积为："<<cube1.volume()<<std::endl;
    std::cout<<"长方体体积为："<<cube1.get_length()*cube1.get_width()*cube1.get_heigth()<<std::endl;
    return 0;
}

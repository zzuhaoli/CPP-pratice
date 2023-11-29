#include<iostream>
#include<memory>
#include"f.hh"
int main()
{
    std::unique_ptr<cube>p1=std::make_unique<cube>(6.6,6.6,6.6);
    double sur1=p1->surface();
    double vol1=p1->volume();
    p1->test1(std::move(p1));
     
    std::shared_ptr<cube>p2=std::make_shared<cube>(8.8,8.8,8.8);
    double sur2=p2->surface();
    double vol2=p2->volume();
    p1->test2(p2);

    std::shared_ptr<cube>p3=p2;
    double sur3=p3->surface();
    double vol3=p3->volume();

    std::cout<<"The surface of the cube is:"<<sur1<<std::endl;
    std::cout<<"The volume of the cube is:"<<vol1<<std::endl;
    std::cout<<"The surface of the cube is:"<<sur2<<std::endl;
    std::cout<<"The volume of the cube is:"<<vol2<<std::endl;
    std::cout<<"The surface of the cube is:"<<sur3<<std::endl;
    std::cout<<"The volume of the cube is:"<<vol3<<std::endl;
}

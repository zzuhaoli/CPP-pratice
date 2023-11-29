#include<iostream>
#include"f.hh"
#include<memory>
cube::cube(double length,double weigth,double heigth):m_length(length),m_weigth(weigth),m_heigth(heigth){};

double cube::surface()
{
    double sur;
    sur=2*(m_length*m_weigth)+2*(m_length*m_heigth)+2*(m_weigth*m_heigth);
    return sur;    
}

double cube::volume()
{
    double vol;
    vol=m_length*m_weigth*m_heigth;
    return vol;
}

void cube::test1(std::unique_ptr<cube>p)
{
    double sur=p->surface();
    double vol=p->volume();
    std::cout<<"unique_ptr passed by value:The surface of the cube is:"<<sur<<std::endl;
    std::cout<<"unique_ptr passed by value:The volume of the cube is:"<<sur<<std::endl;

}
void cube::test2(std::shared_ptr<cube>p)
{
    double sur=p->surface();
    double vol=p->volume();
    std::cout<<"shared_ptr passed by value:The surface of the cube is:"<<sur<<std::endl;
    std::cout<<"shared_ptr passed by value:The volume of the cube is:"<<sur<<std::endl;
}

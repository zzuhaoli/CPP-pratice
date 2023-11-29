include<iostream>
#include"test2.hh"

using namespace test2::rectangle;
using namespace test2::cube;

rec::rec(double length,double weigth):m_length(length),m_weigth(weigth){}
double rec::surface()
{
    double sur=m_length*m_weigth;
    return sur;
}

cub::cub(double length,double weigth,double heigth):m_length(length),m_weigth(weigth),m_heigth(heigth){}
double cub::volume()
{
    double vol=m_length*m_weigth*m_heigth;
    return vol;
}




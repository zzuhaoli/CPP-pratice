#include<iostream>
#include"f.hh"
//surface成员函数
surface::surface(int len,int wei)
{
    length=len;
    width=wei;
}
void surface::set(int len,int wei)
{
    length=len;
    width=wei;
}
int surface::get_length()
{
    return length;
}
int surface::get_width()
{
    return width;
}
//cube成员函数
cube::cube(int len,int wei,int hei):surface(len,wei),heigth(hei)
{  }
void cube::set_heigth(int hei)
{
    heigth=hei;	
}
int cube::get_heigth()
{
    return heigth;
}
//计算面积
int surface::area()
{
    return length*width;
}

//计算体积
int cube::volume() 
{
    return get_length()*heigth*get_width();
}



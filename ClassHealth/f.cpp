#include<iostream>
#include"f.hh"
//构造函数定义
person::person(std::string n,int a,float h,int w)
{
    m_name=n;	
    m_age=a;
    m_height=h;
    m_weight=w;
}

double person::p_bmi()
{
    return m_weight/(m_height*m_height);
}

void person::set_name(std::string n)
{
    m_name=n;
   
}

void person::set(int a,float h,int w)
{
    m_age=a;
    m_height=h;
    m_weight=w;
    return;

}

std::string person::get_name()
{
    return m_name;
}
int person::get_age()
{
    return m_age;
}
float person::get_height()
{
    return m_height;
}
int person::get_weight()
{
    return m_weight;
}

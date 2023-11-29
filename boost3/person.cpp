#include<iostream>
#include<boost/program_options.hpp>
#include"person.hh"

person::person(std::string name,double length,double weigth):m_name(name),m_length(length),m_weigth(weigth){}
void person::set_name(std::string name)
{
    m_name=name;
}
void person::set_length(double length)
{
    m_length=length;
}
void person::set_weigth(double weigth)
{
    m_weigth=weigth;
}
std::string person::get_name(){return m_name;}
double person::get_length(){return m_length;}
double person::get_weigth(){return m_weigth;}
double person::caulate_bmi()
{
    double bmi=(m_weigth)/(m_length*m_length);
    return bmi;
}

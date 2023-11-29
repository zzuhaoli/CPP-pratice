#include"f.hh"
#include<string>
#include<iostream>
basic_inf::basic_inf(std::string schoolname, std::string classname): m_schoolname(schoolname),m_classname(classname){};
std::string basic_inf::get_schoolname(){return m_schoolname;}
std::string basic_inf::get_classname(){return m_classname;}

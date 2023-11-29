#include "student.hpp"

student::student(int age ,std::string name,std::string school):m_age(age),m_name(name),m_school(school){}


int student::get_age(){return m_age;}
std::string student::get_name(){return m_name;}
std::string student::get_school(){return m_school;}

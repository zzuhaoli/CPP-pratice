#pragma once
#include <string>
class student
{
  private:
       int m_age;
       std::string m_name;
       std::string m_school;
  public:
       student(int age ,std::string name,std::string school);
       
       int get_age();
       std::string get_name();
       std::string get_school();


};

#pragma once
#include<string>
class basic_inf
{
  private:
    std::string m_schoolname;
    std::string m_classname;
  public:
    basic_inf(std::string schoolname,std::string classname);
    std::string get_schoolname();
    std::string get_classname();
};

#include<iostream>
#pragma once
class worker
{   
  public:
    int m_id;
    std::string m_name;
    int m_deptid;

    virtual void show_info()=0;

    virtual std::string get_deptname()=0;
};

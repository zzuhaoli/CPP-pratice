#include<iostream>
#include"worker.hh"
#pragma once
class manger:public worker
{
  public:    
    manger(int id,std::string name,int daptname);  

    virtual void show_info();

    virtual std::string get_deptname();
};

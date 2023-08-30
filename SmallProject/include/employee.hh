#include<iostream>
#include"worker.hh"
#pragma once
class employee:public worker
{
  public:	
     employee(int id,std::string name,int deptid);

     virtual void show_info();

     virtual std::string get_deptname();
};

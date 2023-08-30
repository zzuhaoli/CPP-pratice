#include<iostream>
#pragma once
#include"worker.hh"
class boss:public worker
{
    public:    
    boss(int id,std::string name,int daptname);

    virtual void show_info();

    virtual std::string get_deptname();
};

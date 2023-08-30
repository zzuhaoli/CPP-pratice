#include<iostream>
#include"manger.hh"
manger::manger(int id,std::string name,int deptid)
{
    this->m_id=id;
    this->m_name=id;
    this->m_deptid=deptid;
}

void manger::show_info()
{
    std::cout<<"职工编号为："<<m_id
        <<"职工姓名为："<<m_name
        <<"岗位："<<get_deptname()
        <<"岗位职责：完成老板交给的任务";                    
}

std::string manger::get_deptname()
{
    return "员工";
}

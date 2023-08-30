#include<iostream>
#include"boss.hh"
boss::boss(int id,std::string name,int deptid)
{
    this->m_id=id;
    this->m_name=name;
    this->m_deptid=deptid;
}

void boss::show_info()
{
    std::cout<<"职工编号为："<<m_id
        <<"职工姓名为："<<m_name
        <<"岗位："<<m_deptid
        <<"岗位职责：管理公司所有事务";
}

std::string boss::get_deptname()
{
    return "老板";
}                                                                                                                                                                                                           

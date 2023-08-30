#include<iostream>
#include"employee.hh"
 employee::employee(int id,std::string name,int deptid)

{
    this->m_id=id;
    this->m_name=name;
    this->m_deptid=deptid;
}

void employee::show_info()
{
     std::cout<<"职工编号为："<<m_id
          <<"职工姓名为："<<m_name
	  <<"岗位："<<m_deptid
	  <<"岗位职责：完成经理交给的任务";
}

std::string employee::get_deptname()
{
    return "员工";
}

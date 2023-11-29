#include<iostream>
#include<map>
#include"manager.hh"
#include<fstream>
int size;
std::map<int,worker*>m_worker;
manager::manager(){}

void manager::show_menu()
{
    std::cout<<"欢迎使用职工管理系统！"<<std::endl;
    std::cout<<"0.退出管理程序"<<std::endl;
    std::cout<<"1.增加职工信息"<<std::endl;
    std::cout<<"2.显示职工信息"<<std::endl;
    std::cout<<"3.删除离职职工"<<std::endl;
    std::cout<<"4.修改职工信息"<<std::endl;
    std::cout<<"5.查找职工信息"<<std::endl;
    std::cout<<"6.按照编号排序"<<std::endl;
    std::cout<<"7.清空所有文档"<<std::endl;
}
void manager::exitsystem()
{
    std::cout<<"欢迎下次使用！"<<std::endl;
    exit(0);
}
void manager::show()
{
    for(const auto& pair : m_worker)
    {
       int key=pair.first;
       worker* value=pair.second;       
       std::cout<<key<<" 职工id："<<value->m_id<<"  姓名："<<value->m_name<<"  部门id："<<value->m_deptid<<std::endl;
    }

}

void manager::savedata()
{
    std::ofstream ofs;
    ofs.open("worker.txt",std::ios::out|std::ios::app);
    for(const auto& pair : m_worker)
    {
	int key=pair.first;
        worker* value=pair.second;    
        ofs<<key<<"  "<<value->m_id<<"  "<<value->m_name<<"  "<<value->m_deptid<<std::endl;
    }
    ofs.close();
    std::cout<<"文件保存成功"<<std::endl;
}

void manager::addperson()
{
    int n; 
    std::cout<<"请问添加几位员工的信息："<<std::endl;
    std::cin>>n;
    size=m_worker.size();
    for(int i=0;i<n;i++)
    {
       int id;
       std::string name;
       int dselect;
      
       std::cout<<"请输入第"<<i+1<<"个新职工的编号:"<<std::endl;
       std::cin>>id;
       std::cout<<"请输入第"<<i+1<<"个新职工的姓名:"<<std::endl;
       std::cin>>name;
       std::cout<<"请选择该职工的岗位:"<<std::endl;
       std::cout<<"1.普通职工"<<std::endl;
       std::cout<<"2.经理"<<std::endl;
       std::cout<<"3.老板"<<std::endl;
       std::cin>>dselect;
       
       worker *newworker=NULL;
       switch(dselect)
       {
	  case 1:
	      newworker = new employee(id,name,1);
	      break;
	  case 2:
              newworker = new manger(id,name,2);
              break;
	  case 3:
              newworker = new boss(id,name,3);
              break;
	  default:
	      break;
       }
       m_worker.insert(std::make_pair(size+i+1,newworker));
       int newsize=m_worker.size();
       size=newsize;
    }
}
manager::~manager(){}

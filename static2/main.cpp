#include<iostream>
#include"f.hh"
#include"student.hh"
#include<vector>
int main()
{   
    basic_inf b1("实验一中","一班");
    basic_inf b2("实验二中","三班");
    std::vector<basic_inf> v1;
    v1.push_back(b1);
    v1.push_back(b2);
    student::set_vector(v1);
    student s1("张三",21,1001);
    student s2("李四",20,1002);
    student s3("王五",22,1003);
    student s4("赵六",21,2001);
    student s5("马三",20,2002);
    student s6("郑二",22,2003);
    student arr[]={s1,s2,s3,s4,s5,s6};
    std::vector<student> v_stu;
    for(int i=0;i<6;i++)
    {
       v_stu.push_back(arr[i]);
    }
    
    auto v2=student::get_vector();
    std::cout<<"********************学生信息统计表******************"<<std::endl;
    std::cout<<"学校       班级        姓名        年龄         学号"<<std::endl;
    //std::cout<<""<<student::get_vector()[0].get_schoolname()<<student::get_vector()[0].get_classname()<<
    for(int n1=0;n1<2;n1++)
    {
      if(n1==0)
      {      
      	for(int n2=0;n2<3;n2++)
       {
    std::cout<<v2[n1].get_schoolname()<<"   "<<v2[n1].get_classname()<<"        "<<v_stu[n2].get_studentname()<<"        "<<v_stu[n2].get_studentage()<<"           "<<v_stu[n2].get_studentnumber()<<std::endl;
       }
      }
      else
      {
	for(int n2=3;n2<6;n2++)
       {
    std::cout<<v2[n1].get_schoolname()<<"   "<<v2[n1].get_classname()<<"        "<<v_stu[n2].get_studentname()<<"        "<<v_stu[n2].get_studentage()<<"           "<<v_stu[n2].get_studentnumber()<<std::endl;
       }
      }  
    }
    return 0;
}  

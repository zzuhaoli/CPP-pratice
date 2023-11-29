#include<iostream>
#include<boost/program_options.hpp>
#include"options.hh"
#include"person.hh"

int main(int agrc,char *agrv[])
{
    boost::program_options::options_description opt;
    addteacher_options(opt);
    addstudent_options(opt);
    auto vm=prase(opt,agrc,agrv);
    auto tea=read_teacher(vm);
    auto stu=read_student(vm);
    school sch(tea,stu);

    auto tea1=sch.get_teacher();
    auto stu1=sch.get_student();
    
    std::cout<<"老师姓名为："<<tea1.m_name<<std::endl;
    std::cout<<"老师年龄为："<<tea1.m_age<<std::endl;
    std::cout<<"老师工号为："<<tea1.m_work_number<<std::endl;
    std::cout<<"老师职称为："<<tea1.m_level<<std::endl;
    std::cout<<"****************"<<std::endl;
    std::cout<<"学生姓名为："<<stu1.m_name<<std::endl;
    std::cout<<"学生年龄为："<<stu1.m_age<<std::endl;
    std::cout<<"学生学号为："<<stu1.m_student_number<<std::endl;
    std::cout<<"学生班级为："<<stu1.m_grade_class<<std::endl;
    return 0;

}

#include"student.hpp"
student::student(int stu_age,int stu_gender,int stu_number,double stu_heigth,double stu_weigth,int stu_status)
{
      m_STU_age=stu_age;
      m_STU_gender=stu_gender;
      m_STU_number=stu_number;
      m_STU_heigth=stu_heigth;
      m_STU_weigth=stu_weigth;
      m_STU_status=stu_status;
}

int student::getSTU_age(){return m_STU_age;}

int student::getSTU_gender(){return m_STU_gender;}

int student::getSTU_number(){return m_STU_number;}

double student::getSTU_heigth(){return m_STU_heigth;}

double student::getSTU_weigth(){return  m_STU_weigth;}

int student::getSTU_status(){return m_STU_status;}

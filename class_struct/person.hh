#pragma once
#include<iostream>
class school
{
  public:
    struct teacher
    {
      std::string m_name;
      int m_age;
      std::string m_work_number;
      std::string m_level; 
    };
    struct student
    {
      std::string m_name;
      int m_age;
      std::string m_student_number;
      std::string m_grade_class;
    };
    school(const teacher &tea,const student &stu);
    teacher get_teacher();
    student get_student();
  private:
    teacher m_teacher;
    student m_student;
};

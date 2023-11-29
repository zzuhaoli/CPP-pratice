#include<iostream>
#include<person.hh>

school::school(const teacher &tea,const student &stu)
{
    m_teacher.m_name=tea.m_name;
    m_teacher.m_age=tea.m_age;
    m_teacher.m_work_number=tea.m_work_number;
    m_teacher.m_level=tea.m_level;
    m_student.m_name=stu.m_name;
    m_student.m_age=stu.m_age;
    m_student.m_student_number=stu.m_student_number;
    m_student.m_grade_class=stu.m_grade_class;
}
school::teacher school::get_teacher()
{
    return m_teacher;
}
school::student school::get_student()
{
    return m_student;
}

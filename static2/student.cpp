#include"f.hh"
#include"student.hh"
#include<string>
#include<vector>
//std::vector<basic_inf> student::v_basicinf;
student::student(std::string studentname,int studentage,int studentnumber):m_studentname(studentname), m_studentage(studentage), m_studentnumber(studentnumber){};
std::string student::get_studentname()
{
    return m_studentname;
}

int student::get_studentage()
{
    return m_studentage;
}

int student::get_studentnumber()
{
    return m_studentnumber;
}
void student::set_vector(std::vector<basic_inf> v)
{
    v_basicinf=v;
}
std::vector<basic_inf> student::get_vector()
{
    return v_basicinf;
}


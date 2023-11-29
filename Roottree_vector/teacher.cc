#include"teacher.hpp"
teacher::teacher(int tea_age,int tea_gender,int tea_worknumber,double tea_heigth,double tea_weigth,int tea_subject,int tea_level)
{
     m_TEA_gender=tea_gender;
     m_TEA_age=tea_age;
     m_TEA_worknumber=tea_worknumber;
     m_TEA_heigth=tea_heigth;
     m_TEA_weigth=tea_weigth;
     m_TEA_subject=tea_subject;
     m_TEA_level=tea_level;
}

int teacher::getTEA_age(){return m_TEA_age;}

int teacher::getTEA_gender(){return m_TEA_gender;}

int teacher::getTEA_number(){return m_TEA_worknumber;}

double teacher::getTEA_heigth(){return m_TEA_heigth;}

double teacher::getTEA_weigth(){return m_TEA_weigth;}

int teacher::getTEA_subject(){return m_TEA_subject;}

int teacher::getTEA_level(){return m_TEA_level;}

#include"student.hpp"
#include"teacher.hpp"
#include"classinfo.hpp"
#include<vector>
classinfo::classinfo(int gradeID,int classID,const std::vector<student> &studentsinfo,const std::vector<teacher> &teachersinfo)
{
    m_gradeID=gradeID;
    m_classID=classID;
    m_studentsinfo=studentsinfo;
    m_teachersinfo=teachersinfo;
}

int classinfo::getgradeID(){return m_gradeID;}

int classinfo::getclassID(){return m_classID;}

std::vector<student> classinfo::getstudentsinfo(){return m_studentsinfo;}

std::vector<teacher> classinfo::getteachersinfo(){return m_teachersinfo;}

#pragma once
#include"student.hpp"
#include"teacher.hpp"
#include<vector>
class classinfo
{
    private:
        int m_gradeID;//first grade is 1,second grade is 2 and so on until sixth grade;
        int m_classID;//first class is 1 and it is the same as m_gradeID;
        std::vector<student> m_studentsinfo;
        std::vector<teacher> m_teachersinfo;//store students' and teachers' information of the class

    public:
        classinfo(int gradeID,int classID,const std::vector<student> &studentsinfo,const std::vector<teacher> &teachersinfo);
	int getgradeID();
	int getclassID();
	std::vector<student> getstudentsinfo();
	std::vector<teacher> getteachersinfo();
};

#pragma once
#include"f.hh"
#include<vector>
#include<string>
class student
{
    private:
	std::string m_studentname;
        int m_studentage;
	int m_studentnumber;
	static std::vector<basic_inf> v_basicinf;
    public:
	student(std::string studentname,int studentage,int studentnumber);
	std::string get_studentname();
	int get_studentage();
	int get_studentnumber();
	static void set_vector(std::vector<basic_inf> v);
	static std::vector<basic_inf> get_vector();
};

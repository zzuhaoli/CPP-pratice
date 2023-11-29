#pragma once
class student
{
    private:
        //int STUclassID;
        int m_STU_age;
        int m_STU_gender;//girl is 0,boy is 1;	
        int m_STU_number;
	double m_STU_heigth;
        double m_STU_weigth;
	int m_STU_status;//studying is 0,droped is 1;
        
    public:
        student(int stu_age,int stu_gender,int stu_number,double stu_heigth,double stu_weigth,int stu_status);
        int getSTU_age();
        int getSTU_gender();
        int getSTU_number();
	double getSTU_heigth();
	double getSTU_weigth();
	int getSTU_status();
};

#pragma once
class teacher
{
    private:
	//int TEAclassID;
        int m_TEA_gender;//woman is 0,man is 1;
	int m_TEA_age;
        int m_TEA_worknumber;
        double m_TEA_heigth;
        double m_TEA_weigth;
        int m_TEA_subject;//Chinese is 0,math is 1,english is 2;
	int m_TEA_level;//second-grade is 2,first-grade is 1,head teacher is 0;
     public:
	teacher(int tea_age,int tea_gender,int tea_worknumber,double tea_heigth,double tea_weigth,int tea_subject,int tea_level);
        int getTEA_age();
        int getTEA_gender();
        int getTEA_number();
        double getTEA_heigth();
        double getTEA_weigth();
        int getTEA_subject();
	int getTEA_level();
};

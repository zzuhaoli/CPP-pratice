#include<iostream>


class person
{
    private:
	 std::string m_name;
         int m_age;
         float m_height;
         int m_weight;
    public:
         double p_bmi();

         void set_name(std::string n);
	 std::string get_name();
         void set(int a,float h,int w);
	 int get_age();
	 float get_height();
	 int get_weight();
	 //构造函数声明
	 person(std::string n,int a,float h,int w );
	
	 


       	 
        
};

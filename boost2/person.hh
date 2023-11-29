#pragma once
#include<iostream>

namespace test
{
    class person
    {
     private:
	 std::string m_name;
         double m_length;
         double m_weigth;
     public:
	 person(std::string name,double length,double weigth);
	 void set_name(std::string name);
	 void set_length(double length);
	 void set_weigth(double weigth);
         std::string get_name();
	 double get_length();
	 double get_weigth();
         double caulate_bmi();
    };

}

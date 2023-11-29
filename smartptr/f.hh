#include<iostream>
#include<memory>
class cube
{
    private:
	double m_length;
        double m_weigth;
        double m_heigth;	
	public:
	cube(double length,double weigth,double heigth);
        double surface();
	double volume();
	void test1(std::unique_ptr<cube>p);
	void test2(std::shared_ptr<cube>p);        
};

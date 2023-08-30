#include<iostream>
class result
{
 public: 
     virtual double get_result()=0;
};

class triangle:public result
{
 public:
    double m_trianglelength;
    double m_triangleheigth;
    triangle(double trianglelength,double triangleheigth)
    {
         this->m_trianglelength=trianglelength;
	 this->m_triangleheigth=triangleheigth;
    }
    virtual double get_result()
    {
	 return  m_trianglelength*m_triangleheigth*0.5;
    }
};

class rectangle:public result
{
    public:
    double m_rectanglelength;
    double m_rectangleheigth;
    rectangle(double rectanglelength,double rectangleheigth)
    {
         this->m_rectanglelength=rectanglelength;
         this->m_rectangleheigth=rectangleheigth;
    }
    virtual double get_result()
    {
         return  m_rectanglelength*m_rectangleheigth;
    }
};

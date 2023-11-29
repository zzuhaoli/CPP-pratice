#include"f.hh"
double circle::m_pi=3.1415926;

circle::circle(double rad):m_rad(rad){};

double circle::cau_surface()
{
    double s=m_pi*m_rad*m_rad;
    return s;
}
double circle::cau_perimeter()
{
   double c=m_pi*2*m_rad;
   return c;
}

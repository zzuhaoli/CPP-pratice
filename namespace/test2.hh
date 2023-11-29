#include<iostream>
namespace test2
{
    namespace rectangle
  {	    
    class rec
    { 
     private:
       double m_length;
       double m_weigth;
     public:
       rec(double length,double weigth);
       double surface();
    };
  }

    namespace cube
  {
    class cub
    {
     private:
       double m_length;
       double m_weigth;
       double m_heigth;
     public:
       cub(double length,double weigth,double heigth);
       double volume();

    };

  }
}


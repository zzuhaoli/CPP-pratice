#include<iostream>
class man
{
   public:
	   mutable int m_age;
	   mutable int m_length;
	   man(int age,int length)
	   {
	     m_age=age;
	     m_length=length;
	   }
	   void show()
	   {
	     m_age=30;
	     m_length=180;
	     std::cout<<"m_lage:"<<m_age<<std::endl;
	     std::cout<<"m_length:"<<m_length<<std::endl;
	   }   
};

int main()
{
    const man boy(1,1);
    boy.m_age=20;
    boy.m_length=200;
    std::cout<<"boy age:"<<boy.m_age<<std::endl;
    std::cout<<"boy length:"<<boy.m_length<<std::endl;
    boy.show();
    return 0;    
}


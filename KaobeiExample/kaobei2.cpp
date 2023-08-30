#include<iostream>
class person
{
  public:	
    int m_age;
    int *m_length;
    person(int age,int length)
    {
     m_age=age;
     m_length=new int(length);
     //m_length=&length;  
    }
      
    person(const person &p)
    { 
     m_age=p.m_age;
      //m_length=p.m_length;
     m_length=new int(*p.m_length);
    }
    ~person()
    { 
     if (m_length !=NULL)
      {
        delete m_length;
        m_length=NULL;
        std::cout<<"析构函数调用："<<std::endl;
      }
    }
    void set_length(int length)
    {
      m_length=new int(length);	     
      //m_length=&length;
    } 
    int get_length()
    { 
      return *m_length;
    }
};

int main()
{
    person p1(1,1);
    person p2(p1);
    p1.set_length(20);
    person *p3=new person(1,1);
    p3->set_length(30);
    //person p3(1,1);
    //p3.set_length(30);
    std::cout<<"p1身高为:"<<p1.get_length()<<std::endl;
    std::cout<<"p3身高为:"<<p3->get_length()<<std::endl;
    //std::cout<<"p3身高为:"<<p3.get_length()<<std::endl;
    delete p3; 
    return 0;
}

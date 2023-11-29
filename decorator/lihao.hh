#include<iostream>
#include<memory>
class description
{
    public:
       virtual void say()=0;      
};

class lihao:public description
{
    public:
        void say();
};

class decorator:public description
{
    private:
       int m_age;
       double m_length;
       std::shared_ptr<description> m_des;       
    public:
       decorator(std::shared_ptr<description> des,int age,double length);
       //description* m_des;
       //decorator(description* des);
       void say();
};

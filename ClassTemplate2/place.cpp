#include<iostream>
#include"template.hpp"

int main()
{
    tourist<double,double>p1("1","1",2.0,3.0);
    p1.set("云台山","8月6日",2.26,30.35);
    tourist<int,int>p2("1","1",1,1);
    p2.set("少林寺","8月6日",1.21,20.56);

   std::cout<<"旅游景点为："<<p1.get_place()<<std::endl;
   std::cout<<"旅游日期为："<<p1.get_date()<<std::endl;
   std::cout<<"旅游人次为："<<p1.get_number()<<std::endl;
   std::cout<<"景点盈利为："<<p1.get_profit()<<std::endl;
   std::cout<<"***************"<<std::endl;
   std::cout<<"旅游景点为："<<p2.get_place()<<std::endl;
   std::cout<<"旅游日期为："<<p2.get_date()<<std::endl;
   std::cout<<"旅游人次为："<<p2.get_number()<<std::endl;
   std::cout<<"景点盈利为："<<p2.get_profit()<<std::endl;
   return 0;
}

#include<iostream>
#include"lihao.hh"

void lihao::say()
{
    std::cout<<"lihao is a good man"<<std::endl;
}

decorator::decorator(std::shared_ptr<description> des,int age,double length):m_des(des),m_age(age),m_length(length){}

void decorator::say()
{	
    m_des->say();
    std::cout<<"and most inportantly,he is handsome"<<std::endl;
    std::cout<<"age is:"<<m_age<<std::endl;
    std::cout<<"length is:"<<m_length<<std::endl;
}



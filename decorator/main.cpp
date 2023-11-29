#include<iostream>
#include<memory>
#include"lihao.hh"

int main()
{
    std::shared_ptr<description> li_hao=std::make_shared<lihao>();
    std::shared_ptr<description> declihao=std::make_shared<decorator>(li_hao,23,182.0);

    //description* li_hao= new liaho();
    //description* declihao=new decorator(lihao) ;
    li_hao->say();
    std::cout<<"***********"<<std::endl;
    declihao->say();
    return 0;
}

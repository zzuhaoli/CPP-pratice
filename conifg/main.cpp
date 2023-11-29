#include<iostream>
#include<boost/program_options.hpp>
#include"options.hh"
#include"book.hh"

int main(int agrc,char* agrv[])
{
    boost::program_options::options_description des;
    auto opt=addbookoptions(des);
    auto vm=prase(opt,agrc,agrv);
    auto cfg=readoptions(vm);
    book b1(cfg);
    double pro=b1.profit();

    std::cout<<"The name of the book is:"<<cfg.m_bookname<<std::endl;
    std::cout<<"Profit is:"<<pro<<std::endl;

    return 0;

}

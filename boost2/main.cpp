#include<iostream>
#include<boost/program_options.hpp>
#include"person.hh"
#include"options.hh"

using namespace test;
int main(int agrc,char* agrv[])
{
    person p1("1",1.0,1.0);
    boost::program_options::options_description desc;
    test::addoptions(desc);
    auto vm=prase(desc,agrc,agrv);
    auto name=read_name(vm);
    auto weigth=read_weigth(vm);
    auto length=read_length(vm);

    p1.set_name(name);
    p1.set_weigth(weigth);
    p1.set_length(length);

    std::cout<<"姓名为:"<<p1.get_name()<<std::endl;
    std::cout<<"身高为:"<<p1.get_length()<<std::endl;
    std::cout<<"体重为:"<<p1.get_weigth()<<std::endl;
    std::cout<<"BMI为:"<<p1.caulate_bmi()<<std::endl;
    return 0;
}

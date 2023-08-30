#include<iostream>
#include"f.hh"
int main()
{
    car rolls_royce("a",1,1,1);
    rolls_royce.set("英国",5000000,60,98);
    std::cout<<"该车原产地为："<<rolls_royce.get_productionplace()<<std::endl;
    std::cout<<"售价为："<<rolls_royce.get_outprice();
    std::cout<<"元"<<std::endl;
    std::cout<<"出售量为："<<rolls_royce.get_sellquantity();
    std::cout<<"辆"<<std::endl;
    std::cout<<"好评率为："<<rolls_royce.get_favorrate();
    std::cout<<"%"<<std::endl;
    std::cout<<"交易额为："<<rolls_royce.volume(); 
    std::cout<<"元"<<std::endl;
    return 0;
}

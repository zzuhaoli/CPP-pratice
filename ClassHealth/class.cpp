#include<iostream>
#include"f.hh"
int main()
{
    person lihao("a",1,1,1);
    lihao.set_name("lihao");
    lihao.set(23,1.82,85);
    std::cout<<"name:"<<lihao.get_name()<<std::endl;
    std::cout<<"age:"<<lihao.get_age()<<std::endl;
    std::cout<<"height:"<<lihao.get_height();
    std::cout<<"m"<<std::endl;	
    std::cout<<"weight:"<<lihao.get_weight();
    std::cout<<"kg"<<std::endl;
    std::cout<<"BMI is:"<<lihao.p_bmi()<<std::endl;

    if(lihao.p_bmi()<24.00){
	std::cout<<"The man is health"<<std::endl;
	}
    else{
	std::cout<<"The man is not health"<<std::endl;
	}
	return 0;
}



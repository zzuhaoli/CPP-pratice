#include<iostream>
#include"f.hh"


int main()
{
	
	cube cube1(1,1,1);
	cube1.set(20,10,15);
	int caulate=cube1.vi();
	std::cout<<"长方体的长为："<<cube1.getlength()<<std::endl;
	std::cout<<"长方体的宽为："<<cube1.getwidth()<<std::endl;
	std::cout<<"长方体的高为："<<cube1.getheigth()<<std::endl;
	std::cout<<"长方体的体积为:"<<caulate<<std::endl;
	return 0;

}

#include<iostream>

void ex(int num1,int num2)
{

	int temp1=num1;
	num1=num2;
	num2=temp1;
	std::cout<<"num1="<<num1<<std::endl;
        std::cout<<"num2="<<num2<<std::endl;


}

void swap(int*p1,int*p2)
{
	int temp2=*p1;
	*p1=*p2;
	*p2=temp2;
}

void swap2(int &apple,int &boy)
{
	int temp3=apple;
	apple=boy;
	boy=temp3;
}

int main()
{
        int a=10;
	int b=20;
	ex(a,b);
	std::cout<<"a="<<a<<std::endl;
	std::cout<<"b="<<b<<std::endl;
	swap(&a,&b);
        std::cout<<"a="<<a<<std::endl;
        std::cout<<"b="<<b<<std::endl;

	int c=10;  
	int d=20;
	swap2(c,d);
	std::cout<<"c="<<c<<std::endl;
        std::cout<<"d="<<d<<std::endl;	
	return 0;
}

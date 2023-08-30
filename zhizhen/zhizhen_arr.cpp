#include<iostream>


int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int*p=arr;
	std::cout<<"第一个元素为："<<arr[0]<<std::endl;
	std::cout<<"利用指针访问的第一个元素为："<<*p<<std::endl;
	p++;
	std::cout<<"利用指针指向第二个元素为："<<*p<<std::endl;

	int*p2=arr;
        std::cout<<"利用指针遍历数组中的元素："<<std::endl;
	for(int i=0;i<10;i++)
	{
		std::cout<<*p2<<std::endl;
		p2++;
	}
        return 0;   


}

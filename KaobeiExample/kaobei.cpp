#include<iostream>
class car
{
    public:
      int len;
      int *wei;
    car(int l,int w)
    {
      len=l;
      wei=new int(w);
    }
    
    car(const car &c)
    { 
      len=c.len;
      wei=new int(*c.wei);
    }
    ~car()
    {
      if (wei !=NULL)
      {
	 delete wei;
	 wei=NULL;
	 std::cout<<"析构函数调用："<<std::endl;
      }
    }
};
int main()
{

    car c1(20,20);
    car c2(c1);
    std::cout<<"车1的长："<<c1.len<<std::endl;
    std::cout<<"车2的长："<<c2.len<<std::endl;
    return 0;
}

#include<iostream>
template<class T>
void sum(T a,T b)
{
    T c=a+b;
    std::cout<<"求和值为："<<c<<std::endl;
}
int main()
{
  int a=10;
  int b=20;
  sum<int>(a,b);
  double d=21.6;
  double e=36.8;
  sum<double>(d,e);
  return 0;
}

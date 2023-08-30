#include<iostream>
#include"f.hh"
int main()
{
  result* re1=new triangle(6.6,6.6);
  std::cout<<"三角形面积为："<<re1->get_result()<<std::endl;
  result* re2=new rectangle(6.6,6.6);
  std::cout<<"长方形面积为："<<re2->get_result()<<std::endl;
  delete re1;
  delete re2;
  return 0;
}

#include <iostream>
#include <array>
#include <type_traits>

constexpr int add(int a,int b)
{
  return a+b;
}
int main()
{
  constexpr int num1 = 5;
  constexpr int num2 = 5;
  int num3=5;
  int arr[add(num1,num2)];
  int arr_length = std::extent<decltype(arr)>::value;
  std::cout<<"数组长度为："<<arr_length<<std::endl;
}

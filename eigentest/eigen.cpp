#include<Eigen/Core>
#include<Eigen/Geometry>
#include<iostream>
#include<cmath>
using Vector3 = Eigen::Matrix<double, 3, 1>;//起别名

int main()
{
 Vector3 v1={1,2,3};
 Vector3 v2={2,5,6};
 double dot_result=v1.dot(v2);
 Vector3 v3=v1.cross(v2);
 double len_v1=std::sqrt(v1.x()*v1.x()+v1.y()*v1.y()+v1.z()*v1.z());
 std::cout<<"点乘结果:"<<dot_result<<std::endl;
 std::cout<<"叉乘结果x:"<<v3.x()<<"叉乘结果y:"<<v3.y()<<"叉乘结果z:"<<v3.z()<<std::endl;
 std::cout<<"v1模长:"<<len_v1<<std::endl;
 return 0;
}

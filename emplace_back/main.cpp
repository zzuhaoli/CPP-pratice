#include <iostream>
#include "student.hpp"
#include <vector>
#include <string>

int main()
{
    std::vector<student> v;
    v.emplace_back(21,"wang","qinghua");
    v.emplace_back(22,"li","beida");
    v.emplace_back(23,"zhao","zhengda");
    for (auto& stu : v) {
        std::cout << "学生年龄为:" << stu.get_age()<<std::endl;
	std::cout << "学生姓名为:" << stu.get_name()<<std::endl;
	std::cout << "学生学校为:" << stu.get_school()<<std::endl;
    }
    return 0;
}

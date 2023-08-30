#include<iostream>
#include<vector>

class person
{
    private:
	std::string m_name;
	int m_age;
    public:
	person(std::string,int age);
};
person::person(std::string name,int age):m_name(name),m_age(age){}


int main()
{
    std::vector<person>v;
    person p1("a",20);
    v.push_back(p1);
    std::cout<<v[0]<<std::endl;
}

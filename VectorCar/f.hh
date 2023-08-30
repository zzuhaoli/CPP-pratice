#include<iostream>
#include<vector>
class car
{
    private:
	std::string  m_place;
	float m_price;
        int m_number;
    public:
	car(std::string place,float price,int number);
	void set_place( std::string  place);
	void set_price(float price);
	void set_number(int number);
        friend std::ostream& operator<<(std::ostream& os, const car& c);
};

car::car(std::string place,float price,int number):m_place(place),m_price(price),m_number(number){}
void car::set_place( std::string  place){m_place=place;}
void car::set_price(float price){m_price=price;}
void car::set_number(int number){m_number=number;}
std::ostream& operator<<(std::ostream& os, const car& c)
{
    os << "产地: " << c.m_place << ", 价格: " << c.m_price<<", 购买人数："<<c.m_number;
    return os;
}

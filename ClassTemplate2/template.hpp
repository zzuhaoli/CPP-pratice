#include<iostream>
template<class T_number,class T_profit>
class tourist
{
    private:
	std::string m_place;
	std::string m_date;
	T_number m_number;
        T_profit m_profit;
    public:
        tourist(std::string place,std::string date,T_number number,T_profit profit);
        void set(std::string place,std::string date,T_number number,T_profit profit);
        std::string get_place();
        std::string get_date();
        T_number get_number();
        T_profit get_profit();	

};
      
template<class T_number,class T_profit>
tourist<T_number,T_profit>::tourist(std::string place,std::string date,T_number number,T_profit profit):m_place(place),m_date(date),m_number(number),m_profit(profit){}
template<class T_number,class T_profit>
void tourist<T_number,T_profit>::set(std::string place,std::string date,T_number number,T_profit profit)
{
    m_place=place;
    m_date=date;
    m_number=number;
    m_profit=profit;
}
template<class T_number,class T_profit>
std::string tourist<T_number,T_profit>::get_place(){return m_place;}
template<class T_number,class T_profit>
std::string tourist<T_number,T_profit>::get_date(){return m_date;}
template<class T_number,class T_profit>
T_number tourist<T_number,T_profit>::get_number(){return m_number;}
template<class T_number,class T_profit>
T_profit tourist<T_number,T_profit>::get_profit(){return m_profit;}

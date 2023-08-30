#include<iostream>

template<class T_length,class T_weigth>
class person
{
  private:
      int m_age;
      T_length m_length;
      T_weigth m_weigth;
  public:
      person(int age,T_length length,T_weigth weigth);
      void set_age(int age);
      void set_length(T_length length);
      void set_weigth(T_weigth weigth);
      int get_age();
      T_length get_length();
      T_weigth get_weigth();
};

template<class T_length1,class T_weigth1,class T_income>
class teacher:public person<T_length1,T_weigth1>
{
    private:
	std::string m_name;
	T_income m_income;
    public:
	teacher(int age,T_length1 length,T_weigth1 weigth,std::string,T_income income);
	void set_name(std::string name);
	void set_income(T_income income);
	std::string get_name();
	T_income get_income();
};
template<class T_length,class T_weigth>
person<T_length,T_weigth>::person(int age,T_length length,T_weigth weigth):m_age(age),m_length(length),m_weigth(weigth){}
template<class T_length,class T_weigth>
void person<T_length,T_weigth>::set_age(int age){m_age=age;}
template<class T_length,class T_weigth>
void person<T_length,T_weigth>::set_length(T_length length){m_length=length;}
template<class T_length,class T_weigth>
void person<T_length,T_weigth>::set_weigth(T_weigth weigth){m_weigth=weigth;}
template<class T_length,class T_weigth>
int person<T_length,T_weigth>::get_age(){return m_age;}
template<class T_length,class T_weigth>
T_length person<T_length,T_weigth>::get_length(){return m_length;}
template<class T_length,class T_weigth>
T_weigth person<T_length,T_weigth>::get_weigth(){return m_weigth;}

template<class T_length1,class T_weigth1,class T_income>
teacher<T_length1,T_weigth1,T_income>::teacher(int age,T_length1 length,T_weigth1 weigth,std::string name,T_income income):person<T_length1,T_weigth1>(age,length,weigth),m_name(name),m_income(income){}
template<class T_length1,class T_weigth1,class T_income>
void teacher<T_length1,T_weigth1,T_income>::set_name(std::string name){m_name=name;}
template<class T_length1,class T_weigth1,class T_income>
void teacher<T_length1,T_weigth1,T_income>::set_income(T_income income){m_income=income;}
template<class T_length1,class T_weigth1,class T_income>
std::string teacher<T_length1,T_weigth1,T_income>::get_name(){return m_name;}
template<class T_length1,class T_weigth1,class T_income>
T_income teacher<T_length1,T_weigth1,T_income>::get_income(){return m_income;}


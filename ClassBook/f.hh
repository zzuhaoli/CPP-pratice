#include<iostream>
class book
{
   
  private:
    std::string m_name;
    int m_buyquantity;
    int m_sellquantity;
    float m_inprice;
    float m_outprice;
  public:
    book(std::string n,int buyq ,int sellq,float inp,float outp );
    void set_name(std::string n);
    void set_buyquantity(int buyq);
    void set_sellquantity(int sellq;
    void set_inprice(float inp);
    void set_outprice(float outp);

    std::string get_name();
    int get_buyquantity();
    int get_sellquantity();
    float get_inprice();
    float get_outprice();

    float profit();

};

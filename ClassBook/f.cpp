#include"book.hh"
book::book(std::string n,int buyq,int sellq,float inp,float outp)
{
    m_name=n;
    m_buyquantity=buyq;
    m_sellquantity=sellq;
    m_inprice=inp;
    m_outprice=outp;
}
void book::set_name(std::string n)
{
    m_name=n;
}
void book::set_buyquantity(int buyq)
{
    m_buyquantity=buyq;
}
void book::set_sellquantity(int sellq)
{
    m_sellquantity=sellq;
}
void book::set_inprice(float inp)
{
    m_inprice=inp;
}
void book::set_outprice(float outp)
{
    m_outprice=outp;
}
std::string book::get_name()
{
    return m_name;
}
int book::get_buyquantity()
{
    return m_buyquantity;
}
int book::get_sellquantity()
{
    return m_sellquantity;
}
float book::get_inprice()
{
    return m_inprice;
}
float book::get_outprice()
{
    return m_outprice;
}
float book::profit()
{
    return -((m_buyquantity*m_inprice)-(m_sellquantity*m_outprice));
}

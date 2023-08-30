#include<iostream>
#include"f.hh"
car::car(std::string productionplace, int outprice,int sellquantity,float favorrate)
{
    m_productionplace=productionplace;
    m_outprice=outprice;
    m_sellquantity=sellquantity;
    m_favorrate=favorrate;    
  	
}
    void car::set(std::string productionplace, int outprice,int sellquantity,float favorrate )
{
    m_productionplace=productionplace;
    m_outprice=outprice;
    m_sellquantity=sellquantity;
    m_favorrate=favorrate;
}	
    std::string car::get_productionplace()
{
    return  m_productionplace;
}
    int car::get_outprice()
{
     return m_outprice;
}
    int car::get_sellquantity()
{
    return m_sellquantity;
}
    float car::get_favorrate()
{
    return  m_favorrate;
}

    int car::volume()
{
    return m_outprice*m_sellquantity;
}

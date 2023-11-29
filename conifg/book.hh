#pragma once
#include<iostream>
class book
{
    public:
      struct config 	 
      {
	std::string m_bookname;
        double m_inprice;
	double m_outprice;
	int m_inquantity;
	int m_outquantity;
      };
      book(config cfg);
      double profit();
    private:
      config m_cfg;

};

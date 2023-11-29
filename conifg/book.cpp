#include"book.hh"
book::book(config cfg):m_cfg(cfg){}

double book::profit()
{
    double pro=(m_cfg.m_outprice*m_cfg.m_outquantity)-(m_cfg.m_inprice*m_cfg.m_inquantity);
    return pro; 
}

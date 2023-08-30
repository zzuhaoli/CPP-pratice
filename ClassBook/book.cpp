#include<iostream>
#include"book.hh"
int main()
{
	
    book novel("a",1,1,1.0,1.0);
    novel.set_name("平凡的世界");
    novel.set_buyquantity(60000);
    novel.set_sellquantity(56000);
    novel.set_inprice(47.56);
    novel.set_outprice(66.50);
    std::cout<<"书本的名字为："<<novel.get_name()<<std::endl;

    std::cout<<"单本进价为："<<novel.get_inprice();
    std::cout<<"元"<<std::endl;
    std::cout<<"单本售价为："<<novel.get_outprice();
    std::cout<<"元"<<std::endl;
    std::cout<<"进货量为："<<novel.get_buyquantity();
    std::cout<<"本"<<std::endl;
    std::cout<<"售出量为："<<novel.get_sellquantity();
    std::cout<<"本"<<std::endl;
    std::cout<<"利润为："<<novel.profit();
    std::cout<<"元"<<std::endl;
    return 0;
}


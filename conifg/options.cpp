#include<boost/program_options.hpp>
#include<iostream>
#include"options.hh"
#include"book.hh"

boost::program_options::options_description addbookoptions(boost::program_options::options_description &opt)
{
    opt.add_options()
	    ("help","produce help message")
	    ("bookname", boost::program_options::value<std::string>()->default_value("little prince"),"add bookname")
	    ("inprice",boost::program_options::value<double>()->default_value(26.8),"add inprice")
	    ("outprice",boost::program_options::value<double>()->default_value(36.8),"add outprice")
	    ("inquantity",boost::program_options::value<int>()->default_value(60000),"add inquantity")
	    ("outquantity",boost::program_options::value<int>()->default_value(56360),"add outquantity");
    return opt;
}

boost::program_options::variables_map prase(boost::program_options::options_description &opt,int argc,char* argv[])
{
    boost::program_options::variables_map vm;
    boost::program_options::store(boost::program_options::parse_command_line(argc, argv, opt), vm);
    boost::program_options::notify(vm);
    if(vm.count("help"))
    {
     std::cout<<opt<<std::endl;
    }
    return vm;
}

book::config readoptions(const boost::program_options::variables_map &vm) 
{
    book::config cfg;
    cfg.m_bookname=vm["bookname"].as<std::string>();
    cfg.m_inprice=vm["inprice"].as<double>();
    cfg.m_outprice=vm["outprice"].as<double>();
    cfg.m_inquantity=vm["inquantity"].as<int>();
    cfg.m_outquantity=vm["outquantity"].as<int>(); 
    return cfg;
}

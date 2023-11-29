#include<iostream>
#include<boost/program_options.hpp>
#include"options.hh"
using namespace test;

void addoptions(boost::program_options::options_description& opt)
{
    opt.add_options()
	    ("help","this is a test")
	    ("name", boost::program_options::value<std::string>()->default_value("xiaoli"),"add name" )
	    ("length", boost::program_options::value<double>()->default_value(1.8),"add length" )
	    ("weigth", boost::program_options::value<double>()->default_value(80.25),"add weigth" );
}

boost::program_options::variables_map prase(boost::program_options::options_description& opt,int argc,char* argv[])
{
    boost::program_options::variables_map vm;
    boost::program_options::store(boost::program_options::parse_command_line(argc, argv, opt), vm);
    boost::program_options::notify(vm);
    return vm;    
}

std::string read_name(const boost::program_options::variables_map &vm)
{
    std::string name=vm["name"].as<std::string>();
    return name;
}	
double read_weigth(const boost::program_options::variables_map &vm)
{
    double weigth=vm["weigth"].as<double>();
    return weigth;
}
double read_length(const boost::program_options::variables_map &vm)
{
    double length=vm["length"].as<double>();
    return length;
}

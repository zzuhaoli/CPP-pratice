#include<iostream>
#include <boost/program_options.hpp>
using namespace boost::program_options;

int main(int agrc,char* agrv[])
{
    options_description des("Allowed options");
    des.add_options()
	    ("help","produce help message")
	    ("compression" ,value<int>(),"set compression level");

    variables_map vm;
    store(parse_command_line(agrc,agrv,des),vm);
    notify(vm);

    if(vm.count("help"))
      {
        std::cout<<des<<std::endl;
      }
    if(vm.count("compression"))
      {
        std::cout<<"Compression level was set to"<<vm["compression"].as<int>()<<std::endl;
      }	 
    else
      {
	std::cout<<"Compression level wos not set"<<std::endl; 
      }
        
}

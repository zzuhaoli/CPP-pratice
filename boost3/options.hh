#pragma once
#include<iostream>
#include<boost/program_options.hpp>


    void addoptions(boost::program_options::options_description& opt);
    boost::program_options::variables_map prase( boost::program_options::options_description& opt,int argc,char* argv[]);

    std::string read_name(const boost::program_options::variables_map &vm);
    double read_weigth(const boost::program_options::variables_map &vm);
    double read_length(const boost::program_options::variables_map &vm);


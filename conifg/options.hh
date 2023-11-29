#pragma once
#include<boost/program_options.hpp>
#include"book.hh"
boost::program_options::options_description addbookoptions(boost::program_options::options_description &opt);

boost::program_options::variables_map prase(boost::program_options::options_description &opt,int agrc,char* agrv[]);

book::config readoptions(const boost::program_options::variables_map &vm) ;



#pragma once
#include<iostream>
#include<boost/program_options.hpp>
#include"person.hh"

void addteacher_options(boost::program_options::options_description &opt);

void addstudent_options(boost::program_options::options_description &opt);

boost::program_options::variables_map prase(boost::program_options::options_description &opt,int agrc,char* agrv[]);

school::teacher read_teacher(boost::program_options::variables_map &vm);

school::student read_student(boost::program_options::variables_map &vm);
	

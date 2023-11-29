#include<iostream>
#include<boost/program_options.hpp>
boost::program_options::options_description makeDefaultOptions(const std::string& caption) {
  std::cout
      << "\n\n======================= DEPRECATION NOTICE "
         "========================\n"
         "The examples executables is deprecated. They will be removed in a\n"
         "future version.\n"
         "Consider using the python bindings for the example algorithms: \n"
         "https://acts.readthedocs.io/en/latest/examples/python_bindings.html\n"
         "==================================================================="
         "\n\n"
      << std::endl;

  boost::program_options::options_description opt(caption);

  opt.add_options()("help,h", "Produce help message");
  opt.add_options()(
      "loglevel,l",boost::program_options::value<size_t>()->default_value(2),
      "The output log level. Please set the wished number (0 = VERBOSE, 1 = "
      "DEBUG, 2 = INFO, 3 = WARNING, 4 = ERROR, 5 = FATAL).");
  opt.add_options()(
      "response-file",boost::program_options::value<std::string>()->default_value(""),
      "Configuration file (response file) replacing command line options.");
  return opt;
}



int main(int agrc,char* agrv[])
{ 
  auto desc=makeDefaultOptions("caption");
  boost::program_options::variables_map vm;
  boost::program_options::store(boost::program_options::parse_command_line(agrc, agrv, desc), vm);
  boost::program_options::notify(vm);
  if(vm.count("help"))
  {
     std::cout<<desc<<std::endl;
  }  
}



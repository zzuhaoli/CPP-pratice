#include<iostream>
#include<options.hh>
#include<boost/program_options.hpp>

void addteacher_options(boost::program_options::options_description &opt)
{
    opt.add_options()
	    ("teachername",boost::program_options::value<std::string>()->default_value("张三"),"add teachername")
	    ("teacherage",boost::program_options::value<int>()->default_value(26),"add teacherage")
	    ("teacherworknumber",boost::program_options::value<std::string>()->default_value("001"),"add teacherworknumber")
	    ("teacherlevel",boost::program_options::value<std::string>()->default_value("高级"),"add teacherlevel");	   
}


void addstudent_options(boost::program_options::options_description &opt)
{
    opt.add_options()
            ("studentname",boost::program_options::value<std::string>()->default_value("小明"),"add studentname")
            ("studentage",boost::program_options::value<int>()->default_value(16),"add studentage")
            ("studentnumber",boost::program_options::value<std::string>()->default_value("111"),"add studentnumber")
            ("studentclass",boost::program_options::value<std::string>()->default_value("六班"),"add studendclass");            
}

boost::program_options::variables_map prase(boost::program_options::options_description &opt,int agrc,char* agrv[])
{    
    boost::program_options::variables_map vm;
    boost::program_options::store(boost::program_options::parse_command_line(agrc, agrv, opt), vm);
    boost::program_options::notify(vm);
    return vm;
}

school::teacher read_teacher(boost::program_options::variables_map &vm)
{
    school::teacher tea;
    tea.m_name=vm["teachername"].as<std::string>();
    tea.m_age=vm["teacherage"].as<int>();
    tea.m_work_number=vm["teacherworknumber"].as<std::string>();
    tea.m_level=vm["teacherlevel"].as<std::string>();
    return tea;
}

school::student read_student(boost::program_options::variables_map &vm)
{
    school::student stu;
    stu.m_name=vm["studentname"].as<std::string>();
    stu.m_age=vm["studentage"].as<int>();
    stu.m_student_number=vm["studentnumber"].as<std::string>();
    stu.m_grade_class=vm["studentclass"].as<std::string>();
    return stu;
}


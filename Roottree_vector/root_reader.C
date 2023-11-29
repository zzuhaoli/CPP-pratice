void root_reader()
{
    TFile *file =TFile::Open("test.root","READ");
    TTreeReader *treeReader = new TTreeReader("student_info", file);
    int ientry=0;
    TTreeReaderArray<int> *stuage =new TTreeReaderArray<int>(*treeReader, "stu_age");
    TTreeReaderArray<int> *stugradeID =new TTreeReaderArray<int>(*treeReader, "stu_gradeID");
    TTreeReaderArray<int> *stuclassID =new TTreeReaderArray<int>(*treeReader, "stu_classID");
    TTreeReaderArray<int> *teaage =new TTreeReaderArray<int>(*treeReader, "tea_age");
    TTreeReaderArray<int> *teagradeID =new TTreeReaderArray<int>(*treeReader, "tea_gradeID");
    TTreeReaderArray<int> *teaclassID =new TTreeReaderArray<int>(*treeReader, "tea_classID");
    while (treeReader->Next()) 
    {
       std::cout << "Reading entry/event " << ientry << std::endl;
       size_t nstudents = stuage->GetSize();
       size_t nteachers = teaage->GetSize();
       for(int i=0;i<nstudents;i++)
       {
	  std::cout<<"学生的所在年级为："<<(*stugradeID)[i]<<std::endl;
	  std::cout<<"学生的所在班级为："<<(*stuclassID)[i]<<std::endl;
	  std::cout<<"学生的年龄为："<<(*stuage)[i]<<std::endl;
	  std::cout<<"**********************"<<std::endl;
       }
      
       for(int i=0;i<nteachers;i++)
       {
	  std::cout<<"老师的所在年级为："<<(*teagradeID)[i]<<std::endl;
          std::cout<<"老师的所在班级为："<<(*teaclassID)[i]<<std::endl;
          std::cout<<"老师的年龄为："<<(*teaage)[i]<<std::endl;
	  std::cout<<"**********************"<<std::endl;
       }
      
       ientry++;
    }
}

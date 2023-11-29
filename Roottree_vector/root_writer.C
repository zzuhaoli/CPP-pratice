#include"student.hpp"
#include"teacher.hpp"
#include"classinfo.hpp"
#include<vector>
void root_writer()
{     
     //一年级一班
     student s1(6,0,1,1.38,41.8,0);
     student s2(7,0,2,1.35,42.6,0);
     student s3(5,1,3,1.48,45.8,0);
     student s4(7,1,4,1.46,47.8,1);
     teacher t1(35,0,1,1.68,60,0,1);
     teacher t2(36,1,2,1.78,80,1,0);
     std::vector<student> v_s1={s1,s2,s3,s4};
     std::vector<teacher> v_t1={t1,t2};
     classinfo class1(1,1,v_s1,v_t1);
     //一年级二班
     student s5(6,0,1,1.37,40.8,0);
     student s6(7,0,2,1.34,43.6,0);
     student s7(5,1,3,1.49,48.8,0);
     student s8(7,1,4,1.44,49.8,1);
     teacher t3(33,0,1,1.66,62,1,0);
     teacher t4(37,1,2,1.80,85,2,1);
     std::vector<student> v_s2={s5,s6,s7,s8};
     std::vector<teacher> v_t2={t3,t4};
     classinfo class2(1,2,v_s2,v_t2);
     //一年级三班
     student s9(6,0,1,1.36,39.8,0);
     student s10(7,0,2,1.28,41.6,0);
     student s11(8,1,3,1.48,49.8,0);
     student s12(7,1,4,1.47,47.8,1);
     teacher t5(34,0,1,1.68,65,1,0);
     teacher t6(36,1,2,1.79,86,1,1);
     std::vector<student> v_s3={s9,s10,s11,s12};
     std::vector<teacher> v_t3={t5,t6};
     classinfo class3(1,3,v_s3,v_t3);
     //二年纪一班
     student s13(7,0,1,1.42,45.8,0);
     student s14(8,0,2,1.43,44.6,0);
     student s15(9,1,3,1.51,52.8,0);
     student s16(8,1,4,1.50,53.8,1);
     teacher t7(34,0,1,1.69,69,2,0);
     teacher t8(36,1,2,1.75,84,1,1);
     std::vector<student> v_s4={s13,s14,s15,s16};
     std::vector<teacher> v_t4={t7,t8};
     classinfo class4(2,1,v_s4,v_t4);
     //二年纪二班
     student s17(7,0,1,1.42,45.8,0);
     student s18(8,0,2,1.43,44.6,0);
     student s19(9,1,3,1.51,52.8,0);
     student s20(8,1,4,1.50,53.8,1);
     teacher t9(37,0,1,1.67,64,0,0);
     teacher t10(36,1,2,1.78,88,1,1);
     std::vector<student> v_s5={s17,s18,s19,s20};
     std::vector<teacher> v_t5={t9,t10};
     classinfo class5(2,2,v_s5,v_t5);
     //二年纪三班
     student s21(8,0,1,1.45,46.8,0);
     student s22(8,0,2,1.44,47.6,0);
     student s23(9,1,3,1.54,53.7,0);
     student s24(7,1,4,1.53,52.5,1);
     teacher t11(35,0,1,1.70,63,0,0);
     teacher t12(33,1,2,1.79,89,1,1);
     std::vector<student> v_s6={s21,s22,s23,s24};
     std::vector<teacher> v_t6={t11,t12};
     classinfo class6(2,3,v_s6,v_t6);
     std::vector<classinfo> v_classinfo={class1,class2,class3,class4,class5,class6};
     std::vector<classinfo> v_gradeclassinfo1={class1,class2,class3};
     std::vector<classinfo> v_gradeclassinfo2={class1,class2,class3};
     std::vector<std::vector<classinfo>> v_gradeinfo={v_gradeclassinfo1,v_gradeclassinfo2};
     //denfinte the vector connencting branch
     std::vector<int> v_stu_gradeID;
     std::vector<int> v_stu_classID; 
     std::vector<int> v_stu_age;
     std::vector<int> v_stu_gender;
     std::vector<int> v_stu_number;
     std::vector<double> v_stu_heigth;
     std::vector<double> v_stu_weigth;
     std::vector<int> v_stu_status;
     
     std::vector<int> v_tea_gradeID;
     std::vector<int> v_tea_classID;
     std::vector<int> v_tea_age;
     std::vector<int> v_tea_gender;
     std::vector<int> v_tea_worknumber;
     std::vector<double> v_tea_heigth;
     std::vector<double> v_tea_weigth;
     std::vector<int> v_tea_subject;
     std::vector<int> v_tea_level;

    TFile *file = new TFile("test.root","recreate");
    TTree *tree1 = new TTree("student_info","student_info");
    TTree *tree2 = new TTree("teacher_info","teacher_info");
i
    //set branch
    tree1->Branch("stu_gradeID",&v_stu_gradeID);
    tree1->Branch("stu_classID",&v_stu_classID);
    tree1->Branch("stu_age", &v_stu_age);
    tree1->Branch("stu_gender", &v_stu_age);
    tree1->Branch("stu_number", &v_stu_number);
    tree1->Branch("stu_heigth", &v_stu_heigth);
    tree1->Branch("stu_weigth", &v_stu_weigth);
    tree1->Branch("stu_status", &v_stu_status);

    tree2->Branch("tea_gradeID",&v_tea_gradeID);
    tree2->Branch("tea_classID",&v_tea_classID);
    tree2->Branch("tea_age", &v_tea_age);
    tree2->Branch("tea_gender", &v_tea_age);
    tree2->Branch("tea_number", &v_tea_worknumber);
    tree2->Branch("tea_heigth", &v_tea_heigth);
    tree2->Branch("tea_weigth", &v_tea_weigth);
    tree2->Branch("tea_subject", &v_tea_subject);
    tree2->Branch("tea_level", &v_tea_level);
    
    //fill vector
    int nentry_grade=2;
    int v_classinfosize = v_classinfo.size();
    for(int i=0;i<nentry_grade;i++)
   { 
      auto v_grainfo=v_gradeinfo[i];
      int v_grainfosize = v_grainfo.size();      
      //for(int i=0;i<v_classinfosize;i++)
      for(int i=0;i<v_grainfosize;i++)	      
      {
	int v_stuinfosize = v_classinfo[i].getstudentsinfo().size();
	int v_teainfosize = v_classinfo[i].getteachersinfo().size();
	auto v_sinfo = v_classinfo[i].getstudentsinfo();
        auto v_tinfo = v_classinfo[i].getteachersinfo();	
	for(int n=0;n<v_stuinfosize;n++)
	{
	    v_stu_gradeID.push_back(v_classinfo[i].getgradeID());
            v_stu_classID.push_back(v_classinfo[i].getclassID());
	    v_stu_age.push_back(v_sinfo[n].getSTU_age());
            v_stu_gender.push_back(v_sinfo[n].getSTU_gender());
            v_stu_number.push_back(v_sinfo[n].getSTU_number());
            v_stu_heigth.push_back(v_sinfo[n].getSTU_heigth());
            v_stu_weigth.push_back(v_sinfo[n].getSTU_weigth());
            v_stu_status.push_back(v_sinfo[n].getSTU_status());
	}
	 for(int j=0;j<v_teainfosize;j++)
        {
            v_tea_gradeID.push_back(v_classinfo[i].getgradeID());
            v_tea_classID.push_back(v_classinfo[i].getclassID());
            v_tea_age.push_back(v_tinfo[j].getTEA_age());
            v_tea_gender.push_back(v_tinfo[j].getTEA_gender());
            v_tea_worknumber.push_back(v_tinfo[j].getTEA_number());
            v_tea_heigth.push_back(v_tinfo[j].getTEA_heigth());
            v_tea_weigth.push_back(v_tinfo[j].getTEA_weigth());
            v_tea_subject.push_back(v_tinfo[j].getTEA_subject());
	    v_tea_level.push_back(v_tinfo[j].getTEA_level());
        }
	tree1->Fill();
        tree2->Fill();
	v_stu_gradeID.clear();
        v_stu_classID.clear();
        v_stu_age.clear();
        v_stu_gender.clear();
        v_stu_number.clear();
        v_stu_heigth.clear();
        v_stu_weigth.clear();
        v_stu_status.clear();

        v_tea_gradeID.clear();
        v_tea_classID.clear();
        v_tea_age.clear();
        v_tea_gender.clear();
        v_tea_worknumber.clear();
        v_tea_heigth.clear();
        v_tea_weigth.clear();
        v_tea_subject.clear();
        v_tea_level.clear();
        
    }
    //fill branch
    //tree1->Fill();
    //tree2->Fill();
    //tree1->Write();
    //tree2->Write();
   }
    tree1->Fill();
    tree2->Fill();
    tree1->Write();
    tree2->Write();
}


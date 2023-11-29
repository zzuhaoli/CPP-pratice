        //tree1->Fill();
        //tree2->Fill();
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
    tree1->Fill();
    tree2->Fill();
    tree1->Write();
    tree2->Write();

#pragma once

class DirectorIfo
{
  public:
    DirectorIfo(int companyid,int year,int gender,int age,int independent,int isinsider,int ishold,int multipleboard,int multipleboard,int career,int tenure);	
    void set_companyid(int companyid);
    void set_companyid(int companyid);
    void set_companyid(int companyid);
    void set_companyid(int companyid);
    void set_companyid(int companyid);
    void set_companyid(int companyid);
    void set_companyid(int companyid);
    void set_companyid(int companyid);
    void set_companyid(int companyid);
    int get_companyid(){return m_companyid;}
    int get_year(){return m_year;}
    int get_gender(){return m_gender;}
    int get_age(){return m_age;}
    int get_independent(){return m_independent;}
    int get_isinsider(){return m_companyid;}
    int get_ishold(){return m_companyid;}
    int get_multipleboard(){return m_companyid;}
    int get_career(){return m_companyid;}
    int get_tenure(){return m_companyid;}
  private:	
    int m_companyid;	
    int m_year;	
    int m_gender;	
    int m_age;	
    int m_independent;	
    int m_isinsider;	
    int m_ishold;	
    int m_multipleboard;	
    int m_career;	
    int m_tenure;
};

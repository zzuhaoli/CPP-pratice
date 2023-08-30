#include<iostream>
class surface
{
  private:
       int length;
       int width;
  public:
       surface(int len,int wei);
       void set(int len,int wei);
       int get_length();
       int get_width();
       int area();
};

class cube:public surface
{
    private:
       int heigth;
    public:
       cube(int len,int wei,int hei);
       void set_heigth(int hei);
       int get_heigth();
       int volume();
};

#include<iostream>
#include"f.hh"

    cube::cube(int a,int b,int c)
      {
	  length=a;
	  width=b;
	  heigth=c;
      }

    void cube::set(int a,int b,int c)
       {
          length=a;
          width=b;
          heigth=c;
          return;
       }
     int cube::vi()
       {
          int v=length*width*heigth;
          return v;
       }

     int cube::getlength()
       {
          return length;
       }
     int cube::getwidth()
       {
          return width;
       }
     int cube::getheigth()
       {
          return heigth;
       }

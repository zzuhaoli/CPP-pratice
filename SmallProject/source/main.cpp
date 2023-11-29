#include<iostream>
#include"manager.hh"

int main()
{
    int choice;	
    manager m;
    while(true)
    {
      m.show_menu();
      std::cout<<"请输入您的选择："<<std::endl;
      std::cin>>choice;
      switch(choice)
      {
         case 0:
	      m.exitsystem();
	      break;
	 case 1:
	      m.addperson();
	      m.savedata();
              break;
	 case 2:
	      m.show();
              break;
	 case 3:
              break;
	 case 4:
              break;
	 case 5:
              break;
	 case 6:
              break;
	 case 7:
              break;
	 default:
              break;

      }
    }
}

#include<iostream>
#include<vector>
#include"f.hh"

int main()
{   
    std::string input;
    std::string place; 
    float price;
    int number;
    std::vector<car>v_car;
    car c1("中国",20.36,1234);
    car c2("美国",26.62,1324);
    car c3("德国",24.15,1423);
    v_car.push_back(c1);
    v_car.push_back(c2);
    v_car.push_back(c3);
    
    for (int i=0;i<v_car.size();i++)
       {
         std::cout<<v_car.at(i)<<std::endl;
       }
    std::cout<<"您是否想要存储的新信息：   yes or no?"<<std::endl;
    std::cin>>input;
    if (input=="yes")
    {
        if(v_car.capacity()-v_car.size()<2)
	{
            v_car.reserve(100);
	    std::cout<<"请输入车辆产地：";
            std::cin>>place;
	    std::cout<<"请输入车辆售价：";
            std::cin>>price;
	    std::cout<<"请输入购买人数：";
            std::cin>>number;
	    car c("a",1,1);
	    c.set_place(place);
            c.set_price(price);
            c.set_number(number);
            v_car.push_back(c);
            for (int i=0;i<v_car.size();i++)
	    {
		    std::cout<<v_car.at(i)<<std::endl;
	    }
	}
	else{
            std::cout<<"请输入车辆产地：";
            std::cin>>place;
            std::cout<<"请输入车辆售价：";
            std::cin>>price;
            std::cout<<"请输入购买人数：";
            std::cin>>number;
            car c("a",1,1);
            c.set_place(place);
            c.set_price(price);
            c.set_number(number);
	    v_car.push_back(c);
	    }
    }
    else {std::cout<<"感谢您的使用"<<std::endl;}
    return 0;

}

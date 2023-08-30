#include<iostream>
#include"worker.hh"
#include"manger.hh"
#include"employee.hh"
#include"boss.hh"
#pragma once
class manager
{
    public:
        manager();
        void show_menu();
        void exitsystem();
	void show();
        
	void addperson();
	~manager();
};

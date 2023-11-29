class End final{ ...... };

class base {
public:
    virtual void show_something() = 0; 
};
class inherit1 : public base 
{
public :
    void show_something() final {
        cout << hello << endl;
    }
};
class inherit2 : public inherit
{
public :
    void show_something() { ... }       //会报错
};


class base
{
public:
    virtual void show_something() = 0;
};

class derive : public base 
{
public:
    void show_someting() override {......}  	//会报错，注意是someting少了h
};


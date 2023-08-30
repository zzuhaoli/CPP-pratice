class car
{
    private:
        std::string m_productionplace;
        int m_outprice;
        int m_sellquantity;
        float m_favorrate;

    public:
        car(std::string productionplace,int outprice,int sellquantity,float favorrate);
        void set(std::string productionplace, int outprice,int sellquantity,float favorrate );
        std::string get_productionplace();
        int get_outprice();
        int get_sellquantity();
        float get_favorrate();

        int volume();
};                       

class human:public animal{
    public:
    std::string _name;
    human(std::string name): _name(name),animal("Human",2){}
    void greeting() const{
        std::cout<<"Hello, I'm "<<_name<<'.'<<std::endl;
    }
};
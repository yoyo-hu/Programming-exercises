class animal{
    public:
    std::string  _species;
    int _eyes;
    animal(std::string species,int eyes):_species(species),_eyes(eyes){}
    void print_eyes(){
        std::cout<<_species<<" has "<<_eyes<<" eyes."<<std::endl;
    }
};
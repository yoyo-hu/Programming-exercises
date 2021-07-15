class Number{
    int num;
    public:
    Number(int val):num(val){}
    Number& add(int n){
        num+=n;
        return *this;
    }
    Number& sub(int n){
        num-=n;
        return *this;
    }
    void print(){
        std::cout<<num<<std::endl;
    }
};
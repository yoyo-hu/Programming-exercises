class Number{
	int num;
	public:
	Number(int val):num(val){}
	Number& add(int val){
		num+=val;
		return *this;
	}
	Number& sub(int val){
		num-=val;
		return *this;
	}
	void print(){
		std::cout<<num<<std::endl;
	}
};
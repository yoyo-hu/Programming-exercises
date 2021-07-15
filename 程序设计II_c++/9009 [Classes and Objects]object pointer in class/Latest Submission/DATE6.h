class DATE   // DATE.h----Specification file of class DATE
{
    public:
		DATE( int, int, int ); 
    DATE(); 

		DATE& Set( int, int, int );
		int getMonth() const;
		int getDay() const;
		int getYear() const;
		void Print() const;
		void Increment();
		void Decrement();
    private:
        int month;
        int day;
        int year;	
};


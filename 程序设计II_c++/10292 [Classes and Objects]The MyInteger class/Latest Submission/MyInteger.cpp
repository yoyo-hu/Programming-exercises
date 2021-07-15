    #include "MyInteger.hpp"
    MyInteger::MyInteger(int val){
        value = val;
    }
    int MyInteger::getValue() const{
        return value;
    }
    bool MyInteger::isEven() const{
        return (value % 2==0);
    }
    bool MyInteger::isOdd() const{
        return ((value+1) % 2==0);
    }
    bool MyInteger::isPrime() const{
        if(value==1)
            return 0;
        for (int i = 2; i * i <= value;i++){
            if(value%i==0)
                return 0;
        }
        return 1;
    }
    bool MyInteger::isEven(int val){
        return (val % 2==0);
    }
    bool MyInteger::isOdd(int val){
        return ((val+1) % 2==0);
    }
    bool MyInteger::isPrime(int val){
        if(val==1)
            return 0;
         for (int i = 2; i * i <= val;i++){
            if(val%i==0)
                return 0;
        }
        return 1;
    }
    bool MyInteger::isEven(const MyInteger& obj){
        return (obj.value % 2==0);
    }
    bool MyInteger::isOdd(const MyInteger& obj){
        return ((obj.value+1) % 2==0);
    }
    bool MyInteger::isPrime(const MyInteger& obj){
        if(obj.value==1)
            return 0;
        for (int i = 2; i * i <= obj.value;i++){
            if(obj.value%i==0)
                return 0;
        }
        return 1;
    }
    bool MyInteger::equals(int val){
        return (value == val);
    }
    bool MyInteger::equals(const MyInteger& obj){
        return (value == obj.value);
    }
    int MyInteger::parseInt(const std::string& s){
        int result=0;
        int rear = s.size();
        int place = 0;
        int neg = 1;
        if(s[place]=='-'){
            place = 1;
            neg = -1;
        }
        while(place<rear){
            result = result * 10 + (s[place]-'0');
            place++;
        }
        return result*neg;
    }
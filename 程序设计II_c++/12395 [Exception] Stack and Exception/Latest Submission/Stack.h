const int MAX_LEN = 5;

template<class T>

class Stack

{
private:

    T data[MAX_LEN];

    int stack_size;

public:

    explicit Stack(){
        stack_size=0;
    }

    bool empty() const{
        if(stack_size==0)
        return 1;
        return 0;
    }

    int size() const{
        return stack_size;
    }

    T& top(){
        if(empty()==1)
        throw 1;
        return data[stack_size-1];
    }
    const T& top() const{
        if(empty()==1)
        throw 1;
        return data[stack_size-1];
    }

    void push(const T& x){
        if(stack_size==MAX_LEN){
            if(x>data[stack_size-1])
            data[stack_size-1]=x;
        }
        else{
            data[stack_size]=x;
            stack_size++;
        }
    }

    void pop(){
        if(empty()==1)
        throw 1.0;
        stack_size--;
    }
};
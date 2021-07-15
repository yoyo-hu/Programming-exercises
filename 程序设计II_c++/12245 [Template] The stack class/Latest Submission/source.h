template<typename T, int capacity>
class Stack
{
public:
    Stack(){
        elements=new T[capacity];
        num=0;
    }                // Constructs an empty stack.
    ~Stack(){
        delete []elements;
    }
    bool empty(){
        return (num==0);
    }         // Returns true if the stack is empty.
    T peek(){
        return elements[num-1];
    }              // Returns the element at the top of the stack without removing it from the stack.
    void push(T value){
        elements[num++]=value;
    } // Stores an element into the top of the stack.
    T pop(){
        num--;
        return elements[num];
    }                // Removes the element at the top of the stack and returns it.
    int size(){
        return num;
    }               // Returns the number of elements in the stack.
private:
    T* elements;          // Points to an array that stores elements in the stack.
    int num;                 // The number of the elements in the stack.
};
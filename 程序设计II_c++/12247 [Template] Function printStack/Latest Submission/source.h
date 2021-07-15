using namespace std;
template<typename T>
class Stack
{
public:
    Stack(){
        elements=new T[10];
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
    } 
  int getSize(){
      return num;
  }
  void printStack(){
      for(int i=num-1;i>=0;i--){
          cout<<elements[i]<<endl;
      }
  }
  private:
    T* elements;          // Points to an array that stores elements in the stack.
    int num; 
};
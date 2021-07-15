 #include"Stack.hpp"
 Stack::Stack():data(NULL){
  }                           
  Stack::Stack(const Stack&other):data(NULL){
    if(other.data==NULL)return;
    data=new node(other.data->num);
    node *temp = data;
    for (node *i = other.data->next; i != NULL;i=i->next){
      node* newNode = new node(i->num);
      temp->next = newNode;
      temp=newNode;
    }
  }            
  Stack::~Stack(){
      while(data!=NULL){
        node *p=data;
        data=data->next;
        delete p;
    }
  }                       

  void Stack::push(int val){
    node* newNode = new node(val);
    newNode->next=data;
    data = newNode;
  }                 
  void Stack::pop(){
      node* temp=data;
      data=data->next;
      delete temp;
  }                    
  int Stack::top() const{
      return data->num;
  }               
  bool Stack::empty() const{
      if(data==NULL)
      return 1;
      else return 0;
  }            
  void Stack::clear(){
      while(data!=NULL){
        node *p=data;
        data=data->next;
        delete p;
    }
  }
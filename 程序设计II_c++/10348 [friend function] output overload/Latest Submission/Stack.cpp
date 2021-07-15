#include "Stack.hpp"
Stack::Stack():data(NULL) {
}
Stack::Stack(const Stack& a) {
	if(a.data==NULL){
        data=NULL;
        return;
    }
	data=new node;
	node *q=a.data;
	data->num=q->num;
	node *last=data;
	q=q->next;
	while(q!=NULL) {
		node *p=new node;
		p->num=q->num;
		last->next=p;
		last=p;
		q=q->next;
	}
	last->next=NULL;
}
Stack::~Stack() {
	while(data!=NULL) {
		node *p=data;
		data=data->next;
		delete p;
	}
}
void Stack::push(int x) {
	node* p=new node;
	p->num=x;
	p->next=data;
	data=p;
}
bool Stack::empty()const {
	return (data==NULL);
}
int Stack::top()const {
	return data->num;
}
void Stack::pop() {
	if(data!=NULL){
		node *p=data;
		data=p->next;
		delete p;
	}
}
void Stack::clear() {
	while(data!=NULL) {
		node *p=data;
		data=data->next;
		delete p;
	}
}
Stack Stack::operator=(const Stack& a) {
    clear();
    Stack o;
    o.data=NULL;
	if(a.data==NULL)return a;
	o.data=new node;
	node *q=a.data;
	o.data->num=q->num;
	node *last=o.data;
	q=q->next;
	while(q!=NULL) {
		node *p=new node;
		p->num=q->num;
		last->next=p;
		last=p;
		q=q->next;
	}
	last->next=NULL;
    return o;
}
std::ostream& operator<<(std::ostream& os, const Stack& stack) {
    Stack::node* temp=stack.data;
    os<<"[";
    while(temp!=NULL) {
		os<<temp->num;
        if(temp->next==NULL)os<<"]";
        else os<<",";
		temp=temp->next;
	}
    return os;
}

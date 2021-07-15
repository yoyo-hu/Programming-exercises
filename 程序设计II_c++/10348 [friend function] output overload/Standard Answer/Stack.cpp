#include "Stack.hpp"
#include <iostream>

Stack::Stack() {
  data = NULL;
}

Stack::Stack(const Stack& other) {
  if (other.empty()) {
    data = NULL;
  } else {
    data = new node(other.data->num);
    node* curp = data;
    for (node* otherp = (other.data)->next; otherp != NULL; otherp = otherp->next) {
      curp->next = new node(otherp->num);
      curp = curp->next;
    }
  }
}

Stack::~Stack() {
  clear();
  data = NULL;
}

Stack Stack::operator=(const Stack& other) {
  if (&other == this) { return *this; }
  clear();

  if (other.empty()) {
    data = NULL;
  } else {
    data = new node(other.data->num);
    node* curp = data;
    for (node* otherp = (other.data)->next; otherp != NULL; otherp = otherp->next) {
      curp->next = new node(otherp->num);
      curp = curp->next;
    }
  }
  return *this;
}

void Stack::push(int num) {
  node* newNode = new node(num, data);
  data = newNode;
}

void Stack::pop() {
  if (this->data != NULL) {
    node* temp = data;
    data = data->next;
    delete temp;
  }
}

int Stack::top() const {
  if (!empty()) {
    return data->num;
  } else {
    return 0;
  }
}

bool Stack::empty() const {
  return data == NULL;
}

void Stack::clear() {
  while (data != NULL) {
    node* temp = data;
    data = data->next;
    delete temp;
  }

  data = NULL;
}

std::ostream& operator<<(std::ostream& os, const Stack& s) {
  os << "[";
  Stack::node* temp = s.data;
  if (temp != NULL) { os << temp->num; temp = temp->next; }
  while (temp != NULL) {
    os << "," << temp->num;
    temp = temp->next;
  }
  os << "]";

  return os;
}

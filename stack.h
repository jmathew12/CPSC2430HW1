// James Mathew
// Stack.h

#ifndef STACK_H
#define STACK_H

class Stack
{
 public:
  Stack(int stackSize);
  ~Stack();
  Stack & operator = (const Stack& rhs);
  Stack(const Stack& s);
  bool push(char data);
  bool pop(char& data);
  bool isEmpty() const;
  char peek(int indx) const;
  
  
 private:
  void toString() const;
  bool full();
  bool reSize(char* letterList);
  char *letterList;
  int size;
  int top;
  
}; 

#endif 

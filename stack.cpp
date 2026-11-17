#include <bits/stdc++.h>
using namespace std;

int capacity = 5;
int st[5];
int top = -1;

void push(int x)
{
  if (top == capacity - 1) // 4
  {
    cout << "Stack Overflow!" << endl;
    return;
  }
  st[++top] = x;
}

void pop()
{
  if (top == -1)
  {
    cout << "Stack is empty!" << endl;
    return;
  }
  top--;
}

int peek()
{
  if (top == -1)
  {
    // cout<<"Stack is empty!"<<endl;
    return -1;
  }
  return st[top];
}

bool isEmpty()
{
  return top == -1;
}

int main()
{
  push(10);
  push(20);
  if (top == -1)
    cout << "stack is empty!" << endl;
  else
    cout << peek() << endl;
  // cout<<"Top value of stack is: "<<top==-1?"stack is empty":peek()<<endl;
  // st.pop();
  push(30);
  push(40);
  push(50);
  push(60);
  pop(); // 50
  pop(); // 40
  pop(); // 30
  pop(); // 20
  pop(); // 10
  pop();
  cout << isEmpty();
}

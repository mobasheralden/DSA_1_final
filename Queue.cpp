#include<bits/stdc++.h>
#define mx 5
#define ll long long
using namespace std;

int q[mx],front = -1, rear = -1;

void push(int val)
{
  if(rear == (mx-1))
  {
    cout<<"Queue Overflow"<<endl; return;
  }
  if(front == -1)
  {
    front = 0;
  }
  ++rear;
  q[rear] = val;
}

void pop()
{
  if(front == -1 || front> rear)
  {
    cout<<"Queue is empty!"<<endl; return;
  }

  front++;
  if(front> rear)
  {
    front = -1;
    rear = -1;
  }

}

int peek(){
  if(front == -1)
  {
    return -1;
  }
  return q[front];
}

int main()
{
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);
  push(60);
  cout<<peek()<<endl;
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  if(peek()== -1)
    cout<<"Queue is empty"<<endl;
  else cout<<peek()<<endl;
}

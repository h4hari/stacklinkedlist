#include<iostream>
using namespace std;
struct Node
{
int data;
Node *nxt;
}*top=NULL,*p;

Node* newnode(int x)
{
p=new Node;
p->data=x;
p->nxt=NULL;
return(p);
}

void push(Node *q)
{
if(top==NULL)
top=q;
else
{
q->nxt=top;
top=q;
}
}

void pop(){
if(top==NULL)
{
cout<<"Stack is empty!!";
}
else
{
cout<<"Deleted element is "<<top->data;
p=top;
top=top->nxt;
delete(p);
}
}

void show()
{
Node *q;
q=top;

if(top==NULL){
cout<<"Stack is empty!!";
}
else{
while(q!=NULL)
{
cout<<q->data<<"->";
q=q->nxt;
}
}
}

int main()
{
int ch,x;
Node *nptr;

while(1)
{
cout<<"\n\n1.Push\n2.Pop\n3.Display\n";
cout<<"Enter your choice:";
cin>>ch;

switch(ch){
case 1: cout<<"\nEnter data:";
cin>>x;
nptr=newnode(x);
push(nptr);
break;
case 2: pop();
break;

case 3: show();
break;
default: cout<<"\nWrong choice!!";
}
}

return 0;
}

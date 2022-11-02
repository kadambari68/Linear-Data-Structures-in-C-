#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
struct node  {  int info;
		node*next;
	     }*top,*save,* nn;
node * create_node(int n)
 {
    nn = new node;
    if(!nn)
    cout<<"overflow";
    else
      { nn->info=n;
	 nn->next = NULL;
      }
     return nn;
 }
 class stack
{public:
  stack()
   { top = NULL; }
 ~stack()
   { delete top;  }
void push(node*nn)
 {  char cho;
 if(nn==NULL)
   cout<<"overflow";
 else
   {  if(top==NULL)
	top=nn;
      else
      { save=top;  top = nn;
	 nn->next = save; }
   }
 }
void pop()
{ node*nn;
 if(top==NULL)
  cout<<"underflow";
 else
  { nn=top; top=top->next;
 delete nn; }
 }
 };
void display(node*ptr)
{ if(top==NULL)
  cout<<"underflow!!";
else
 {
 while(ptr!=NULL)
    { cout<<ptr->info<<" -> ";
    ptr = ptr->next;
    } cout<<"!!!\n";
 }
}
void main()
{ clrscr();
  top = NULL; stack s;
int ch,inf;  char cho,c;
label:
cout<<"\n[1]PUSH \n[2]POP \n[3]DISPLAY \n[4]EXIT \nEnter your choice:";
  cin>>ch;
  switch(ch)
    {  case 1 : do{ cout<<"enter information:";cin>>inf;
		  nn = create_node(inf);
		     s.push(nn);
	     cout<<"now the stack is:";display(top);
	     cout<<"press y to enter more nodes....";  cin>>cho;
	       }while(cho=='y');
	       goto label;
     case 2: do{ cout<<"the stack is:\n"; display(top);
	     cout<<"want to pop a node:"; cin>>c;
	       if(c=='y'||c=='Y')
		 s.pop();
		}while(c=='y'||c=='Y');
	      goto label;
       case 3 : display(top); break;
       case 4 : exit(0);
       default: cout<<"wrong choice!!!"; break;
    }
getch();
}

#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
struct node  {  int info;
		node*next;
	     }*f,*r;
node * create_node(int n)
 {  node * nn;
    nn = new node;
    if(!nn)
    cout<<"overflow";
    else
      {  nn->info=n;
	 nn->next = NULL;
      }
     return nn;
 }

void insert(node*nn)
{ char cho;
if(!nn) cout<<"overflow!!";
else
{ if(r==NULL)
f = r= nn;
 else
 { r->next = nn; r = nn;}
}
}
void del()
{ node*nn;
if(f==NULL) cout<<"underflow!!!\n";
else
{ nn = f;
if(f==r) f=r=NULL;
else
f = f->next;
delete nn;}
}
void display(node*ptr)
{ if(f==NULL)
cout<<"underflow!!";
else
{// ptr=f;
while(ptr!=NULL)
   { cout<<ptr->info<<" -> ";
   ptr = ptr->next;
   }cout<<"!!\n";
}
}
void main()
{ clrscr();
int ch,inf; char cho,c; node*nn;
f=r=NULL;
label:
cout<<"\n[1]INSERT \n[2]DELETE \n[3]DISPLAY \n[4]EXIT \nEnter your choice:";
cin>>ch;
do
{switch(ch)
   { case 1: do{ cout<<"enter information:";cin>>inf;
		  nn = create_node(inf);
	     insert(nn);
	     cout<<"now the queue is:";display(f);
	     cout<<"press y to enter more nodes....";  cin>>cho;
	       }while(cho=='y');
	       goto label;
     case 2: /*do{ cout<<"enter information:";cin>>inf;
		  nn = create_node(inf);
	     insert(nn);
	     cout<<"now the queue is:";display(f);
	     cout<<"press y to enter more nodes....";  cin>>cho;
	     }while(cho=='y');*/
	     do{ cout<<"the queue is:\n"; display(f);
	     cout<<"want to delete the node"; cin>>c;
	       if(c=='y'||c=='Y')
		  del();
		}while(c=='y'||c=='Y');
	      goto label;
     case 3: display(f); break;
     case 4: exit(0); break;
   }
  cout<<"\n do you want to continue(y/n)";
 }while(ch==0);
getch();
}


#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
const int N=50;
int info[N],f=-1,r=-1;
int insert(int info[],int ele)
{ if(r==N-1)
cout<<"Overflow!!";
else if(r==-1)
{ f = r = 0; info[r]=ele; }
else
{  r++;   info[r]=ele; }
return 0;
}
int del(int info[])
{ int ret;
 if(f==-1)  cout<<"underflow";
else
{ ret=info[f];
if(f==r)
 f=r=-1;
else
 f++;
}return ret;
}
void display(int info[],int f,int r)
{ if(f==-1) cout<<"underflow!!";
else
{ for(int i=f; i<r; i++)
cout<<info[i]<<" <- "; }
cout<<info[r]<<endl;
}
void main()

{ clrscr();
int item,ch,res; char cho,c;
cout<<"\n[1]INSERT \n[2]DELETE \n[3]DISPLAY \n[4]EXIT \nEnter your choice:";
cin>>ch;
do
 { switch(ch)
   { case 1: do{ cout<<"enter item for insertion:";cin>>item;
	     res = insert(info,item);
	     cout<<"now the queue is:"; display(info,f,r);
	     cout<<"press y to insert more elements:";cin>>cho;
	     }while(cho=='y');
     case 2: do{ cout<<"enter item for insertion:";cin>>item;
	     res = insert(info,item);
	     cout<<"now the queue is:"; display(info,f,r);
	     cout<<"press y to insert more elements:";cin>>cho;
	     }while(cho=='y');
	    // cout<<"Deletion of elements begins..\n";
	     do
	     { res = del(info);
	     cout<<"element deleted is:"<<res<<endl;
	     cout<<"now the queue is:"; display(info,f,r);
	     cout<<"want to delete more elements(y/n):"; cin>>c;
	     } while(c=='y');
    case 3: display(info,f,r);
    case 4: exit(0);
   }
  }while(ch==0);
getch();
}
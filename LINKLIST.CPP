#include<iostream.h>
#include<conio.h>
#include<process.h>
const int n=50;int top;
class stack
{ public: stack()
{ top=-1;}
~stack()
{top=-1;}
int push(int info[],int&top,int ele)
{ if(top==n-1)
 return -1;
else
     {   top++;
    info[top]=ele; }
return 0;
}
int pop(int info[],int&top)
{ int ret;
if(top==-1)
    return -1;
else
   { ret=info[top];
     top--;}
return ret;
}
};
void display(int info[],int top)
{  if(top==-1)   return;
cout<<info[top]<<" <-- "<<endl;
for(int i=top-1; i>=0; i--)
  cout<<info[i]<<endl;
}
void main()
{ clrscr(); stack s;
int ch,item,res; char cho='y',c='y'; int info[n], top=-1;
label:
cout<<"\n[1]PUSH \n[2]POP \n[3]DISPLAY \n[4]EXIT \nEnter your choice:";
cin>>ch;
do{  switch(ch)
    {  case 1 : while(cho=='y')
	       { cout<<"\nEnter item to be inserted:";cin>>item;
		 res = s.push(info,top,item);
		 if(res==-1)
		{ cout<<"overflow!!!";  break;  }
		 cout<<"stack now is:";  display(info,top);
		cout<<"\nwant to insert more elements(y/n)...";cin>>cho;
		 }
		goto label;
       case 2 : do{
		res=s.pop(info,top);
		if(res==-1){  cout<<"underflow!!!";   break; }
		else
	       {  cout<<"\nelement deleted:"<<res<<endl;
		cout<<"the stack now is:";display(info,top); }
		cout<<"\nwant to delete more elements(y/n):" ; cin>>c;
		}while(c=='y');
		goto label;
       case 3 :display(info,top); break;
       case 4 :exit(0);
    }
}while(ch==0);
getch();
}






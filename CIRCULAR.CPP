#include<iostream.h>
#include<conio.h>
const int n=7;
int q[n],f=-1,r=-1;
int insert(int[],int);
void display(int[],int,int);
int del(int q[]);

int insert(int q[],int ele)
 { if ((r==n-1&&f==0)||(f==r+1))
       cout<<"overflow!!!";
  else if(r==-1)
      f=r=0;
  else if(r==n-1&&f>0)
       r=0;
  else r++;
     q[r] = ele;
  return 0;
  }
int del(int q[])
  { int ret;
  if (f==-1)
    cout<<"underflow";
  else
    { ret = q[f];
    if(f==r)  f=r=-1;
    else if(f==n-1)
      f=0;
    else f++;
    }
  return ret;
 }

 void display(int q[],int f,int r)
 { int i=0;
cout<<"\nCircular queue is:\n(front shown as>>> rear as<<< free space as-)\n";
 if(f==-1)
    cout<<"underflow!!";
 else if(r>=f)
   { for(i=0; i<f; i++) cout<<"-";
	cout<<">>>";
     for(i=f; i<r; i++) cout<<q[i]<<"<-";
	cout<<q[r]<<"<<<"<<endl;
   }
 else
   { for(i=0; i<r; i++) cout<<q[i]<<"<-";
	  cout<<q[r]<<"<<<";
     for(;i<f; i++) cout<<"-";
	  cout<<">>>";
     for(i=f; i<n; i++) cout<<q[i]<<"<-";
	  cout<<"...wrap around...";
   }
 }

 void main()
   { clrscr();
   int ch,item,res;
   char cho;
  do
   { asd:
   cout<<"\t\t\tCIRCULAR QUEUE MENU\n[1]Insert \n[2]Delete \n[3]Display \n[4]Exit \nEnter your choice:";
	cin>>ch;

     switch(ch)
      {case 1: cout<<"\nenter item for insertion:"; cin>>item;
	       res = insert(q,item);
	       cout<<"\n Now Circular Queue is:";
	       display(q,f,r);
	       goto asd;
       case 2: item=del(q);
	       cout<<"element deleted is:"<<item<<endl;
	       display(q,f,r);
	       goto asd;
       case 3: display(q,f,r);
	       goto asd;
       case 4: break;
       default: cout<<"invalid";
		goto asd;
       }
       } while(ch!=4) ;
getch();
    }


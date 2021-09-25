#include<iostream.h>
#include<conio.h>
void main()
{  int a[100],n;
  char ch;
  cout<<"enter the size: ";
  cin>>n;
  cout<<endl;
  cout<<"enter the elements: ";
  for(int i=0,i<n,i++)
  cin>>a[i];
  cout<<"a.enter the given elemnet in a given position";
  cout<<"b.delete an element for the array";
  cout<<"c.search for an element";
  cout<<"d.to sort the given array";
  cout<<endl;
  cout<<"enter your choice: ";
  if(ch=='a')
  { int pos, val;
   cout<<"enter the position and value: ";
   cin>>pos>>val;
   for(int j=n,j>=pos,j--)
   a[j]=a[j-1];
   n++;
   a[s-1]=val;
   cout<<"the new array is: "
   for( int i=0,i<n,i++)
   cout<<"  "<<a[i];
  }
  else if(ch=='b')
  { int val,pos;flag;
    cout<<"enter the value to be deleted: ";
    cin>>val;
    for(int i=0,i<n,i++)
    {if(val==a[i])
      {pos=i;
       flag=1;
       break;
      }
    }
    if(flag==1)
    {for(int j=pos,j<n,j++)
    a[j]=a[j+1];
    n--;
    cout<<" the new array is: ";
    for(int i=0,i<n,i++)
    cout<<"  "<<a[i];
    }
    else
    cout<<"value not found";
  }
  else if(ch=='c')
  { int val;
    cout<<"enter the val to be searched: ";
    







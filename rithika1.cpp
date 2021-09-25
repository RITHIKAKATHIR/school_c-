#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{int x, even=0,odd=0;
cout<<"\n\t----------------------------------------------------------\t";
cout<<"\n                    EVEN-ODD COUNTER                          ";
cout<<"\n\t----------------------------------------------------------\t";
cout<<"\nThe numbers generated are: "<<endl;
for(int i=0;i<100;i++)
{x=random(100);
cout<<x<<" "<<'\t';
if(x%2==0)
even++;
if(x%2!=0)
odd++;
}
cout<<"\nThe number of even number generated is: ";
cout<<even<<endl;
cout<<"\nThe number of odd number generated is:  ";
cout<<odd<<endl;
getch();
}

#include<iostream.h>
#include<conio.h>

void main()
{ int a[10],n,a1;
cout<<"enter the size: ";
cin>>n;
cout<<"enter the elements: ";
for(int i=0;i<n;i++)
cin>>a[i];

for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[j]<a[i])
			{
				int tmp = a[i];
				a[i] = a[j];

				a[j] = tmp;
         }
      }
   }
cout<<"the array is asending order is: ";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";

getch();
}



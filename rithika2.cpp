#include<iostream.h>
#include<conio.h>
int int_is_prime(int n)
{int count=0;
for(int i=1;i<=n;i++)
  {if(n%i==0)
  count++;
   }
if(count<=2)
return(1);
else
return 0;
}
void main()
{int result;
for(int j=2;j<100;j++)
{result=int_is_prime(j);
if(result==1)
cout<<j<<" "<<'\t';
}
getch();
}

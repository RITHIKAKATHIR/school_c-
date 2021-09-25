#include<iostream.h>
#include<conio.h>
#include<math.h>
float area( float a, float b, float c)
{
float s,ret;
s=(a+b+c)/2;
ret=sqrt(s*(s-a)*(s-b)*(s-c));
return ret;
}
float area ( int a, int b)
{return (a*b);}
float area(long a,long b, long c)
{int r1;
r1=0.5*(a+b)*c;
return r1;
}
float area(float a)
{return (3.14*a*a);}
float area (float a,float b)
{return (3.14*a*b);}
double area (double a, double b)
{return(a*b);}
void main()
{cout<<"++++++++++++++++++++Shape Area Calculation System(SACS)+++++++++++++++++++++++";
cout<<"\n1.Triangle";
cout<<"\n2.Rectangle";
cout<<"\n3.Trapezoid";
cout<<"\n4. Circle";
cout<<"\n5.Ellipse";
cout<<"\n6.Parallelogram";
cout<<"\nEnter your choice: ";
int cho,a,v=0;
cin>>cho;
if(cho==1)
{float x,y,z;
cout<<"\nyou have entered triangle";
cout<<"\nenter side lengths: ";
cin>>x>>y>>z;
a=area(x,y,z);
v=1;
}
if(cho==2)
{int m,n;
cout<<"\nyou have entered rectangle";
cout<<"\nenter length annd breadth: ";
cin>>m>>n;
a=area(m,n);
v=1;
}
if(cho==3)
{long p,q,r;
cout<<"\nyou have entered trapizoid";
cout<<"\nenter parallel sides lengths and height: ";
cin>>p>>q>>r;
a=area(p,q,r);
v=1;
}
if(cho==4)
{float h;
cout<<"\nyou have entered circle";
cout<<"\nenter radius: ";
cin>>h;
a=area(h);
v=1;
}
if(cho==5)
{float a1,b1;
cout<<"\nyou have entered ecllipse";
cout<<"\nenter semimajor axis annd semiminor axis: ";
cin>>a1>>b1;
a=area(a1,b1);
v=1;
}
if(cho==6)
{double a2,b2;
cout<<"\nyou have entered parallelogram: ";
cout<<"\nenter height annd base: ";
cin>>a2>>b2;
a=area(a2,b2);
v=1;
}
if(v==1)
{cout<<"\nthe area is: ";
cout<<a;
}
if(v==0)
{cout<<"\nERROR";}
if(cho!=1&&cho!=2&&cho!=3&&cho!=4&&cho!=5&&cho!=6)
{cout<<"\ninvalid shapes";}
getch();
}
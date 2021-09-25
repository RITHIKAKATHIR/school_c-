#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{private:
int adminno;
char name[30];
int age;
public:
void enterdata()
{cout<<"\nEnter the admin number: ";
cin>>adminno;
cout<<"\nEnter the name of the student: ";
gets(name);
cout<<"\nEnter the age of the student: ";
cin>>age;
}
void display()
{cout<<"\nAdmin number: ";
cout<<adminno;
cout<<"\nName of the student: ";
puts(name);
cout<<"\nAge of the student: ";
cout<<age;
}
int ageret()
{return age;}
};
class UGSTUDENT:public student
{private:
char course[20];
int fee;
public:
void UGenter()
{cout<<"\nEnter the course you like to study: ";
gets(course);
cout<<"\nEnter the fees: ";
cin>>fee;
}
void UGdisplay()
{cout<<"\nCOURSE: ";
puts(course);
cout<<"\nFees: ";
cout<<fee;
}
char *returnCourse()
{return course;}
};
class PGSTUDENT:public student
{private:
char major[20];
int fee;
int stipend;
public:
void enterPG()
{cout<<"\nEnter the major you want to study: ";
gets(major);
cout<<"\nEnter the fees: ";
cin>>fee;
cout<<"\nEnter the stipend amount: ";
cin>>stipend;
}
void PGdisplay()
{cout<<"\nMAJOR: ";
puts(major);
cout<<"\nFees: ";
cout<<fee;
cout<<"\nStipend amount: ";
cout<<stipend;
}
char *returnmajor()
{return major;}
};
void main()
{float uga, pga,sumu=0,sump=0;
cout<<"\t\tSTUDENT MANAGEMENT SYSTEM\t\t";
cout<<endl;
UGSTUDENT UG[5];
PGSTUDENT PG[5];
cout<<"\nTHE UG ENTERIES ARE: "<<endl;
for(int i=0;i<5;i++)
{UG[i].enterdata();
 UG[i].UGenter();
}
cout<<"\nTHE PG ENTERIES ARE: "<<endl;
for(int i=0;i<5;i++)
{PG[i].enterdata();
 PG[i].enterPG();
}
cout<<"\n\t*******************MENU***********************";
cout<<"\n\n1. FIND THE AVERAGE AGE OF ALL PG AND UG STUDENTS ";
cout<<"\n\n2.DISPLAY PG STUDENTS WHOSE MAJOR IS COMPUTER SCIENCE ";
cout<<"\n\n3. DISPLAY THE DETAILS OF SCIENCE GRADUATES ";
int cho;
cout<<"\n\n\nENTER YOUR CHOICE: ";
cin>>cho;
if(cho==1)
{for(int j=0;j<5;j++)
{sumu=sumu+UG[j].ageret();}
uga=sumu/5;
cout<<"\nTHE AVERAGE AGE OF ALL UG STUDENTS IS: "<<uga;
for(int j=0;j<5;j++)
{sump=sump+PG[j].ageret();}
pga=sump/5;
cout<<"\nTHE AVERAGE AGE OF ALL PG STUDENTS IS: "<<pga;
}
if(cho==2)
{for(int i=0;i<5;i++)
  {if(strcmpi("PG[i].returnmajor()","computer science"))
   {PG[i].display();
   PG[i].PGdisplay();
   }
  }
}
if(cho==3)
{for(int i=0;i<5;i++)
  {if(strcmpi("UG[i].course()","science"))
   {UG[i].display();
   UG[i].UGdisplay();
   }
  }
}
getch();}








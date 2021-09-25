#include<iostream.h>
#include<conio.h>
#include<fstream.h>
fstream filef;
fstream files;
fstream fileb;
class employee
{private:
char username;
int password;
int employee_code;
char employee_name[50];
long salary;
char designation[20];
public:
char* pass()
{return password;}
char* user()
{return username;}
void get()
{cout<<"\nENTER EMPLOYEE CODE: ";
cin>>employee_code;
cout<<"\nENTER EMPLOYEE NAME: ";
gets(employee_name);
cout<<"\nENTER EMPLOYEE DESIGNATION: ";
gets(designation);
}
char* returndeg()
{return designation;}
void sal()
{cout<<"\nENTER SALARY: ";
cin>>salary;
}
void put()
{cout<<"\nEMPLOYEE CODE: "<<employee_code;
cout<<"\nEMPLOYEE NAME: ";
puts(employee_name);
cout<<"\nEMPLOYEE DESIGNATION: ";
puts(designation);
}};
class farmer:public employee
{char crop[10];
int fieldno;
int date;
int harvest_date;
public:
void enter()
{cout<<"\nTHE CROP TO CULTIVATE IS: ";
gets(crop);
cout<<"\nTHE DATE CROP WAS PLANTED (dd): ";
cin>>date;
cout<<"\nTHE FIELD YOUR HANDLING: (1, 2 OR 3): ";
cin>>fieldno;
}
int field()
{return fieldno;}
void getharvest_date()
{cin>>harvest_date;}
void display()
{cout<<"\nTHE CROP TO CULTIVATE IS: ";
puts(crop);
cout<<"\nTHE DATE CROP WAS PLANTED (dd mm yyyy): ";
cout>>date;
}};
class supervisor:public employee
{int capital_amount;
int amount_left;
int product_used;
char product_brought[100];
int product_left;
int cost;
public:
void supget()
{cout<<"\nENTER THE CAPITAL AMOUNT: ";
cin>>capital_amount;
}
void calc()
{amount_left=capital_amount-cost;}
void product(char c[50])
{if(strcmpi(c,"NPKSZn")==0)
 {strcpy(product_brought,"NPKSZn");//rice
  cost=25000;
  }
if(strcmpi(c,"NITRO")==0)
{strcpy(product_brought,"Nitro");//wheat
 cost=20000;
 }
if(strcmpi(c,"NP")==0)
{strcpy(product_brought,"NP"); //ragi
 cost=15000;
}
if(strcmpi(c,"KP")==0)
{strcpy(product_brought,"KP");//mangotrees
cost=10000;
}
if(strcmpi(c,"NPK")==0)
{strcpy(product_brought,"NPK");//banana
cost=5000;
}}
void proupdate(int a)
{product_used=a;  //product used in kg
product_left=10-product_used;} //total kg brought-used
void amountupdate()
{amount_left=capital_amount-cost;}
void supdis()
{cout<<"\nTHE CAPITAL AMOUNT IS: "<<capital_amount;
cout<<"\nTHE AMOUNT LEFT IS: "<<amount_left;}
void prodetails()
{cout<<"\nTHE PRODUCT BROUGHT: ";
puts(product_brought);
cout<<"\nTHE AMOUNT OF PRODUCT USED: "<<product_used;
cout<<"\nTHE AMOOUNT OF PRODUCT LEFT: "<<product_left;
}};
class agricultural_biologists:public employee
{int crop[10];
float carbo;
float fats;
char vitamin;
public:
void getcrop(char c[10])
{strcpy(crop,c);}
void cropdetail()
{if(strcmpi(crop,"rice")==0)
 {carbo=28;
 fats=0.3;
 vitamin=B3;
 }
if(strcmpi(crop,"wheat")==0)
 {carbo=41;
 fats=0.1;
 vitamin=B6;
 }
if(strcmpi(crop,"ragi")==0)
{carbo=10;
 fats=0.09;
 vitamin=D;
 }
if(strcmpi(crop,"mango")==0)
{carbo=15;
 fats=0.4;
 vitamin=E;
 }
if(strcmpi(crop,"banana")==0)
{carbo=59;
 fats=2;
 vitamin=C;
 }
};
void displaydetails()
{cout<<"\nTHE NUTRITIONAL VALUES ARE AS FOLLOWS IN 100 G OF THAT CROP: ";co
cout<<"\nCARBOHYDRATES: "<<carbo;
cout<<"\nFATS: "<<fats;
cout<<"\nVITAMIN: "<<vitamin;
}
};
void intro()
{
for(int i=1;i<=160;i++)
cout<<"_";
cout <<"\n\t\t\t\t  FARM\n";
cout<<"\t\t\t\tMAGANEMENT\n";
cout<<"\t\t\t\t  SYSTEM\n\n";
for(int i=1;i<=160;i++)
cout<<"_";
};
void farmer(farmer f)
{char username1[10];
char password1[10];
int flag=0;
label:
{cout<<"\nENTER AN USERNAME AND PASSWORD: ";
gets(username1);
gets(password1);
}
filef.open("farmer.dat",ios::out|ios::binary)
while(filef.read((char*)&farmer,sizeof(farmer)))
{if(strcmp(f.user(),username1)==0)
{if(strcmp(f.pass(),password1)==0)
 {cout<<"\nwelcome farmer!";
 flag=1;
 filef.close();
 }
 else
 {cout<<"\nwrong username. Try again."
 goto label;
 }
}
}
if(flag==1)
{cout<<"\nYOU ARE FARMER OF FIELD "<<f.field();
cout<<"\n1.TO MODIFY DATA";
cout<"\n2.TO VIEW DATE";
cout<<"\nENTER YOUR CHOICE: ";
int cho
cin>>cho;
if(cho==1)
{filef.open("farmer.dat",ios::app|ios::binary);
f.enter();
filef.write((char*)&f,sizeof(f));
f.getharvest_date();
filef.write((char*)&f,sizeof(f));
}
if(cho==2)
{filef.open("farmer.dat",ios::in|ios::binary);
while(file.read((char*)&f,sizeof(f)))
{if(strcmpi(username,f.user())
 f.display();
}
filef.close();
}};







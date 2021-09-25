#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class employee
{private:
int EmployeeNumber;
char EmployeeName[10];
float Basic;
float DA;
float HRA;
float gross_sal;
float Net_Sal;
float incometax;
public:
void read_data()
{cout<<"\nENTER EMPLOYEE NUMBER: ";
cin>>EmployeeNumber;
cout<<"\nENTER EMPLOYEE NAME: ";
gets(EmployeeName);
cout<<"\nENTER EMPLOYEE'S BASIC SALARY: ";
cin>>Basic;
}
void calculate()
{DA=(0.52*Basic);
HRA=(0.30*Basic);
gross_sal=Basic+DA+HRA;
incometax=(0.30*gross_sal);
Net_Sal=Basic-incometax;
}
void print_data()
{cout<<"\nEMPLOYEE NUMBER: ";
cout<<EmployeeNumber;
cout<<"\nENTER EMPLOYEE NAME: ";
puts(EmployeeName);
cout<<"\nEMPLOYEE'S BASiC SALARY IS: ";
cout<<Basic;
cout<<"\nEMPLOYEE'S DA IS: ";
cout<<DA;
cout<<"\nEMPLOYEE'S HRA IS: ";
cout<<HRA;
cout<<"\nEMPLOYEE'S GROSS SALARYIS: ";
cout<<gross_sal;
cout<<"\nEMPLOYEE'S INCOME TAX IS: ";
cout<<incometax;
cout<<"\nEMPLOYEE'S NET SALARY IS: ";
cout<<Net_Sal;
}
};
void main()
{cout<<"\n\n\n=================Payroll Management System=============================";
employee emp[10];
int num;
cout<<"\n\n\nEnter the number of employee details you would like to enter: ";
cin>>num;
if(num<=10)
{for(int i=0;i<num;i++)
 {cout<<endl;
  emp[i].read_data();
  emp[i].calculate();
  emp[i].print_data();
 }
}
else
cout<<"ERROR";
getch();
}
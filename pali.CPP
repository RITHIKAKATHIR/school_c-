#include<iostream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()

{char ch[20];
 char dup[20];
 int length=0,j,cot;
 cout<<"enter the string: ";
 gets(ch);
 for(int i=0;ch[i]!='\0';i++)
 length=i;
 for(int a=length, j=0;a>=0,j<=length;a--,j++)
 dup[j]=ch[a];

 if(ch==dup)
 cout<<"it is a PALINDROME";
 else
 cout<<"it is not a palindrome";

 getch();
}



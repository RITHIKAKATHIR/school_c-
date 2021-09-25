#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class string
{char str[100];
public:
string()
{strcpy(str,"default string");}
void upit()
{for(int i=0;str[i]!='\0';i++)
 {if(str[i]>='a'&&str[i]<='z')
  str[i]=str[i]-32;
  puts(str);
 }
}
void loit()
{for(int i=0;str[i]!='\0';i++)
 {if(str[i]>='A'&&str[i]<='Z')
  str[i]=str[i]+32;
  puts(str);
 }
}
void Length()
{int len=0;
for(int i=0;str[i]!='\0';i++)
len++;
cout<<len<<endl;
}
void Scopy()
{char copy[100];
for(int i=0;str[i]!='\0';i++)
{copy[i]=str[i];}
puts(copy);
}
void Sconcat()
{char cat[100];int k=0;int len;
 for(int i=0;str[i]!='\0';i++)
len++;
for(int i=0;i<len;i++)
{cat[k]=str[i];}
}
void main



#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void countword(char word[])
{
	ifstream fin;
	fin.open("diary.TXT");
	char word1[30];
	int count=0;
	while(!fin.eof())
	{
		fin>>word1;
		if(strcmpi(word1,word)==0)
			count++;
	}
	cout<<"Number of the word in file are "<<count;
	fin.close();
}
void main()
{cout<<"---------------------------------------------------------------";
cout<<"\n                                    WORD COUNTER                ";
cout<<"-----------------------------------------------------------------";
char str[50];
cout<<"ENTER THE WORD: ";
gets(str);
countword(str);
getch();
}

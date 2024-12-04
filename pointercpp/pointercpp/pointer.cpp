#include<iostream>
using namespace std;
void check(int*,int*);
void check(char*,char*);
void fun(int a,int b)

{
	a=a+10;
	b=b+10;
}
int main()
{/*
	int x;
	int y;
	x=11;
	y=22;*/
 
	char a='A';
	char b='B';
	check(a,b);
	cout<<a<<" "<<b<<endl;
fun(x,y);
cout<<x<<" " <<y<<endl;
check(&x,&y);
cout<<x<<" "<<y<<endl;
}
void check(int* p,int*q)
{
	*p=*p+10;
	*q=*q+10;
}

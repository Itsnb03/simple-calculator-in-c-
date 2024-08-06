#include<iostream.h>
#include<conio.h>

void add (int a, int b) {
	int ans;
	ans=a+b;
	cout <<" addition; "<<a<<" and "<<b<<" is "<<ans;
}
void sub (int a, int b) {
	int ans;
	ans=a-b;
	cout <<"\n substraction; "<<a<<" and "<<b<<" is " <<ans;
}
void mul (int a, int b){
	int ans;
	ans=a*b;
	cout <<"\n multiplication of "<<a<< " and "<<b<< " is "<<ans;
}
void main () {
	clrscr ();
	int  m,n;
	cout <<" enter first number ";
	cin >>m;
	cout <<" enter second number ";
	cin >>n;
	add (m,n);
	cout <<"\n enter first number for substraction ";
	cin >>m;
	cout <<"\n enter second number for substraction ";
	cin >>n;
	sub (m,n);
	cout <<"\n enter first number for multiplication ";
	cin >>m;
	cout<<"\n enter secon number for multiplication ";
	cin >>n;
	mul (m,n);
	getch ();
}






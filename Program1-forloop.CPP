// This code is written for Turbo C++
//This code will return you a factorial of a given number 
//*************************************************

#include<iostream.h>
#include<conio.h>
void main()
{
int num, factorial;
clrscr();
cout<<"Enter a number: ";
cin>>num;
factorial = 1;
for(int i=1; i<=num; i++){
factorial = factorial*i;
}
cout<<"factorial of"<<" "<<num<<"is"<<factorial;
getch();
}

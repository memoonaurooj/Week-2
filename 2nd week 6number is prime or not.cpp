#include<iostream>
using namespace std;
int main()
{
int num;
bool isprime=true;
cout<<"enter positive integer";
cin>>num;
for(int i=2;i<=num/2;i++)
{
	if(num%i==0)
	{
		isprime=false;
		break;
	}
}
if(isprime)
cout<<num<<"\tis prime number";
else
cout<<num<<"\tis not a prime number";
}

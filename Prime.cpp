//Program to check whether given number is prime or not--->""o(n),o(n/2),o(sqrt(n))""
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"Enter a number:";
	cin>>num;
	//for(int i=2;i<=num-1;i++)  //o(sqrt(n))
	//for(int i=2;i<=num/2;i++)--> o(n/2)
	for(int i=2;i<=sqrt(num)+1;i++)  //--> o(sqrt(n))
	{
		if(num%i==0)
	    {
	    	cout<<"The number is not a Prime";
	    	count+=1;
	    	break;
		}
	}
	if(count==0)
	cout<<"It is a prime number";
	return 0;
}

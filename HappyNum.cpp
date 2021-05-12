#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,n;
	int res=0;
	cout<<"enter a number:";
	cin>>n;
	while(1)
	{
		r=n%10;
		n=n/10;
		res=res+r*r;
     	if(n==0)
     	{
	    	n=res;
        	res=0;
        	if(n>=1&&n<=9)
        	break;
     	}
     }
	if (n==1)
	cout<<"It is a happy number";
	else
	cout<<"Not a happy number";
	return 0;
}

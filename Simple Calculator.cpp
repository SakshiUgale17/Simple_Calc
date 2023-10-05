#include<iostream>
using namespace std;
int main()
{
	int num1,num2,ans,ans1;
	char op;
	do
	{
		cout<<"Enter two numbers: ";
    	cin>>num1>>num2;
		cout<<"Enter Operation you want to perform: ";
    	cin>>op;
    	switch(op)
     	{
	
		    case '+':ans=num1+num2;
		         cout<<ans<<endl;
		         break;
		    case '-':ans=num1-num2;
		         cout<<ans<<endl;
		        break;
	    	case '*':ans=num1*num2;
		         cout<<ans<<endl;
		        break;
	    	case '/':ans=num1/num2;
		         cout<<ans<<endl;
		        break;
    	}
		cout<<"Do you want to Continue more: ";	
		cin>>ans1;
	}
	while(ans1==1);
	return 0;
}

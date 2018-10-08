#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
int main()
{

	int a[100],i,j,temp;

	    cout<<"enter the num in arr"<<endl;
	    cin>>a[i];
	      for(i = 0;i<=0;i++)
	      {
	      	//cout<<"enter the num to be shorted"<<endl;
	      	cin>>a[i];
		  }
		  for(i=0;i<=5;i++)
		  {
		  	for(j=0;j<=5;j++)
		  	{
		  		if(a[i]>a[j])
		  		{
		  			temp = a[i];
		  			a[i] = a[j];
		  			a[j] = temp;
				  }
			  }
			  
		  }
		  for(i=0;i<5;i++)
		  {
		  	cout<<"the series "<<a[i]<<endl;
		  }
		  return 0;
}

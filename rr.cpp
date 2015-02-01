#include<iostream>
using namespace std;
int main(){
	int i,n,tq,s=0,temp,t=0;
	float awt=0,atat=0;
	cout<<"Enter the no. of process : ";
	cin>>n;
	int p[n],c[n],wt[n],tat[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Burst time P"<<i+1<<" : ";
		cin>>p[i];
		c[i]=p[i];
	}
	cout<<"Enter the value of time Quantum :";
	cin>>tq;
	while(1)
	{
	 for(i=0,s=0;i<n;i++)
	 {   temp=tq;
		if(c[i]==0)
		{
		   s++;
		   continue;
	    }
		if(c[i]>tq)
		c[i]=c[i]-tq;
		else
		if(c[i]>=0){
		temp=c[i];
		c[i]=0;
		}
		t=t+temp;
		tat[i]=t;
     }
		if(n==s)
		break;
	}
    for(i=0;i<n;i++)
    { 
    	wt[i]=tat[i]-p[i];
    	awt+=wt[i];
    	atat+=tat[i];
    }
    cout<<"Average Waiting time : "<<awt/n<<"\n";
    cout<<"Average Turn Around Time : "<<atat/n<<"\n";
	return 0;
}


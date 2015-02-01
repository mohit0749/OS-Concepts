#include<iostream>
using namespace std;
int main(){
	int n,i,j,min,temp,s=0;
	cout<<"Enter the no. of the processes : ";
	cin>>n;
	int p[n];
	for(i=1;i<=n;i++){
		cout<<"Enter the burst time of P"<<i<<" : ";
		cin>>p[i];
	}
	for(i=1;i<n;i++){
		min=i;
		for(j=i+1;j<=n;j++)
		
			if(p[j]<p[min]){
				min=j;
				if(min!=i){
					temp=p[i];
					p[i]=p[min];
					p[min]=temp;
			    }
			
			}
	    
	}
	cout<<"-------------The Process will run in this sequence-----------------\n";
	for(i=1;i<=n;i++)
	cout<<"Process no."<<i<<" run : "<<p[i]<<"ms\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout<<"Waiting time of P1 : "<<0<<"\n";
		float awt;
		int a,w=0;
		for(i=2;i<=n;i++){
			a=s+p[i-1];
		    awt+=a;
			cout<<"Waiting time of P"<<i<<" : "<<s+p[i-1]<<"\n";
			s+=p[i-1];
			
			
		}
		cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n";
		s=0;
		cout<<"Average waiting time is : "<<awt/n<<"\n";
		cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n";
		awt=0,a=0;
		for(i=1;i<=n;i++)
		{   a=s+p[i];
		    awt+=a;
			cout<<"Turn arround time of P"<<i<<" : "<<s+p[i]<<"\n";
			  s+=p[i];
		}
		cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"Average Turn arround time is : "<<awt/n<<"\n";
	    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------\n";
		
		system("pause");
		
	return 0;
	}


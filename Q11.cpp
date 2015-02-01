#include<iostream>
#include<stdlib.h>
#include<pthread.h>
using namespace std;
int sum;
void *summation(void *p);

int main(int argc, char *argv[])
{
   pthread_t tid;
   pthread_create(&tid,NULL,summation,argv[1]); 
   pthread_join(tid,NULL); 
   cout<<"\nSum of even numbers is ="<<sum<<"\n"; 
   return 0;
}
void *summation(void *p) 
{ 
   int value=atoi((char *)p); 
   sum=0; 
   for(int i=1;i<=value;i++)
   {
	   if(i%2==0)sum+=i; 
	   else continue;
   }
   for(int i=1;i<=value;i++)
   {
     if(i%2==0)cout<<"\nEven value is : "<<i;
     else continue;
   }
   pthread_exit(0);
}


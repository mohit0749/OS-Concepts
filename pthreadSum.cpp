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
   cout<<"Sum is ="<<sum<<"\n"; 
   return 0;
}
void *summation(void *p) 
{ 
   int i,value=atoi((char *)p); 
   sum=0; 
   for(i=1;i<=value;i++)
   sum+=i; 
   pthread_exit(0);
}


#include<iostream>
#include<stdlib.h>
#include<pthread.h>
using namespace std;
int fact;
void *facto(void *p);
int main(int argc, char *argv[])
{
pthread_t t;
pthread_create(&t,NULL,facto,argv[1]);
pthread_join(t,NULL);
cout<<"Factorial = "<<fact<<"\n";
}
void *facto(void *p)
{
int value=atoi((char *)p);
fact=1;
for(int i=1;i<=value;i++)
{
fact*=i;
}
pthread_exit(0);
}


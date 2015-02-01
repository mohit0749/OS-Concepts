#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
int pid;
pid=fork();
if(pid<0){cout<<"Fork Failed"<<"\n";}
else if(pid==0){cout<<"I am Child and pid is : "<<getpid()<<"\n";}
else if(pid>0){cout<<"I am Parant and pid : " <<getpid()<<"\n";}
return 0;}

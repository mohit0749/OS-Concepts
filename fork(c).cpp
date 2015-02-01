#include<iostream>
#include<unistd.h>
#include<sys/wait.h>
using namespace std;
int main()
{
pid_t p;
int status;
pid_t wait_result;
p=fork();
if(p==0)
{
cout<<"I am a child and my pid = "<<getpid()<<"\n";
execl("/bin/ps","ps",NULL);
cout<<"Could not execute file fork3"<<"\n";
}
else if(p>0)
{
cout<<"I am the parent and my pid = "<<getpid()<<"\n";
cout<<"My child has pid = "<<p<<"\n";
}
else
{cout<<"The Fork system call failed to create a new process"<<"\n";}
cout<<"I am a happy,healthy process and my pid = "<<getpid()<<endl;
if(p==0)
{
cout<<"This code will never be executed!"<<endl;
}
else
{
cout<<"I am a parent and I am going to wait for my child"<<endl;
do{
wait_result=wait(&status);
}while(wait_result!=p);
cout<<"I am a parent and I am quiting."<<endl;
}
return 0;
}


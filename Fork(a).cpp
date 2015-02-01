#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
cout<<"0.I am Process "<<getpid()<<"\n";
fork();
cout<<"1.I am Process "<<getpid()<<"\n";
fork();
cout<<"2.I am Process "<<getpid()<<"\n";
fork();
cout<<"3.I am Process "<<getpid()<<"\n";
return 0;
}

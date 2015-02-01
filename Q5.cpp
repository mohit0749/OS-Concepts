#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
using namespace std;
int main(int argc,char *argv[])
{
	if(argc!=3){cout<<"Two argument is required\n";exit(0);}
	char buf[200];
	int f1,f2,r,w;
	f1=open(argv[1],O_RDONLY);
	if(f1==-1){cout<<"Error! File not opened.\n";exit(0);}
	f2=open(argv[2],O_WRONLY|O_CREAT,0641);	
	if(f2==-1){cout<<"Error! File not created.\n";exit(0);}
    while((r=read(f1,&buf,1))>0)
    {
    w=write(f2,&buf,1);
    if(r!=w){cout<<"Error! File not copied\n";exit(0);}
    }
	cout<<"\nFile copied successful\n";
	close(f1);
	close(f2);
}

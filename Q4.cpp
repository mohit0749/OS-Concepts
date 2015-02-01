#include<iostream>
#include<time.h>
#include<stdio.h>
#include<cstdlib>
#include<sys/stat.h>
using namespace std;
int main(int argc,char *argv[])
{
	
	struct stat buf;
	if(argc!=2){cout<<"Enter a valid file name\n";exit(0);}
	if(stat(argv[1],&buf)<0)
	cout<<"Error in obtaining faile stats \n";
	else 
	{
		cout<<"Owner uid ="<<buf.st_uid<<endl;
		cout<<"Owner gid ="<<buf.st_gid<<endl;
		cout<<"Owner Access Permission = ";
		if(buf.st_mode&S_IRUSR)
		{
		cout<<"READ ";
		}
	    if(buf.st_mode&S_IWUSR)
		{
		cout<<"WRITE ";
		}
		if(buf.st_mode&S_IXUSR)
		{
		cout<<"EXECUTE ";
		}
		cout<<"\nGroup Access Permission =";
		if(buf.st_mode&S_IRGRP)
		{
		cout<<"READ ";
		}
	    if(buf.st_mode&S_IWGRP)
		{
		cout<<"WRITE ";
		}
		if(buf.st_mode&S_IXGRP)
		{
		cout<<"EXECUTE ";
		}
		cout<<"\nOther Permission =";
		if(buf.st_mode&S_IROTH)
		{
		cout<<"READ ";
		}
	    if(buf.st_mode&S_IWOTH)
		{
		cout<<"WRITE ";
		}
		if(buf.st_mode&S_IXOTH)
		{
		cout<<"EXECUTE ";
		}
		cout<<"\nAccess Time = "<<ctime(&(buf.st_atime));
		cout<<"Modification Time = "<<ctime(&(buf.st_mtime));
	}
	exit(0);
}


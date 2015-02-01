#include<stdlib.h>

int main()
{
	system("echo '1.Kernel version'");
	system("cat /proc/sys/kernel/osrelease");
	system(" echo '2.Kernel Behaviour'");
	system("cat /proc/sys/kernel/version | pgawk '{print $2}' | awk 'NR==1{print}'");
	system(" echo '3.CPU Type and Model'");
	system (" cat /proc/cpuinfo | pgawk '{print $NR,$6,$7,$NF}' | awk 'NR==5{print}'");
}


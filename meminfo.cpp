#include<stdlib.h>
int main()
{
	system("echo '1.Kernel Behaviour'");
	system("cat /proc/sys/kernel/version |pgawk '{print $2}' | awk 'NR==1{print}'");
	system("echo '2.Total Memory of the system'");
	system("cat /proc/meminfo | awk 'NR==1{print}'");
	system("echo '3.Available Memory of the system'");
	system("cat /proc/meminfo | awk 'NR==2{print}'"); 
}

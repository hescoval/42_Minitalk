#include "min.h"


void printbits(int signal)
{
	static int bits = 0;
	static int byte[8];
	if(signal == SIGUSR1)
		byte[bits++] = 0;
	else
		byte[bits++] = 1;
	if(bits == 8)
	{
		byteprint(byte);
		bits = 0;
	}
}

int main()
{
	pid_t server_process = getpid();
	ft_printf("This server's Process ID is: %i\n", server_process);
	while(1)
	{
		signal(SIGUSR1, printbits);
		signal(SIGUSR2, printbits);
	}
}
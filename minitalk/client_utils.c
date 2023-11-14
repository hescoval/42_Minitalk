#include "min.h"

void	bytebit(int c, pid_t PID)
{
	int bits = 0;

	while(bits < 8)
	{
		if(c % 2 == 0)
			kill(PID, SIGUSR1);
		else
			kill(PID, SIGUSR2);
		c /= 2;
		bits++;
		usleep(100);
	}
}
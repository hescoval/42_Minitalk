#include "min.h"

void comm(pid_t PID, char *string)
{
	int i = 0;
	while(string[i])
		bytebit(string[i++], PID);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		pid_t target = atoi(av[1]);
		ft_printf("You've inputted the PID %i\n", target);
		comm(target, av[2]);
	}
	else
		ft_printf("Please enter a PID and the string you want to print!\nExample: \"./client 4242 \"We love 42\"");
}
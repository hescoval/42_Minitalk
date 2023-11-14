#ifndef SERVER_H
# define SERVER_H

# include <signal.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include "libft/libft.h"

void	byteprint(int *byte);
void	bytebit(int c, pid_t PID);

#endif
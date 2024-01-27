#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * infinite_while - Run an infinite while loop.
 *
 * Return: Always 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - zombies
 *
 * Description: make five zombies
 * Return: 0 for success
 */
int main(void)
{
	int i;
	pid_t process;

	i = 0;
	while (i < 5)
	{
		process = fork();
		if (process)
			printf("Zombie process created, PID: %i\n", process);
		else
			exit(0);
		i++;
	}
	infinite_while();
	return (0);
}

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int fd[2];
	int pidC;
	char buf[10];
	int num;
	
	pipe(fd); /* TODO error manamgent. */
	pidC = fork();
	
	switch (pidC)
	{
		case 0: /* hijo */
			close(fd[0]);
			write(fd[1], "abcde", 5);
			close(fd[1]);
			exit(0);
			break;
		case -1:
			/* TODO: error */
			break;
		default: /* padre */
			close (fd[1]);
			num = read(fd[0], buf, sizeof(buf) );
			printf("Padre lee %d bytes: %s \n", num, buf);
			close(fd[0]);
			break;
			
	}	
		return 0;
}
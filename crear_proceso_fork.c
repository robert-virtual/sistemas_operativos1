# include <unistd.h>
# include <stdio.h>

int main(int argc, char* argv[])
{
	char *const argv2[] = {"prog4", "abcdef", "ghij", NULL};
	
	printf("%s ; %i \n", argv[0], getpid());
	execv("./prog4", argv2);
	
	printf("error \n");
	return -1;
	}
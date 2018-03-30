#include <sys/syscall.h>
#include <stdlib.h>

#define PAGE_SIZE 4096

int main()
{
	char *buf;
	int i, j;
	syscall(59);

	buf = malloc(20 * PAGE_SIZE);
	printf("buf address: %p\n", buf);

	for (i = 0; i < 20; i++) {
		for (j = 0; j < 3; j++)
			buf[i*PAGE_SIZE] = 's';
	}

	syscall(59);

	return 0;
	
}

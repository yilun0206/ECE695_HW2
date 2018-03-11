#include <sys/syscall.h>
#include <stdlib.h>

#define PAGE_SIZE 4096

int main()
{
	char *buf;
	int i;
	syscall(59);

	buf = malloc(20 * PAGE_SIZE);
	for (i = 0; i < 20; i++) {
		buf[i*PAGE_SIZE] = 's';
	}

	return 0;
	
}

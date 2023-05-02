#define _GNU_SOURCE
#include "portab.h"
#include <assert.h>
#include <string.h>
#include "defines.h"
#include "tool.h"
#include "hash.c"
#include <stdio.h>

int
main(int argc, char *argv[]) {
	char *salt = argv[1];
	int num = atoi(argv[2]);
	int off = 0;
	if (argc > 3)
		off = atoi(argv[3]);
	int max = num+off;

	for (int i=off; i < max; i++) {
		char host_buffer[255];
		sprintf(host_buffer,"%x",i);
		strcat(host_buffer,salt);

		printf("%x: %x\n", i, Hash(host_buffer));
	}

}

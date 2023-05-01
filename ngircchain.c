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
	char out_buffer[255];
	strcpy(out_buffer,argv[2]);
	int num = atoi(argv[3]);

	printf("%04i: %s\n", 0, out_buffer);

	for (int i=1; i <= num; i++) {
		char host_buffer[255];
		strcpy(host_buffer,out_buffer);
		strcat(host_buffer,salt);

		sprintf(out_buffer,"%x",Hash(host_buffer));
		printf("%04i: %s\n", i, out_buffer);
	}

}

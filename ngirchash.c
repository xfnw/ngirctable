#define _GNU_SOURCE
#include "portab.h"
#include <assert.h>
#include <string.h>
#include "defines.h"
#include "tool.h"
#include "hash.c"
#include <stdio.h>

int a;
int b;
int c;
int d;

int
main(int argc, char *argv[]) {

	char *salt = argv[1];
	//printf("%s\n",salt);

					char host_buffer[255];
					strcpy(host_buffer,argv[2]);
					strcat(host_buffer,salt);

					printf("%x\n",Hash(host_buffer));

}

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

	for (a=1; a<=255; a++) {
		for (b=1; b<=255; b++) {
			for (c=1; c<=255; c++) {
				for (d=1; d<=255; d++) {
					char host[18];
					sprintf(host,"%u.%u.%u.%u",a,b,c,d);

					char host_buffer[255];
					strcpy(host_buffer,host);
					strcat(host_buffer,salt);

					printf("%s\t%x\n",host,Hash(host_buffer));
				}
			}
		}
	}

}

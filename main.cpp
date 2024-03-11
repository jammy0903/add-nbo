#include <stdio.h>
#include <stdint.h>
#include "add.h"

int main(int argc, char* argv[]) {

	int a = readConvert(argv[1]);
	int b = readConvert(argv[2]);
	Adding(a,b);
	//printf("%u + %u = %u\n",a,b,sum);
	return 0;
	}

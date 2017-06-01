#include <stdio.h>
#include "hello.h"

int main(int argc, char const *argv[])
{
	hello(*argv[1]);

	return 0;
}
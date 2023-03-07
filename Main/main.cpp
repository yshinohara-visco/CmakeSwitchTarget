#include <stdio.h>
#include "ModuleA.h"
#include "ModuleC.h"

int main()
{
	printf( "Hello\n" );
	ModuleA_func();
	ModuleC_func();
}
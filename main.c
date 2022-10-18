#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int i = 10;
	pfintf("함수 호출전 i=%d\n",i);
	inc(i);
	pfintf("함수 호출후 i=%d\n",i);
	return 0; 
}

int inc(int counter)
{
	counter++;
	return counter;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int i = 10;
	pfintf("�Լ� ȣ���� i=%d\n",i);
	inc(i);
	pfintf("�Լ� ȣ���� i=%d\n",i);
	return 0; 
}

int inc(int counter)
{
	counter++;
	return counter;
}

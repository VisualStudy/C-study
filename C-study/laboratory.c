#include <stdio.h>

int main(int argc, char argv[])
{
	int a; // int a 선언
	; // NULL statement 공문
	int b = a;
	a = b = 100;
	
	return 0;
}
#include <stdio.h>

extern int asmMAX(void);

int main(void) {
	int res;
	res = asmMAX();
	return 0;
}
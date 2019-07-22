#include <stdio.h>

int main(void) {
	// your code goes here
	int k,*p,**m;
    k=5;
	p=&k;
	**m=&p;
	printf("%d %d %d",k,*p,**m);
	return 0;
}

#include <stdio.h>

void helloWorld(int i) {
	if (i == 5) return;
	
	printf("Hello\n");
	helloWorld(i + 1);
}

int main()
{
	helloWorld(0);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *pf = fopen("1.txt", "r");
	if (!pf)
	{
		printf("Can't open file 1.txt!\n");
		exit(1);
	}
	
	int a, b;
	fscanf(pf, "%d%d", &a, &b);
	printf("read %d %d\n", a, b);
	
	fclose(pf);
}

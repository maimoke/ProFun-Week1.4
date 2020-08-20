#include<stdio.h>
int main()
{
	int i,n, min = 2000000, max = -2000000, temp;;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &temp);
		if (temp > max) max=temp;
		if (temp < min) min = temp;
	}
	printf("%d\n%d", min, max);
	return 0;
}
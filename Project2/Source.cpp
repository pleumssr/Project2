#include<stdio.h>
int main()
{
	int x, y = 2, i, s[100];
	scanf_s("%d", &x);
	for (i = 0; i < x; i++)
	{
		scanf_s("%d", &s[i]);
	}
	if (y == 2)
	{
		for (i = 0; i < x; i++)
		{
			if (i == 0)
			{
				s[i] = s[i];
			}
			else
			{
				s[i] = s[i] + s[i - 1];

			}
		}
		printf(" <%d> ", s[x - 1]);
	}
	return 0;
}
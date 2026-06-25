#include <stdio.h>


int main(int argc, char **argv)
{
	char s[1001];
	scanf("%s", s);
	
	int cnt[10] = {0};
	
	for (int i = 0; s[i] != '\0'; i++)
	{
		cnt[s[i] - '0']++;
	}
	
	for (int i = 0; i < 10; i++)
	{
		if (cnt[i] > 0)
		{
			printf("%d %d\n", i, cnt[i]);
		}
	}
	return 0;
}


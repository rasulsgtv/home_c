#include <stdio.h>


int main(int argc, char **argv)
{
	char s[1001];
	scanf("%s", s);
	
	int i = 0;
	
	while (s[i] != '.')
	{
		char tek = s[i];
		int count = 1;
		
		while (s[i+1] == tek)
		{
			count++;
			i++;
		}
		printf("%c%d", tek, count);
		i++;
	}
	return 0;
}


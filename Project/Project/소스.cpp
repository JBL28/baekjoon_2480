#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dice1, dice2, dice3;
	scanf("%d%d%d", &dice1, &dice2, &dice3);

	if (dice1 == dice2 && dice2 == dice3)
		printf("%d", 10000 + 1000 * dice1);

	else if (dice1 == dice2 || dice1 == dice3)
		printf("%d", 1000 + 100 * dice1);
	else if (dice2 == dice3)
		printf("%d", 1000 + 100 * dice2);

	else
		if (dice1 > dice2 && dice1 > dice3)
			printf("%d", 100 * dice1);
		else if (dice2 > dice1 && dice2 > dice3)
			printf("%d", 100 * dice2);
		else if (dice3 > dice1 && dice3 > dice2)
			printf("%d", 100 * dice3);
	return 0;
}
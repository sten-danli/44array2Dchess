#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(NULL));
	int chess[10][10] = { 0 };
	int x, y;
	int count = 0;
	while (count<10)
	{
		x = rand() % 5;
		y = rand() % 5;
		if (chess[x][y] == 1)
			continue;
		chess[x][y] = 1;
		count++;
	}
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%2d", chess[i][j]);
		}
		putchar(10);
	}

	int flag = 0;
	int counter = 0;
	for (int i = 0; i < 10; i++)
	{
		counter = 0;
		for (int j = 0; j < 10; j++)
		{
			if (chess[i][j] == 1)
			{
				counter++;
				if (counter == 3)
				{
					flag = 1;
					break;
				}
			}
			else
				counter = 0;
		}
		if (flag == 1)
			break;

		counter = 0;
			for (int j = 0; j < 10; j++)
			{
				if (chess[j][i] == 1)
				{
					counter++;
					if (counter == 3)
					{
						flag = 1;
						break;
					}
				}
				else
					counter = 0;
			}
			if (flag == 1)
				break;
	}
	if (flag == 1)
		printf("God Chess");
	else
		printf("Bad Chess");
		
}

	


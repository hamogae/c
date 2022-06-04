#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// 초기화
	int rnum = 0;
	int count = 0;
	int gnum = 0;
	srand((unsigned)time(0));

	rnum = rand() % 100;

	while (1)
	{
		printf("숫자: ");
		scanf_s("%d", &gnum);
		if (gnum == rnum)
		{
			printf("정답입니다.");
			break;
		}

		if (gnum < rnum)
		{
			printf("잘못된 정답: 큽니다.\n");
		}
		else
		{
			printf("잘못된 정답: 작습니다.\n");
		}
	}
}

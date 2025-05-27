#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10

//////////// 극장 좌석 예약 프로그램 ////////////

int main(void) {
	char ans1;
	int ans2, i;
	int seats[SIZE] = {0}; // 배열 초기화

	while (1) {
		printf("좌석을 예약하시겠습니까?(y 또는 n) : ");
		scanf(" %c", &ans1); // 공백 추가로 입력 버퍼 문제 해결

		if (ans1 == 'n') {
			printf("프로그램을 종료합니다.");
		break;
		}
		else {
			printf("---------------------------------\n");
			for (i = 0; i < SIZE; i++)
				printf("%3d", i+1);
			printf("\n---------------------------------\n");
			for (i = 0; i < SIZE; i++)
				printf("%3d", seats[i]);
			printf("\n\n");

			printf("몇 번째 좌석을 예약하시겠습니까? : ");
			scanf("%d", &ans2);

			// 예약 완료
			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("예약되었습니다.\n");
			}
			else {
				// 예약 불가
				printf("이미 예약된 자리입니다.\n");
			}
		}
	}
	return 0;
}

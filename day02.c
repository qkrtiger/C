#include <stdio.h>

///////////////// 함수 선언 /////////////////
int sum(int x, int y);       // sum 함수 선언

int main(void)               // main 함수 시작
{
	int a = 10, b = 20;
	int result;              // 두 정수를 더한 결과(result)를 저장할 변수

	result = sum(a, b);      // sum 함수 호출
	printf("result : %d\n", result);

	return 0;
}                            // main 함수의 끝

int sum(int x, int y)        // sum 함수 정의 시작
{
	int temp;                // 두 정수의 합을 잠시 저장할 변수

	temp = x + y;            // x와 y의 합을 temp에 보관

	return temp;             // temp의 값을 반환
}


///////////////// max() 함수 호출해서 더 큰 값 찾기 /////////////////
int max(int x, int y);

int main(void) {
	int a, b;
	int res;

	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &a, &b);

	res = max(a, b);
	printf("더 큰 값은 %d입니다.", res);
	return 0;

}
int max(int x, int y) {

	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

///////////////// 매개변수가 없는 함수 /////////////////
int get_num(void);

int main(void) {
	int result;

	result = get_num();
	printf("반환값 : %d\n", result);
	return 0;
}

int get_num(void) {
	int num;

	printf("양수 입력: ");
	scanf("%d", &num);
	while (num < 0) {
		printf("양수를 입력하세요!\n");
		printf("양수 입력 : ");
		scanf("%d", &num);
	}

	return num;
}


///////////////// 반환값이 없는 함수 /////////////////
// 반환값이 없는 함수는 선언과 정의의 반환형에 void를 사용한다.
void print_char(char ch, int count);

int main(void) {
	print_char('@', 5); // 문자와 숫자를 주고 함수 호출
	return 0;
}

void print_char(char ch, int count) { // 매개변수는 있으나 반환형은 없다.
	int i;

	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}
	return;
}


///////////////// 매개변수와 반환값이 모두 없는 함수 /////////////////
void print_line(void); // 함수 선언

int main(void) {
	print_line();
	printf("학번    이름      전공     학점\n");
	print_line();

	return 0;
}

void print_line(void) {
	int i;

	for (i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");
}

///////////////// 재귀호출 함수 /////////////////
void fruit(int count);

int main(void) {
	fruit(1); // 처음 호출하므로 1을 인수로 준다.
	return 0;
}

void fruit(int count) {
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
}

///////////////// 팩토리얼 구하기 /////////////////
int factorial(int n) {
	int result = 1;

	for (int i = 1; i <= n; i++) {
		result *= i; // result = result*i
	}
	return result;
}

int main(void) {
	int n;
	printf("알고 싶은 팩토리얼의 값은? : ");
	scanf("%d", &n);
	printf("%d!의 값은 %d입니다.\n", n, factorial(n));
	return 0;
}

///////////////// 난수 발생 자동차게임 /////////////////
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void disp_car(int car_number, int distance) {
	int i;
	printf("CAR #%d:", car_number);
	for (i = 0; i < distance / 10; i++) {
		printf("*");
	}
	printf("\n");
}

int main(void) {
	int i;
	int car1_dist = 0, car2_dist = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++) {
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		printf("------------------------\n");
		_getch();
	}
	return 0;
}

///////////////// 성적 평균 계산하기 /////////////////
#define STUDENTS 5

int main(void) {
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) {
		printf("%d 번째 학생들의 성적을 입력하시오:",i+1);
		scanf("%d", &scores[i]);
	}
	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];

	average = sum / STUDENTS;
	printf("성적 평균= %d\n", average);

	return 0;
}

///////////////// 배열 초기화 예제 /////////////////
#define SIZE 5

int main(void) {
	int i;
	int scores[SIZE] = {31, 63, 62, 87, 14};

	for (i = 0; i < SIZE; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;
}

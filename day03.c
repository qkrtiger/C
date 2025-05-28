#include <stdio.h>

///////////////////// 포인터 기본 /////////////////////
//int main(void) {
//	int i = 10;
//	char c = 69;
//	float f = 12.3;
//
//	// %p : 포인터의 주소를 출력
//	printf("i의 주소 : %p\n", &i);
//	printf("c의 주소 : %p\n", &c);
//	printf("f의 주소 : %p\n", &f);
//	return 0;
//}

///////////////////// 메모리 주소의 출력 변환 문자 /////////////////////
//int main(void) {
//	int i = 10;
//	double f = 12.3;
//	int* pi = NULL; // 포인터는 아무것도 가리키지 않는 것을 의미
//
//	double* pf = NULL;
//	pi = &i;
//	pf = &f;
//
//	printf("%p %p \n", pi, &i);
//	printf("%p %p \n", pf, &i);
//	return 0;
//}


///////////////////// 포인터 예제 /////////////////////
//int main(void) {
//	int x = 10, y = 20;
//	int* p;
//
//	p = &x;
//	printf("p=%p\n", p);
//	printf("p=%u\n\n", *p);
//	
//	p = &y;
//	printf("p=%p\n", p);
//	printf("p=%u\n\n", *p);
//	return 0;
//}

///////////////////// 포인터 주소 /////////////////////
//int main(void) {
//	int a = 1, * pa = &a;
//	short b = 1, * pb = &b;
//	char c = 1, * pc = &c;
//	double d = 1.0, * pd = &d;
//
//	printf("%p %p %p %p\n", pa, pb, pc, pd);
//
//	pa = pa + 1;
//	pb = pb + 1;
//	pc = pc + 1;
//	pd = pd + 1;
//
//	printf("%p %p %p %p\n", pa, pb, pc, pd);
//
//	return 0;
//}
 
 
///////////////////// 참조에 의한 호출 /////////////////////
//void swap(int* x, int* y);
//
//int main(void) {
//	int a = 100, b = 200;
//	printf("a=%d b=%d\n", a, b);
//
//	swap(&a, &b);
//
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//
//void swap(int *px, int *py) {
//	int tmp;
//
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}


///////////////////// 2개 이상의 결과를 반환 /////////////////////
// 기울기와 y 절편을 계산
//int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept) {
//	if (x1 == x2) {
//		return -1;
//	}
//	else {
//		*slope = (float)(y2 - y1) / (float)(x2 - x1);
//		*yintercept = y1 - *(slope)*x1;
//		return 0;
//	}
//}
//int main(void) {
//	float s, y;
//	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1) {
//		printf("에러\n");
//	}
//	else {
//		printf("기울기는 %f, y절편은 %f\n", s, y);
//		return 0;
//	}
//}


///////////////////// 포인터와 배열의 관계 /////////////////////
//int main(void) {
//	int a[] = { 10, 20, 30, 40, 50 };
//
//	printf("a = %u\n", a);
//
//	printf("a+1 = %u\n", a + 1);
//
//	printf("a = %d\n", *a);
//
//	printf("*(a+1) = %d\n", *(a + 1));
//
//	return 0;
//}


///////////////////// 구조체 /////////////////////
//struct student {
//	int number;
//	char name[10];
//	double grade;
//};
//
//int main(void) {
//	struct student s;
//
//	s.number = 20250528;
//	strcpy(s.name, "홍길동");
//	s.grade = 4.3;
//
//	printf("학번:%d\n", s.number);
//	printf("이름:%s\n", s.name);
//	printf("학점:%.2f\n", s.grade);
//	return 0;
//}


///////////////////// 구조체2 /////////////////////
struct student {
	int id;
	char name[20];
	double grade;
};

int main(void) {
	struct student s1 = { 315, "홍길동", 2.4 },
		s2 = { 316, "이순신", 3.7 },
		s3 = { 317, "세종대왕", 4.4 };

	struct student max;

	max = s1;
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1f\n", max.grade);
	return 0;
};

///////////////////// auto 지역 변수와 static 지역변수 비교 /////////////////////
void auto_func(void); // auto_func 함수 선언
void static_func(void); // static_func 함수 선언

int main(void) {
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) {
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) {
		static_func();
	}

	return 0;
}

void auto_func(void) {
	auto int a = 0; // 지역 변수 선언과 초기화

	a++;
	printf("%d\n", a);
}

void static_func(void) {
	static int a;

	a++;
	printf("%d\n", a);
}

///////////////////////// 출력 결과
/*
일반 지역 변수(auto)를 사용한 함수...
1
1
1
정적 지역 변수(static)를 사용한 함수...
1
2
3
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수 : call by reference(주소를 참조한다.)
//주소를 매개변수로 받는다.
//main함수의 a의 값 변경 가능
void change(int* p) {
	*p = 20; //p가 가리키고 있는 곳의 값을 변경하겠다.
}

void twoChange(int* p1, int* p2) {
	int tem;
	tem = *p1;
	*p1 = *p2;
	*p2 = tem;
}

void sumCal(int* pa, int* psum) {
	*psum= *psum + *pa;
}

int main() {
	/*//함수에 포인터 넘기기
	int a=10;
	change(&a); //a의 주소를 상단의 함수에 넘긴다.

	scanf("%d", &a);
	printf("a : %d\n", a);
	*/

	/*
	int a = 10, b = 20;
	twoChange(&a, &b);
	printf("%d %d\n", a, b);
	*/

	//연습문제
	int a, sum = 0;
	while (1) {
		printf("정수는 ? ");
		scanf("%d", &a);
		if (a == 0) break;
		sumCal(&a, &sum); //sum += a 이기 때문에.
	}
	printf("누적 합계 : %d\n", sum);



	return 0;
}

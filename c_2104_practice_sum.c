#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int sum = 0;

//매개변수로 하나의 정수를 받아서 누적 함수를 만들어서 반환하자.
/*int userSum(int a) {
	static int sum = 0; //전역변수 int sum = 0;를 대체할.
	//static(함수가 최초로 실행됐을 때 실행, 프로그램 종료됐을 때 소멸)
	//선언된 함수 안에서만 접근 가능
	sum = sum + a;
	return sum;
}
*/

//매개변수:없음, 반환값:본 함수를 실행한 횟수
//함수 이름 : countTest
int countTest() {
	static int count=0;
	count++;
	return count;
}


int main() {
	/*
	printf("누적 : %d\n",userSum(10));
	printf("누적 : %d\n",userSum(20));
	*/

	//반복문을 활용하여 countTest 10회 실행한다는 명령은 함수 만들 때 넣기
	for (int count = 0; count < 10; count++) {
		printf("실행 횟수 %d회\n", countTest());
	}











	return 0;
}
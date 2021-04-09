#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int g; //이것은 전역변수
//전역변수의 무분별한 선언은 프로그램의 복잡도와 메모리 사용을 증가시킨다.

void test() {
	/*printf("a : %d\n", a); //지역변수의 특징 : {} 안에서만 사용 가능. 따라서 여기서는 사용 불가*/
	printf("g : %d\n", g); //전역변수의 특징 : 어디서든지 사용 가능
}


int main() {
	//전역변수(프로그램 시작될 때 생성, 프로그램 종료되면 소멸)
	/*지역변수(함수가 시작될 때 생성, 함수가 종료되면 소멸)
			  (반드시 초기화하여 사용해야함)*/
	int a=10; //이것은 지역변수
	printf("a : %d\n", a);
	printf("g : %d\n", g); //전역변수는 초기화하지 않았는데 출력이 됨! ==> 자동 초기화






	return 0;
}

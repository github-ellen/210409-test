#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arrPrint(int argc, char *argv[]) {
	for (int i = 0; i < argc ; i++) {
		printf("%s\n", argv[i]);
	}
}

int main() {
	//2차 문자열 배열의 매개변수
	/*char str[3][7] = { "python", "c", "java" };
	char* p[3] = str;
	//위의 식들을 간단하게 표현하면*/
	/*char* p[3] = { "python", "c", "java" }; // 포인터가 3개라는 의미
	//위의 식은 포인터의 배열*/

	/*char arr[][7] = { "python", "c", "java" };
	//아래 식은 다차원배열의 포인터 : 하나의 값 당 7바이트를 차지한다.
	char(*p)[7] = arr;*/
	
	char *p[3] = { "python", "c", "java" };
	printf("%p %p %p\n", p[0], p[1], p[2]);

	/*//이것을 함수로 처리해보자.
	for (int i = 0; i < 3; i++) {
		printf("%s\n", p[i]);
	}
	*/

	arrPrint(3, p);

	












	return 0;
}
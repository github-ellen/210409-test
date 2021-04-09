#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//문자열의 포인터
	//char str[] = "happy";
	///*str = "angry";//str은 상수이기 때문에 초기화 불가*/
	////무시하고 가리키고 싶을 때는
	//char* p = str;
	//printf("%s\n", p);
	//
	//p = "python"; //p는 변수이기 때문에 가능
	//puts(p); //문자열 전용 함수이기 때문에 %s 사용 안 해도 됨.

	//연습문제
	//하나의 이름을 입력받아 출력
	//포인터 이용
	char name[20];
	char* p = name;
	while (1) {
		printf("당신의 이름은 ? ");
		gets_s(p, sizeof(name)); //사용자 입력창
		if (name[0] == 'q') {
			printf("종료합니다.\n"); break;
		}
		/*puts(p);
		printf("님! 환영합니다.");*/
		printf("%s님 환영합니다.\n", p);


	}




	return 0;
}
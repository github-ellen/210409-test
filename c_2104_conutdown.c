#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> //Sleep이라는 함수를 사용하기 위하여 추가


//main 함수 내 작성한 카운트다운을 함수로 변환하기
//매개변수:몇 초 동안 진행할 것인가, 반환값:없음
//기능 : 카운트다운 출력
void count(int t) {
	for (int i = t; i > -1; i--) {
		Sleep(1000); //m/s단위로 1000=1초
		printf("%d초\n", i);
	}
}


int main(){
	//카운트다운
	/*printf("카운트다운 시작합니다.\n");
	printf("\n");
	for (int i = 5; i > -1; i--) {
		Sleep(1000); //m/s단위로 1000=1초
		printf("%d초\n", i);
	}
	printf("\n");
	printf("발사\n");
	*/

	printf("카운트다운 시작합니다.\n");
	printf("\n");
	count(5);
	printf("\n");
	printf("발사\n");




	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> //Sleep�̶�� �Լ��� ����ϱ� ���Ͽ� �߰�


//main �Լ� �� �ۼ��� ī��Ʈ�ٿ��� �Լ��� ��ȯ�ϱ�
//�Ű�����:�� �� ���� ������ ���ΰ�, ��ȯ��:����
//��� : ī��Ʈ�ٿ� ���
void count(int t) {
	for (int i = t; i > -1; i--) {
		Sleep(1000); //m/s������ 1000=1��
		printf("%d��\n", i);
	}
}


int main(){
	//ī��Ʈ�ٿ�
	/*printf("ī��Ʈ�ٿ� �����մϴ�.\n");
	printf("\n");
	for (int i = 5; i > -1; i--) {
		Sleep(1000); //m/s������ 1000=1��
		printf("%d��\n", i);
	}
	printf("\n");
	printf("�߻�\n");
	*/

	printf("ī��Ʈ�ٿ� �����մϴ�.\n");
	printf("\n");
	count(5);
	printf("\n");
	printf("�߻�\n");




	return 0;
}

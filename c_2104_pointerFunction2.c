#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arrPrint(int argc, char *argv[]) {
	for (int i = 0; i < argc ; i++) {
		printf("%s\n", argv[i]);
	}
}

int main() {
	//2�� ���ڿ� �迭�� �Ű�����
	/*char str[3][7] = { "python", "c", "java" };
	char* p[3] = str;
	//���� �ĵ��� �����ϰ� ǥ���ϸ�*/
	/*char* p[3] = { "python", "c", "java" }; // �����Ͱ� 3����� �ǹ�
	//���� ���� �������� �迭*/

	/*char arr[][7] = { "python", "c", "java" };
	//�Ʒ� ���� �������迭�� ������ : �ϳ��� �� �� 7����Ʈ�� �����Ѵ�.
	char(*p)[7] = arr;*/
	
	char *p[3] = { "python", "c", "java" };
	printf("%p %p %p\n", p[0], p[1], p[2]);

	/*//�̰��� �Լ��� ó���غ���.
	for (int i = 0; i < 3; i++) {
		printf("%s\n", p[i]);
	}
	*/

	arrPrint(3, p);

	












	return 0;
}
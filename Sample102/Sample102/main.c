#include <stdio.h>

/*
  �ϐ����g�����T���v��
  ���܂��܂Ȓl�̑���Ɖ��Z
*/
int main(int argc, char** argv) {
	// �ϐ��̐錾
	int a, b;
	// �ϐ��ւ̒l�̑��
	a = 5;
	b = 2;
	// a, b�̊e�퉉�Z�Ƃ��̌��ʂ̕\��
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	return 0;
}
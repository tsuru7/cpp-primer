#include <stdio.h>

int main(int argc, char** argv) {
	// ���̉��x�i���̕�����F�X�ς��Ă݂�
	double water_temp = -101.0;
	printf("���̉��x:%lf\n", water_temp);
	// ���x�ɂ���Ԃ�\��
	if (water_temp > 100.0) {
		printf("�C��\n");
	}
	else if (water_temp > 0) {
		printf("�t��\n");
	}
	else
	{
		printf("�ő�\n");
	}
	return 0;
}
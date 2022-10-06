#include <stdio.h>

int main(int argc, char** argv) {
	// 水の温度（この部分を色々変えてみる
	double water_temp = -101.0;
	printf("水の温度:%lf\n", water_temp);
	// 温度により状態を表示
	if (water_temp > 100.0) {
		printf("気体\n");
	}
	else if (water_temp > 0) {
		printf("液体\n");
	}
	else
	{
		printf("固体\n");
	}
	return 0;
}
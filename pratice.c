#include<stdio.h>
void main() {
	int i = 1;	//定义鸡蛋初始化数量
	while (1) {
		if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4) {	//判断语句
			break;
		}
		else {
			i++;		
			continue;
		}
	}
	printf("应赔偿%f元", i * 0.4);
}
#include<stdio.h>
void main() {
	int i = 1;	//���弦����ʼ������
	while (1) {
		if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4) {	//�ж����
			break;
		}
		else {
			i++;		
			continue;
		}
	}
	printf("Ӧ�⳥%fԪ", i * 0.4);
}
#include <iostream>
using namespace std;

int main() {
	int i, j, a[200], N =88;
	//��l�ư}�C���e
	memset(a, 0, sizeof(a));
	a[0] = 1;
	for (i = 1; i <= N; i++) 
	{  //i �q 1 ~ 200 �N�� 1x2x3...x200
								//�q�̧C��ƶ}�l�p��s�����G
		for (j = 0; j < sizeof(a) / sizeof(a[0]); j++)
		{
			a[j] *= i;
		}
		//�B�z�Ʀr�i��
		for (j = 0; j < sizeof(a) / sizeof(a[0]) - 1; j++)
		{
			a[j + 1] += a[j] / 10;
			a[j] %= 10;
		}
	}
	//�ǳƦC�L�X���G�A�u�L�Xarray�����ϥΨ쪺����

	for (i = sizeof(a) / sizeof(a[0]) - 1; i >= 0; i--) 
	{
		if (a[i] != 0) break;
	}

	//�L�X�p�⧹�������G
	for (; i >= 0; i--) 
	{
		printf("%d", a[i]);
		//printf("\n");		
	}


system("pause");
}
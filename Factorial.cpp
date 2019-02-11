#include <iostream>
using namespace std;

int main() {
	int i, j, a[200], N =88;
	//初始化陣列內容
	memset(a, 0, sizeof(a));
	a[0] = 1;
	for (i = 1; i <= N; i++) 
	{  //i 從 1 ~ 200 代表 1x2x3...x200
								//從最低位數開始計算新的結果
		for (j = 0; j < sizeof(a) / sizeof(a[0]); j++)
		{
			a[j] *= i;
		}
		//處理數字進位
		for (j = 0; j < sizeof(a) / sizeof(a[0]) - 1; j++)
		{
			a[j + 1] += a[j] / 10;
			a[j] %= 10;
		}
	}
	//準備列印出結果，只印出array中有使用到的部分

	for (i = sizeof(a) / sizeof(a[0]) - 1; i >= 0; i--) 
	{
		if (a[i] != 0) break;
	}

	//印出計算完成的結果
	for (; i >= 0; i--) 
	{
		printf("%d", a[i]);
		//printf("\n");		
	}


system("pause");
}
//消失的数字
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,7,8,9,10 };//给一个缺了一个字的数组
	int sum = 10;//数组的总个数
	int arr1[10] = { 0 };//给定一个有序的数组
	int tmp = 0;//把缺了数字的数组1异或出来的值存起来
	int tmp1 = 0;//储存有序数组异或出来的值
	for (int i = 0; i < sum; i++)
	{
		tmp ^= arr[i];
	}
	for (int i = 0; i <= sum; i++)
	{
		tmp1 ^= i;
	}
	tmp ^= tmp1;//相互异或得到的就是第二个数组比第一个数组多出来的那个字
	printf("%d", tmp);
	system("pause>0");
	return 0;
}
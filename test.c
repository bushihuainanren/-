//��ʧ������
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,7,8,9,10 };//��һ��ȱ��һ���ֵ�����
	int sum = 10;//������ܸ���
	int arr1[10] = { 0 };//����һ�����������
	int tmp = 0;//��ȱ�����ֵ�����1��������ֵ������
	int tmp1 = 0;//��������������������ֵ
	for (int i = 0; i < sum; i++)
	{
		tmp ^= arr[i];
	}
	for (int i = 0; i <= sum; i++)
	{
		tmp1 ^= i;
	}
	tmp ^= tmp1;//�໥���õ��ľ��ǵڶ�������ȵ�һ�������������Ǹ���
	printf("%d", tmp);
	system("pause>0");
	return 0;
}
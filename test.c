//�ж�һ�������Ƿ��ǻ���������������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������
//
//ʾ�� 1:
//
//���� : 121
//��� : true
//	 ʾ�� 2 :
//
// ���� : -121
//  ��� : false
//   ���� : �������Ҷ�, Ϊ - 121 �� ���������, Ϊ 121 - �����������һ����������
//		ʾ�� 3 :
//
//	���� : 10
//	 ��� : false
//	  ���� : ���������, Ϊ 01 �����������һ����������
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPalindrome(int x) {
	int a = 0;
	if (x<0||(x != 0 && x % 10 == 0))
	{
		return false;
	}
	while (x>a)
	{
		a = a * 10 + x % 10;
		x /= 10;
	}
	return (x == a || (x == a / 10));


}
int main()
{
	int x = 0;
	scanf("%d", &x);
	bool a = isPalindrome(x);
	printf("%d ", a);
	system("pause");
	return 0;
}



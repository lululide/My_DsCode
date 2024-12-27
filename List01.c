/*����һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target,
дһ���������� nums �е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��*/

#include <stdio.h>
#define maxsise 50

typedef struct {
	int data[maxsise];
	int length;
}Sqlist;

void print(Sqlist L) {
	for (int i = 0; i <= L.length - 1; i++) {
		printf("%d ", L.data[i]);
	}
	printf("\n");
}

int binsearch(Sqlist L,int key) {
	int low = 0, high = L.length-1, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (L.data[mid] < key)
			low = mid + 1;
		else if (L.data[mid] > key)
			high = mid - 1;
		else
			return mid;
	}
	return -1;
}

int main() {
	Sqlist L = { { 2,4,5,7,8,20 } ,6};
	print(L);
	int index = binsearch(L, 5);
	printf("Ŀ��ֵ������Ϊ��%d", index);
	return 0;
}
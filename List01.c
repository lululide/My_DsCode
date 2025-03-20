/*给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target,
写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。*/

// int search(int* nums, int numsSize, int target) {
//     int low = 0,high = numsSize-1,mid;
//     while(low <= high){
//         mid = (low+high)/2;
//         if(nums[mid] == target)
//             return mid;
//         else if(nums[mid]<target)
//             low = mid+1;
//         else high = mid-1;
//     }
//     return -1;
// }

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
	printf("目标值的索引为：%d", index);
	return 0;
}

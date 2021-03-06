#include <stdio.h>
void BubbleSort(int arr[], int n);
void SelSort(int arr[], int n);
void InserSort(int arr[], int n);
int main(void) {
	int arr[5] = { 5,3,2,4,1 };
	int i;
	InserSort(arr, sizeof(arr) / sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
void InserSort(int arr[], int n) {
	int i, j, temp;
	for (i = 1; i < n; i++) {
		temp = arr[i];
		for (j = i-1; j >=0; j--) {
			if (arr[j] > temp) arr[j + 1] = arr[j];
			else break;
		}
		arr[j+1] = temp;
	}
}
void SelSort(int arr[], int n) {
	int temp= arr[0], target=0, idx = 0;
	int i;
	for (i = 1; i < n;) {
		if (temp  > arr[i]) temp = arr[idx=i];
		if (i == n - 1) {
			arr[idx] = arr[target];
			arr[target] = temp;
			i = (idx = ++target) + 1;
			temp = arr[target];
			if (target == n - 1) return;
			continue;
		}
		i++;
	}
}
void BubbleSort(int arr[], int n) {
	int temp;
	int i;
	for (i = 0; i < n-1; ) {
		if (arr[i] > arr[i + 1]) {
			temp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = temp;
		}
		if (i == n - 2) {
			i = 0, n--;
			continue;
		}
		i++;
	}
}
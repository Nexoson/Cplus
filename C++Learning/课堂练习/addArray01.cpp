#include<stdio.h>

int addArray(int array[], int n);

int main() {
	int data[] = { 0,1,2,3,4,5,6,7,8,9 };
	int size = sizeof(data) / sizeof(data[0]);
	printf("½á¹ûÊÇ: %d\n", addArray(data, size));
	return 0;
}

int addArray(int array[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += array[i];
	}
	return sum;

}




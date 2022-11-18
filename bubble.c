#include <stdio.h>
#include <stdlib.h>

void bubble(int A[], unsigned int size);
void swap(int *a, int *b);

int main() {
	unsigned int n = 10;
	int list[] = {2, 8, 3, 0, 3, 9, 2, 1, 5, 6};
	bubble(list, n);
	for (int i = 0; i < n; i++) 
		printf("%d\n", list[i]);
	return 0;
}

void bubble(int A[], unsigned int size) {
	for (int i = 0; i < size - 1; i++) {
		unsigned int min = i;
		for (int j = i+1; j < size; j++) {
			if (A[j] < A[min]) 
				min = j;
		}
		if (min != i) 
			swap(&A[min], &A[i]);
	}
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

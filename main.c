#include <stdio.h>
#include <stdlib.h>
#include "heapSort.h"

int main() {
	int a[11] = {10,42,54,35,12,44,66,98,85,72,64};
	//em caso de não teste apagar comentario em torno
	printf("Vetor: ");
	for (int i = 1; i <= a[0]; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	
	//printf("Sort: ");
	heapsort(a);
	for (int i = 1; i <= a[0]; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
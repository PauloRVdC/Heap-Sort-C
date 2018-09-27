#include <stdio.h>
#include <stdlib.h>
#include "heapSort.h"

static void make_heap (int m,int a[]) { 
	for (int k = 1; k < m; k++) {                   
    	int f = k+1;
    	while (f > 1 && a[f/2] > a[f]) {  
        	int t = a[f/2];
        	a[f/2] = a[f];
        	a[f] = t;         
        	f = f/2;                        
      	}
  }
}

void heapsort (int a[]) {
	int m;
   	make_heap(a[0],a);
   	for (m = a[0]; m >= 2; m--) {
      	int t = a[1];
     	  a[1] = a[m];
      	a[m] = t;
      	make_heap(m-1, a);
        //teste
        for (int i = 1; i <= a[0]; i++) {
         printf("%d ", a[i]);
        }
        printf("\n");
   }
}
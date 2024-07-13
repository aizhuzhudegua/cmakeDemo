#include <stdio.h>
#include "sort.h"

int main()
{
    int array[] = {2,4,6,1,8,9,0};
    int n = sizeof(array)/sizeof(array[0]);
    quickSort(array, 0, n-1);
    for(int i=0;i<sizeof(array)/sizeof(int);i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}


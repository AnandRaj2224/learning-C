/* pseudo code*
the sort works as :
1.it take a index i(starts from 0)
2.then compare it to index j =i+1
3.if i+1 <i (can be > if u want in descending order) it swaps i and i+1 with the use of temp.
4.it keep repeating till i is sorted in the array
5.it restart again ,now for index i+1
6.it reapeats till the array is sorted */

# include <stdio.h>
# include <stdlib.h>

int bubbleSort(int *arr ,int size);

int main () {

    int size;
    scanf("%d",&size);

    int *arr = malloc(size * sizeof(int)); 

    for(int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }

    bubbleSort(arr,size);

    printf("the sorted array:\n");
    for(int i=0; i<size; i++) {
        printf("%d\n",arr[i]);
    }
    free(arr);
    return 0;
}

int bubbleSort(int *arr ,int size) {

    int i,j,temp;

    for(i=0; i<size-1; i++) {

        for(j=i+1; j<size; j++) {

            if(arr[j] < arr[i]) {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
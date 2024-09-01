# include <stdio.h>
# include <stdlib.h>

void insertionSort(int arr[],int n);
int main() {

    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);

    int *arr = calloc(n,sizeof(int));
    printf("enter the array\n");
    for(int i =0; i<n;i++) {
        scanf("%d",&arr[i]);
    }

    insertionSort(arr,n);

    printf("sorted array:\n");
    for(int j =0; j<n;j++) {
        printf("%d\t",arr[j]);
    }
    free(arr);
    return 0;
}

void insertionSort(int arr[],int n) {
    int i,j,hole,value;

    for(i = 1;i<=n-1; i++) {
        value = arr[i];
        hole = i;

        while(hole > 0 && arr[hole-1] > value) {
            arr[hole] = arr[hole-1];
            hole = hole-1;
        }
        arr[hole] = value;
    }
}

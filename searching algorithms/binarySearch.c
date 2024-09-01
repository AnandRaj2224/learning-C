# include <stdio.h>
# include <stdlib.h>

void insertionSort(int arr[],int n);
int binarySearch (int arr[],int n,int x);
int main() {

    int n,x;
    printf("enter the size of the array\n");
    scanf("%d",&n);

    printf("enter the number to search in the array\n");
    scanf("%d",&x);

    int *arr = calloc(n,sizeof(int));
    printf("enter the array\n");
    for(int i =0; i<n;i++) {
        scanf("%d",&arr[i]);
    }

    insertionSort(arr,n);
    int answer = binarySearch(arr,n,x);

    printf("sorted array:\n");
    for(int j =0; j<n;j++) {
        printf("%d\t",arr[j]);
    }
    printf("\n");
    if(answer == -1) {
    printf("the number %d is not in the array",x);
    } else {
    printf("the index of %d is %d",x,answer);
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

int binarySearch (int arr[],int n,int x) {
    int start = 0;
    int end = n-1;
    while(start <= end) {
        int mid = (start + end ) /2;

        if(arr[mid] == x) {
        return mid;
        }
        else if (arr[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}
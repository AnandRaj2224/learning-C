/* pseudo code*
the sort works as :
1.it takes arr[0] as the smallest - iMin; 
2.compare it to the whole array
3.if it finds smaller number changes the iMin to new smallest number
4.this keeps repeating till the iMin is the smallest value in the array
5. then normal swap using temp occures between iMin and arr[0] or whatever index arr[i].*/

# include <stdio.h>
# include <stdlib.h>

int selectionSort(int *arr ,int size);

int main () {

    int size;
    scanf("%d",&size);

    int *arr = malloc(size * sizeof(int)); 

    for(int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }

    selectionSort(arr,size);

    printf("the sorted array:\n");
    for(int i=0; i<size; i++) {
        printf("%d\n",arr[i]);
    }
    free(arr);
    return 0;
}

int selectionSort(int *arr ,int size) {

    int i,j,temp;

    for(i=0; i<size-1; i++) {
        
        int iMin = i;

        for(j=i+1; j<size; j++) {

            if(arr[j] < arr[iMin]) {
                iMin = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[iMin];
        arr[iMin] = temp;
    }
}
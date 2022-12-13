#include<stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)


        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int find_max(int ar[], int n, int k){
    return ar[n+1-k];
}

int find_min(int ar[], int k){
    return ar[k-1];
}
int main(void){
    int n,i,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    bubbleSort(ar, n);
    int max = find_max(ar, n, k);
    int min = find_min(ar, k);
    printf("%dth largest element = %d\n%dth smallest element = %d\n",k,max,k,min);
}

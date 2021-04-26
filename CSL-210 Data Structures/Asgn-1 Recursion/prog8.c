// Assignment-1
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)8
// Count no. of inversions

#include<stdio.h>
int merge(int*, int*, int, int, int);
int mergeSort(int*, int*, int, int);
int main() 
{ 
    int n;
    printf("Enter the no. of elements in array: ");
    scanf("%d", &n);
    int narr[n], temp[n];
    for (int i=0; i<n; i++)
    {
        printf("Element %d : ", i+1);
        scanf(" %i", &narr[i]);
    }
    printf("Total inversions : %d.\n", mergeSort(narr, temp, 0, n-1)); 
    return 0; 
}

int mergeSort(int arr[], int temp[], int l, int r) 
{ 
    int m, inv = 0; 
    if (r > l)
    { 
        m = (r + l) / 2; 
  
        inv += mergeSort(arr, temp, l, m); 
        inv += mergeSort(arr, temp, m + 1, r); 
  
        inv += merge(arr, temp, l, m + 1, r); 
    } 
    return inv; 
}   
int merge(int arr[], int temp[], int left, int mid, int right) 
{ 
    int nL = left, nR = mid, k = left, inv = 0; 

    while ((nL <= mid - 1) && (nR <= right))
    { 
        if (arr[nL] <= arr[nR])
            temp[k++] = arr[nL++]; 

        else { 
            temp[k++] = arr[nR++];
            inv = inv + (mid - nL);
        } 
    } 
  
    while (nL <= mid - 1) 
        temp[k++] = arr[nL++]; 

    while (nR <= right) 
        temp[k++] = arr[nR++]; 
  
    for (nL = left; nL <= right; nL++) 
        arr[nL] = temp[nL]; 
  
    return inv; 
} 
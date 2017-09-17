#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}
int main(){
        int max;
        cin>>max;
        int     n[max];
        int first;
        int pos = 0;
        for(int i = 0 ; i < max; i++){
                cin>>n[i];      
        }       
        /*for(int i = 0; i < max; i++){
                cout<<n[i]<<" ";
        }*/
        first = n[0];
        /*for(double y = 0; y < max; y++){
                for(double x = y+1; x < max; x++){
                        if(n[(int)y] > n[(int)x]){
                                double temp = n[(int)y];
                                n[(int)y] = n[(int)x];
                                n[(int)x] = temp;
                        }
                        if(n[(int)y] == first){
                                pos = y;        
                        }
                }       
        }*/
        
        //sort(n,n+max);
        
        for(int i = 1; i < max; i++){
                if(n[i] < first){
                        pos++;
                }
        }       

        /*for(int i = 0; i < max; i++){
                cout<<n[i]<<" ";
        }*/
        /*int bottom = 0, top = max-1, mid = (top)/2;
        for( int i = mid; n[i] != first; i = mid){
                if(i < first){
                        bottom = i+1;
                }       
                else {
                        top = i-1;
                }
                mid = (bottom + top)/2; 
        }*/
        /*for(int i = 0; i < max; i++){
                if(n[i] == first){
                        pos = i;
                }
        }*/     
        cout<<pos<<endl;
        return 0;
}

// Quick sort 

#include <iostream>
using namespace std;
 
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
   

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);   
   
    for (int j = low; j <= high- 1; j++) 
    { 
        
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 

    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
   
//quicksort algorithm
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        
        int pivot = partition(arr, low, high); 
    
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
} 
   
void displayArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 
   
int main() 
{ 
    int arr[] = {78,02,54,68,90,11,30,75}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<"\nArray before sorting is: "<<endl;
    displayArray(arr,n);
    cout<<endl;

    quickSort(arr, 0, n-1); 
    cout<<"\nArray after sorting is: "<<endl; 
    displayArray(arr,n); 
    return 0; 
}
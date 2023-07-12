// Merge sort 

/*The merge sort technique is based on divide and conquer technique. We divide the while data set into smaller parts and merge them into a larger piece in sorted order.*/


#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) 
{
  int i = l;
  int j = m + 1;
  int k = l;

  //create temp array
  int temp[5];

  while (i <= m && j <= r) 
  {
    if (arr[i] <= arr[j]) 
    {
      temp[k] = arr[i];
      i++;
      k++;
    } 
    else 
    {
      temp[k] = arr[j];
      j++;
      k++;
    }

  }

  // Print remaining elements of left side
  while (i <= m) 
  {
    temp[k] = arr[i];
    i++;
    k++;

  }

  /* print remaining elements of right side  */
  while (j <= r) 
  {
    temp[k] = arr[j];
    j++;
    k++;
  }

  // Copy the temp array to original array 
  for (int p = l; p <= r; p++) 
  {
    arr[p] = temp[p];
  }
}


void mergeSort(int arr[], int l, int r) 
{
  if (l < r) 
  {
    //midpoint
    int m = (l + r) / 2;

    // recursively calling to functions for sorting right and left halves 
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // merge two sorted halves
    merge(arr, l, m, r);
  }
}

int main() 
{
  int myarray[5];
  int arr_size = 5;

  cout << "Enter 5 elements in array: " << endl;
  for (int i = 0; i < 5; i++) 
  {
    cin >> myarray[i];
  }
  cout << "\nArray before Sorting: " << endl;
  for (int i = 0; i < 5; i++) 
  {
    cout << myarray[i] << " ";
  }
  cout << endl;
  mergeSort(myarray, 0, (arr_size - 1)); // mergesort(arr,left,right) called

  cout<<"\n****---------MERGE SORT---------****";
  cout << "\nArray after  Sorting is: " << endl;
  for (int i = 0; i < 5; i++) 
  {
    cout << myarray[i] << " ";
  }

  return 0;
}

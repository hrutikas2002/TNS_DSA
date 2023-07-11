#include<iostream>
using namespace std;

//for swapping the content of a and b
void swapping(int &a, int &b)
 {      
   int temp;
   temp = a;
   a = b;
   b = temp;
}


void display(int *arr, int size)
{
   for(int i = 0; i<size; i++)
      cout << arr[i] << " ";
      cout << endl;
}


void bubbleSort(int *arr, int size) 
{
   for(int i = 0; i<size; i++)
   {
      //flag for detecting any swap is there or not
      int swaps = 0;         
      for(int j = 0; j<size-i-1; j++)
      {
         if(arr[j] > arr[j+1]) 
         {       
            swapping(arr[j], arr[j+1]);
            swaps = 1;    
         }
      }
      if(!swaps)
         break;       
   }
}
int main() 
{
   int n;
   cout << "Enter the number of elements in array: ";
   cin >> n;
   int arr[n];    
   cout << "\nEnter elements in array: " << endl;

   for(int i = 0; i<n; i++) 
   {
      cin >> arr[i];
   }
   
   cout << "\nArray before Sorting: ";
   display(arr, n);

   bubbleSort(arr, n);
    
   cout<<"\nBUBBLE SORT IN PROGRESS...........!!\n\n"; 
   cout << "Array after Sorting: ";
   display(arr, n);
}

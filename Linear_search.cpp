#include <iostream>
using namespace std;

void linear_search(int a[], int n)
 {
  int temp = -1;

  for (int i = 0; i < 5; i++) 
  {
    if (a[i] == n) 
    {
      cout << n <<" is found at position: " << i + 1 << endl;
      temp = 0;
      break;
    }
  }

  if (temp == -1) {
    cout << n << " is not Found" << endl;
  }

}

int main() 
{
  int arr[5];
  cout << "Enter the 5 elements in array!" << endl;
  for (int i = 0; i < 5; i++) 
  {
    cin >> arr[i];
  }
  cout << "Enter an element to search: " << endl;
  int n;
  cin >> n;

  linear_search(arr, n);
  return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int arr[50], size, i, j, k, element, index;
    
    cout<<"Enter the Size for Array: ";
    cin>>size;

    cout<<"Enter the elements in array: \n";
    for(i=0; i<size; i++)
        cin>>arr[i];
    for(i=1; i<size; i++)
    {
        element = arr[i];
        if(element<arr[i-1])
        {
            for(j=0; j<=i; j++)
            {
                if(element<arr[j])
                {
                    index = j;
                    for(k=i; k>j; k--)
                        arr[k] = arr[k-1];
                    break;
                }
            }
        }
        else
            continue;
        arr[index] = element;
    }

    cout<<"............INSERTION SORT IN PROGRESS...........";
    cout<<"\nSorted array using insertion sort is:\n";

    for(i=0; i<size; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}

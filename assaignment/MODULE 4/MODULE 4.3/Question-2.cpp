
// short array using templates
#include <iostream>
using namespace std;

// Function sort array in ascending order 
template <typename h>
void sortArray(h arr[], int n) 
{

    // using loop scanning numbers 
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                
                h temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // using loop  print  sorted numbers
    cout << "Ascending Numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        cout << ", ";
    }
    
}

int main()
 {
    //  using array for get 10 values
    int arr1[10];
    cout<<"Enter numbers :";
    
    // using loop for get 10 different numbers 
    for (int i = 0; i < 10 ; i++)
    {
        cin>>arr1[i];
        
    }
     
    
    sortArray(arr1,10);
    
    return 0;
}

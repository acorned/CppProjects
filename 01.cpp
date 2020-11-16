#include <iostream>
#include <cstdio>

using namespace std;


int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 
void swap(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}

int main() {
    
    int n;
    cout << "Enter size of an array\n";
    cin >> n;
    int nums[n];
    for(int i = 0; i < n; i++) {
        char message[100];
        snprintf(message, sizeof(message), "Enter nums[%d]\n", i + 1);
        cout << message;
        cin >> nums[i];
    }
    quickSort(nums,0,n - 1); 
    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;
void print(int arr[], int n) { // Corrected parameter type
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[],int n){
    for (int  i = 0; i < n-1; i++)
    {
        int minIdx = i;//loop for find min
            for (int  j = i+1; j < n; j++)
            {
                if (arr[j] > arr[minIdx])
                {
                    minIdx = j ;
                }
                
            }
         swap(arr[i],arr[minIdx]);   
    }
      print(arr, n);
}
int main() {
    int arr[5] = {5, 4, 1, 3, 2};
      selectionSort(arr,5);

    return 0; 
}

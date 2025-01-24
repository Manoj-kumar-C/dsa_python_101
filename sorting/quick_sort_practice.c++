#include<iostream>
#include<algorithm>
using namespace std;
int arr[] = {64, 25, 12, 22, 11};  
int n = sizeof(arr) / sizeof(arr[0]);  

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;


    for(int j = low; j < high; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int arr[],int low, int high){
    if(low < high){
        int pi = partition(arr,low,high);

        quickSort(arr, pi+1,high);   // After Partition
        quickSort(arr, low, pi - 1); // Before partition
    }
}

void printArray(int arr[], int size) {  
    for (int i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  

int main()
{
    quickSort(arr,0, n-1 );
    printArray(arr, n);
    return 0;
}
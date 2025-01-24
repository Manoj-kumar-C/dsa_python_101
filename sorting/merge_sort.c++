#include<iostream>
#include<algorithm>
using namespace std;
// important terms --> arr, left, mid, right , ---> important Functions merge, mergeSort, printArray
//create a temp arrays
//copy datas to temp arrs
//merge the temp arrays back to the original array

void merge(int arr[],int left, int mid, int right){
    int n1 = mid = left +1;
    int n2 = right - mid;

    // creating some temp arrs 

    int leftArr[n1],rightArr[n2];

    // Copy data to the temporary arrays 
    for(int i=0; i<n1; i++){
        leftArr[i] = arr[left + i];
    }
    for(int i=0; i<n2; i++){
        rightArr[i] = arr[mid + 1 +i];
    }

    // Merge the temporary arrays back into the original array
    int i = 0;
    int j =0;
    int k = left;

    while(i < n1 && j < n2){
        if(leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        }else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // copy the remaining elements of leftArr[], 
    while(i < n1){
        arr[k] = leftArr[i];
        j++;
    }

    // Copy the remaining elements of rightArr

    while(j < n2){
        arr
    }



}

void mergeSort(int arr[], int left, int right){
    while(left < right){

        // sortig the left side 
        mergeSort(arr,left,mid)
        
        //sorting the right side 
        mergeSort(arr,mid+1, right);
        // merging the two sorted halves 
        merge(arr,left,mid,right);
    }

}

void printArray(){

}
int main(){
    

    return 0;
}
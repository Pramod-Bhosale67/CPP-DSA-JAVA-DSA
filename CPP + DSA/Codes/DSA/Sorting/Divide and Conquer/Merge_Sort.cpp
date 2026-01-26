#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){

    vector <int> temp;

    int first = low;    // first array start's from low to mid 
    int sec = mid + 1;   // sec array start's from mid + 1 to high

    while(first <= mid && sec <= high){

        if (arr[first] <= arr[sec]){
            temp.push_back(arr[first]);
            first++;
        }
        else{
            temp.push_back(arr[sec]);
            sec++;
        }
    }


    // first array elements are left
    while(first <= mid){
        temp.push_back(arr[first]);
        first++;
    }

    // if second array elements are left
    while(sec <= high){
        temp.push_back(arr[sec]);
        sec++;
    }

    // push the elements into orignal array

    for (int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(int arr[], int low, int high){

    // base case
    // if arr contains single elem, we don't need to divide into equal parts
    if (low == high) return;

    // keeping on dividing into two equal parts

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);           // this is the left part
    mergeSort(arr, mid + 1, high);      // this is the right part
    merge(arr, low, mid, high);         // combine the smaller problems solution to get the larger prob solu
}


int main()
{

    int arr[] = {4, 2, 1, 0, 6, 3, 1, 2, 5};
    int n = 9;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}
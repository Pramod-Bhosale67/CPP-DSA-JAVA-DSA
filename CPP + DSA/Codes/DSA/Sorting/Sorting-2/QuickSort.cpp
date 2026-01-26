#include<bits/stdc++.h>
#define ll long long
using namespace std;


int partition (vector <int> &arr, int start, int end){

    //storing the pivot element  & its index
    int pivot = arr[start];
    int indexOfPivotElement = start;

    while(start <= end){
        if (arr[start] <= pivot){
            start++;
        }

        else if (arr[end] > pivot){
            end--;
        }   

        else{
            swap(arr[start], arr[end]);
        }   
    }

    swap(arr[end], arr[indexOfPivotElement]);

    return end;
}

void quickSort (vector <int> &arr, int start, int end){
    //if only one element present
    if (start >= end) return;

    int index = partition(arr, start, end);
    quickSort(arr, start , index - 1);
    quickSort(arr, index + 1, end);

}

int main(){
    
    int n;
    cin >> n;

    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int start = 0, end = n - 1;

    quickSort(arr, start, end);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<< "\n";

}
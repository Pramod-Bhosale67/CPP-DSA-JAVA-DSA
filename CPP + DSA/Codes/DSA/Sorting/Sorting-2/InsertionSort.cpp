#include<bits/stdc++.h>
#define ll long long
using namespace std;


void insertionSort(vector <int> &arr, int n){

    for (int i = 1; i < n; i++){
        int key = arr[i];
        int index = i - 1;

        while(index >= 0 && key <= arr[index]){
            arr[index + 1] = arr[index];
            index--;
        }

        arr[index + 1] = key;
    }
}

int main(){
    
    int n;
    cin >> n;

    vector <int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";


    cout << "\n";


}
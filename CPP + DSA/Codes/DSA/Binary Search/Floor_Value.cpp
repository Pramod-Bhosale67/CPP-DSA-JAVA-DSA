// Problem Link: https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/0

 int findFloor(vector<int>arr, int x) {
       int n = arr.size();
       
       int ans = -1;
       
       int start = 0, end = n - 1;
       while(start <= end){
           
           int mid = (start + end) / 2;
           
           if (arr[mid] <= x){
               ans = mid;
               start = mid + 1;
           }else{
               end = mid - 1;
           }
       }
       
       return ans;
        
    }
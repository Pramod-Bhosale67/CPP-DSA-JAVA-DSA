int upperBound(int[] arr, int target) {
        int n = arr.length;
       
       int ans = n;
       
       int start = 0, end = n - 1;
       while(start <= end){
           
           int mid = (start + end) / 2;
           
           if (arr[mid] > target){
               ans = mid;
               end = mid - 1;
           }else{
               start = mid + 1;
           }
       }
       
       return ans;
        
    }
https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

 private int findTheFirstPositionOfTarget(int[]arr, int target, int n){
        int start = 0, end = n - 1;
        int ans = -1;

        while(start <= end){
            // find the mid
            int mid = (start + end) / 2;

         // to get the last occ. go to the right
        // x1 x2 x3 x4 x5 x6
        // if ur at x3, to get x1, need to go left side
            if (arr[mid] == target){
                ans = mid;
                end = mid - 1;
            }

            else if (arr[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        return ans;
    }

     private int findTheLastPositionOfTarget(int[]arr, int target, int n){
        int start = 0, end = n - 1;
        int ans = -1;

        while(start <= end){
            // find the mid
            int mid = (start + end) / 2;

        // to get the last occ. go to the right
        // x1 x2 x3 x4 x5 x6
        // if ur at x3, to get x6, need to go right side
            if (arr[mid] == target){
                ans = mid;
               start = mid + 1;
            }

            else if (arr[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        return ans;
    }
    int countFreq(int[] arr, int target) {
       int n = arr.length;
       
       int firstPosition = -1, lastPosition = -1;
       
       firstPosition = findTheFirstPositionOfTarget(arr, target, n);
       
       if (firstPosition != -1)
            lastPosition = findTheLastPositionOfTarget(arr, target, n);
            
        if (firstPosition == -1) return 0;
        
        return lastPosition - firstPosition + 1;
        
    }
https://leetcode.com/problems/search-in-rotated-sorted-array/description/

  int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n - 1;

        while(start <= end){
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) return mid;

            //left part sorted
            if (nums[start] <= nums[mid]){
                // check does that element lies in sorted part
                if (nums[start] <= target && target <= nums[mid]){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }

            // right part is sorted
            else{
                // check does that element lies in sorted part
                if (nums[mid] <= target && target <= nums[end]){
                    start = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
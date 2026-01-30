https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

private:
    int findTheFirstPositionOfTarget(vector <int> &arr, int target, int n){
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

     int findTheLastPositionOfTarget(vector <int> &arr, int target, int n){
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
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int firstPosition = -1, lastPosition = -1;
        firstPosition = findTheFirstPositionOfTarget(nums, target, n);

        if (firstPosition != -1)
            lastPosition = findTheLastPositionOfTarget(nums, target, n);
        
        return {firstPosition, lastPosition};
    }
//time : 0(n) and space is o(1)
//2pointer

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int low = 0;
        int mid  = 0;
        int  high = n-1;
        
        
        while(mid <= high) {
            
            if(nums[mid] == 2) {
                swap(nums[high], nums[mid]);
                high--;
            } else if(nums[mid] == 0) {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            } else {
                mid++;
            }
        }
    }
};
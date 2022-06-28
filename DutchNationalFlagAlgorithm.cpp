/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, 
with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.*/

/*Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Input: nums = [2,0,1]
Output: [0,1,2]*/


void sortColors(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int mid=0;
            while(mid<=h)
        {
            switch(nums[mid]){
                case 0:
                    swap(nums[l++],nums[mid++]);break;
                case 1:
                      mid++;break;
                case 2:
                      swap(nums[mid],nums[h--]);break;

            }
}
        /*sort(nums.begin(),nums.end());*/
    }

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        int count=1;
        for(int i=1; i<k; i++){
            if(nums[i]!=nums[i-1]){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=0;
        for(i=0;i<nums.size();i++){
            for( j=i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                    nums.clear();
                    nums.push_back(i);
                    nums.push_back(j);
                }
            }
        }
        return nums;
    }
};
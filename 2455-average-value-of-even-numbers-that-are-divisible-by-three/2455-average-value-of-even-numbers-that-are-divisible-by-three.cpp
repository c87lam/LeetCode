class Solution {
public:
    int averageValue(vector<int>& nums) {
        int average=0;
        int index=0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]%2==0 && nums[i]%3==0){
                average += nums[i];
                index++;
            }
        }
        if (index >0){
            return average/index;
        }
        return 0;
    }
};
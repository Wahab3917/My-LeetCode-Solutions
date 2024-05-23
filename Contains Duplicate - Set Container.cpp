class Solution {

    public:

        bool containsDuplicate(vector<int>& nums) {
            
            set<int> tempSet;
            
            for (int i=0; i<nums.size(); i++) {
                tempSet.insert(nums[i]);
            }

            return nums.size() != tempSet.size();
        
        }

};
class Solution {

    public:
    
        vector<int> twoSum(vector<int>& nums, int target) {
        
            unordered_map<int, int> umap;

            for (int i=0; i<nums.size(); i++) {

                int reqVal = target - nums[i];

                if (umap.find(reqVal) != umap.end()) {
                    return {umap[reqVal], i};
                } else {
                    umap[nums[i]] = i;
                }

            }

            return {};

        }
        
};
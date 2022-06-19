class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int cur = target-nums[i];
            if(map.count(cur)>0){
                return {map[cur],i};
            }
            map[nums[i]]=i;
            
        }

        return {-1,-1};
    }
};
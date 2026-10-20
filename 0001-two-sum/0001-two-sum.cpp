class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Map to store value and its corresponding index
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if the complement is already in the map
            if (numMap.find(complement) != numMap.end()) {
                // Return the index of the complement and the current index
                return {numMap[complement], i};
            }
            
            // If not found, add the current number and its index to the map
            numMap[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (guaranteed not to hit based on constraints)
        return {};
    }
};

// Solution for https://leetcode.com/problems/two-sum/

/* 
Attempt 1
Runtime: 1256 ms, faster than 5.01% of C++ online submissions for Two Sum.
Memory Usage: 10.3 MB, less than 71.29% of C++ online submissions for Two Sum.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> temp;
        for( int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(temp.size() == 2) break;
                if(nums.at(i) + nums.at(j) == target) {
                    temp.push_back(i);
                    temp.push_back(j);
                }
            }
        }
        return temp;
    }
};

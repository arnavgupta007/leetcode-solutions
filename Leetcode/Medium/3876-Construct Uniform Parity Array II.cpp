// Problem: 3876. Construct Uniform Parity Array II (Medium)
// Link: https://leetcode.com/problems/construct-uniform-parity-array-ii

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int minvalue= *min_element(nums1.begin(),nums1.end());

        if(minvalue%2==1){
            return true;
        }

        for(int x:nums1){
            if(x%2==1)return false;
        }
         return true;
        
    }
};
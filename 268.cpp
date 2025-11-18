class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int curr = 0;
        for(int n : nums){
            curr ^= n;
        }
        int ranged = 0;
        for(int i=0;i<nums.size()+1;i++){
            ranged ^= i;
        }
        return ranged ^ curr;
    }
};

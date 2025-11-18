class Solution {
public:
    void sortColors(vector<int>& nums){
        int reds = 0;
        int whites = 0;
        int blues = 0;
        for(int num : nums){
            switch(num){
                case 0:
                    reds++;
                    break;
                case 1:
                    whites++;
                    break;
                case 2:
                    blues++;
                    break;
            };
        }
        for(int i=0;i<nums.size();i++){
            if(reds != 0){
                nums[i] = 0;
                reds--;
            } else if(whites != 0){
                nums[i] = 1;
                whites--;
            } else if(blues != 0){
                nums[i] = 2;
                blues--;
            }
        }
    }
};

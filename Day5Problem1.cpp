class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p1=1;
        int p2=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                p2*=nums[i];
            }else{
                count++;
            }
            p1*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(count==1){
                if(nums[i]==0){
                    nums[i]=p2;
                }
                else{
                    nums[i]=p1/nums[i];
                }
            }else{
                if(nums[i]==0){
                nums[i]=p1;
                }else{
                    nums[i]=p1/nums[i];
                }
            }
        }
        return nums;
    }
};
// Time complexity O(n)
//space complexity O(1)
class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        int miss=n;
        for(int i=0;i<n;i++)
        {
            if(i!=nums[i]){
                miss=i;
                break;
            }
        }
        return miss;
        
        
    }
}
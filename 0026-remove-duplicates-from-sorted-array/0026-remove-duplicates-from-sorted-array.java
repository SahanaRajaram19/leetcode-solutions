class Solution {
    public int removeDuplicates(int[] nums) {
        int key=1;
        for(int i=1;i<nums.length;i++){
            if(nums[i] > nums[i-1]){
                nums[key]=nums[i];
                key++;
            }
        }
            return key;
           
    }
}
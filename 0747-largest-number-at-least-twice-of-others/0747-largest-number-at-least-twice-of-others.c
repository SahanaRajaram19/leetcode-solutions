int dominantIndex(int* nums, int n) {
    int max1=0,max2=0,index=-1;
    for(int i=0;i<n;i++){
        if(nums[i]>max1){
            max2=max1;
            max1=nums[i];
            index=i;
        }
        else if(nums[i]>max2 && nums[i]!=max1){
            max2=nums[i];
        }
    }
    return (max2*2)<=max1?index:-1;
    
}
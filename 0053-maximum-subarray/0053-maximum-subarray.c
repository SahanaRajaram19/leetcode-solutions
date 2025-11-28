int maxSubArray(int* nums, int n) {
    int ms=nums[0];
    int cs=0;
    for(int i=0;i<n;i++){
        if(cs<0){
            cs=0;
        }
        cs+=nums[i];
        if(cs>ms){
            ms=cs;
        }
    }
    return ms;
}
    
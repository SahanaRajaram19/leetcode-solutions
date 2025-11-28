int numIdenticalPairs(int* nums, int n) {
    int count[101]={0};
    for(int i=0;i<n;i++){
        count[nums[i]]++;
    }
    int pairSum=0;
    for(int i=0;i<101;i++){
        int a=count[i];
        pairSum+=(a*(a-1))/2;
    }
    return pairSum;   
}
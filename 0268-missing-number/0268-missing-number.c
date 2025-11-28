int missingNumber(int* nums, int n) {
    int count=0;
    int sum=0;
    for(int i=0;i<=n;i++){
        count=count+i;
    }
  for(int j=0;j<n;j++){
    sum=sum+nums[j];
  }
    return count-sum;
}

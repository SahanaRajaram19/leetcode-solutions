int findKth(int A[],int m,int B[],int n,int k){
    if(m <= 0)return B[k];
    if(n <= 0)return A[k];
    if(B[n/2]>= A[m/2]){
        if((m/2 + n/2)>=k)
        return findKth(A,m,B,n/2,k);
        else return findKth(A + m/2 +1,m-(m/2 +1),B,n,k - (m/2 +1));

    }
    else{
        if((m/2 +n/2)>= k)
        return findKth(A,m/2,B,n,k);
        else
        return findKth(A,m,B+(n/2+1),n - (n/2 +1),k -(n/2 + 1));

    }
}
double findMedianSortedArrays(int A[],int m,int B[],int n){
    int len= m+n;
    if((len % 2)==1){
        return findKth(A,m,B,n,len/2);
    }
    else{
        double a = (double)findKth(A,m,B,n,(len-1)/2);
        double b=(double)findKth(A,m,B,n,len/2);
        return (a+b)/2.0;
           }
    
}
class Solution {
    public void reverseString(char[] c) {
        int start=0;
        int end=c.length-1;
        while(start<end){
            char temp=c[start];
            c[start]=c[end];
            c[end]=temp;
            start++;
            end--;

        }
        System.out.println(Arrays.toString(c));
    }
}
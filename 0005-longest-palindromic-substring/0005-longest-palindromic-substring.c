char* longestPalindrome(char* s) {
    int sz;
    int i,j,k,l;
    int where= 0,len=0;
    if(!s || !*s) return s;
    sz= strlen(s);
    for(i=0,j=0,k=0; len<(sz - k)* 2; i=k,j=k){
        while(j+1 <sz && s[j] == s[j+1]){
            j++;

        }
        k=j+1;
        while(i > 0 && j + 1 < sz && s[i - 1 ] == s[j+1]){
            i--;
            j++;
        }
        l=j -i + 1;
        if(len <l){
            len=l;
            where =i;
        }

    }
    s= s + where;
    s[len]=0;
    return s;
    }
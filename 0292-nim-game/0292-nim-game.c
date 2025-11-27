bool canWinNim(int n) {
    if(n<=3)
    {
        return n;
    }
    else if(n%4!=0)
    {
        return n;
    }
    else{
        return 0;
    }
}











int numWaterBottles(int numBottles, int numExchange) {
    int c=numBottles;
    while(numBottles>=numExchange){
        int r=numBottles/numExchange;
        c=c+r;
        int d=numBottles%numExchange;
        numBottles=r+d;

    }
    return c;
    
}
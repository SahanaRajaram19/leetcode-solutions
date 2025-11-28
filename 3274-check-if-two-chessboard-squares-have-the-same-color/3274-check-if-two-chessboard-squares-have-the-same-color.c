bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    int x=coordinate1[0];
    int y=coordinate1[1];
    int a=coordinate2[0];
    int b=coordinate2[1];
    return (x+y)%2==(a+b)%2;

}

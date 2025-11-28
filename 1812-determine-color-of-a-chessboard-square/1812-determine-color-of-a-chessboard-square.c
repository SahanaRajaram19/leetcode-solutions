bool squareIsWhite(char* coordinates) {
    int x=coordinates[0]%2;
    int y=coordinates[1]%2;
    return x!=y;
    
}
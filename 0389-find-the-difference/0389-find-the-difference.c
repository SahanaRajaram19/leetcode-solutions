char findTheDifference(char* s, char* t) {
 char ch=0;
 for(int i=0;i<strlen(s);i++){
    ch=ch^s[i];
 }
 for(int i=0;i<strlen(t);i++){
    ch=ch^t[i];
 }
 return ch;
}
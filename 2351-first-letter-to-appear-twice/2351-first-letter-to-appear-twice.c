char repeatedCharacter(char* s) {
        bool duplicate[26]={false};
    {
        for(int i=0;i<strlen(s);i++){
            if(duplicate[s[i]-'a']==true){
                return s[i];
            }
            duplicate[s[i]-'a']=true;
        }
    return 'a';
    
}
}
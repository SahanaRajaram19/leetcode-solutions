int lengthOfLongestSubstring(char* s) {
    int i = 0, j = 0;
    int hashSet[256] = {0};
    int maxLength = 0;
    while (s[j] != '\0') {
        if (hashSet[s[j]] == 0) {
            hashSet[s[j]] = 1;
            maxLength = (j - i + 1 > maxLength) ? (j - i + 1) : maxLength;
            j++;
        } else {
            hashSet[s[i]] = 0;
            i++;
        }
    }
    return maxLength;
}
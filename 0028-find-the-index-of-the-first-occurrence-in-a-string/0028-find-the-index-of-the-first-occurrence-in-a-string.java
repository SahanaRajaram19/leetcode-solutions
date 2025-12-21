class Solution {
    public int strStr(String haystack, String needle) {
      //  return haystack.indexOf(needle);


        for (int i = 0; i < haystack.length(); i++) {

            // check first character match
            if (haystack.charAt(i) == needle.charAt(0)) {

                int j = 0;   // pointer for needle
                int k = i;   // pointer for haystack

                while (j < needle.length() &&
                       k < haystack.length() &&
                       needle.charAt(j) == haystack.charAt(k)) {

                    j++;
                    k++;

                    if (j == needle.length()) {
                        return i;   // full needle matched
                    }
                }
            }
        }

        return -1;
    }
}

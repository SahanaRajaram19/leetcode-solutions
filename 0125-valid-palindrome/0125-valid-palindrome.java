class Solution {
    public boolean isPalindrome(String s) {
      
       s=s.toLowerCase();
      s=s.replaceAll("[^a-z0-9]","");
        String reverse="";
        for(int i=s.length()-1;i>=0;i--){
            char c=s.charAt(i);
            reverse=reverse+c;
        }
    if(s.equals(reverse))
        return true;
    return false;
    }
}

/*replace()

Removes exact character/string.

replace(" ", "")

➡️ removes spaces only

replaceAll()

Uses regex patterns.

replaceAll("\\s+", "")

➡️ removes all whitespace:

spaces
tabs
new lines
*/
/*[^a-z0-9]
a-z

all lowercase letters

0-9

all numbers

^

means NOT

So:

[^a-z0-9]

means:

➡️ remove everything that is NOT a letter or number
*/
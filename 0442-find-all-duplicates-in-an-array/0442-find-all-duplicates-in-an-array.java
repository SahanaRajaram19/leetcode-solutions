import java.util.*;

class Solution {
    public List<Integer> findDuplicates(int[] nums) {

        HashSet<Integer> withoutduplicate = new HashSet<>();
        List<Integer> duplicate = new ArrayList<>();

        for(int i = 0; i < nums.length; i++) {
            if(withoutduplicate.contains(nums[i])) {
                duplicate.add(nums[i]);
            } else {
                withoutduplicate.add(nums[i]);
            }
        }

        return duplicate;
    }
}
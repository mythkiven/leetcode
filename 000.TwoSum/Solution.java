import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class Solution {
    public static void main(String[] args) {
        int[] nums = {-1,6,3,2,3};
        int[] returnSize = twoSum(nums, 6);
        System.out.print(String.valueOf(returnSize[0])+':'+String.valueOf(returnSize[1]));
    }
    // 相同的方法，python用时，java提交用时2ms！！当然代价也高
    public static int[] twoSum(int[] nums, int target) {
        int[] indexes = new int[]{0,1};
        HashMap<Integer,Integer> hm = new HashMap<Integer,Integer>();
        for(int i = 0; i<nums.length; i++) {
            if(hm.containsKey(nums[i])) {
                indexes[1] = i;
                indexes[0] = hm.get(nums[i]);
                return indexes;
            }else{
                hm.put(target - nums[i],i);
            }
        }
        return indexes;
    }
}
import java.text.CollationElementIterator;
import java.util.*;
import static java.lang.System.out;

public class Q20HelpfulMaths {

    static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        String sum = in.nextLine();
        char nums[] = sum.toCharArray();
        ArrayList<Integer> numbers = new ArrayList<Integer>();
        String num = "";
        for (int i = 0; i < nums.length; ++i) {
            if (nums[i] != '+')
                num += nums[i];
            if(nums[i] == '+' || i == nums.length - 1){
                numbers.add(Integer.parseInt((num)));
                num = "";
            }
        }
        Collections.sort(numbers);
        for (int i = 0; i < numbers.size() - 1; ++i)
            out.print(numbers.get(i) + "+");
        out.print(numbers.get(numbers.size() - 1));
    }
}
package guru.algorithms.datastructures.stacks.stacks_inbuilt;

import java.util.Scanner;
import java.util.Stack;

public class BalancedBraces {
    private static final Scanner sc=new Scanner(System.in);
    public static void main(String[] args) {
        String parenthesesString = sc.nextLine();
        System.out.println(checkBalancedParentheses(parenthesesString));
    }
    private static String checkBalancedParentheses(String expr)
    {
        //Check if stack is already empty
        if (expr.isEmpty())
            return "Balanced";
        Stack<Character> stack = new Stack<>();
        for (int i = 0; i < expr.length(); i++)
        {
            char current = expr.charAt(i);
            //Checking if any open parentheses have occurred, if so we are pushing into the stack
            if (current == '{' || current == '(' || current == '[')
            {
                stack.push(current);
            }
            if (current == '}' || current == ')' || current == ']')
            {
                //Now for closing parentheses, there should be a set of opening parentheses, hence if stack is empty it is imbalanced
                if (stack.isEmpty())
                    return "Not Balanced";
                char last = stack.peek();
                //We are using peek to see the top element of the stack and compare it with the opening parentheses, if it matches, then we are popping
                if (current == '}' && last == '{' || current == ')' && last == '(' || current == ']' && last == '[')
                    stack.pop();
                else
                    return "Not Balanced";
            }
        }
        return stack.isEmpty()?"Balanced":"Not Balanced";
    }
}
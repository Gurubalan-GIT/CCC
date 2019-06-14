package guru.algorithms.datastructures.stacks.stacks_inbuilt;

import java.util.Scanner;
import java.util.Stack;

class BalancedParenthesesAlternative {
    private static boolean is_balanced(String s) {
        Stack<Character> bracketsStack = new Stack<>();
        char[] text = s.toCharArray();
        for (char x : text) {
            switch (x) {
                case '{':
                case '<':
                case '(':
                case '[':
                    bracketsStack.push(x);
                    break;
                case '}':
                    if (bracketsStack.peek() == '{') {
                        bracketsStack.pop();
                        break;
                    } else {
                        return false;
                    }
                case '>':
                    if (bracketsStack.peek() == '<') {
                        bracketsStack.pop();
                        break;
                    } else {
                        return false;
                    }
                case ')':
                    if (bracketsStack.peek() == '(') {
                        bracketsStack.pop();
                        break;
                    } else {
                        return false;
                    }
                case ']':
                    if (bracketsStack.peek() == '[') {
                        bracketsStack.pop();
                        break;
                    } else {
                        return false;
                    }
            }
        }
        return bracketsStack.empty();
    }
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Enter sequence of brackets: ");
            String s = in.nextLine();
            if (is_balanced(s)) {
                System.out.println(s + " is balanced");
            } else {
                System.out.println(s + " is not balanced");
            }
        }
    }
}
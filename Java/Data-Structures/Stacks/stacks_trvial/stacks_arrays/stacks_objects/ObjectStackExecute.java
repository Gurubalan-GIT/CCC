package guru.algorithms.datastructures.stacks.stacks_trvial.stacks_arrays.stacks_objects;

public class ObjectStackExecute {
    public static void main(String[] args){
        int size;
        System.out.println("Enter number of entries:");
        size=ObjectStack.scanner.nextInt();
        ObjectStack objectStack=new ObjectStack(size);
        System.out.println("Enter the name and register number-");
        objectStack.pushAll();
        System.out.println("Printing the objects-");
        objectStack.show();
        System.out.println("Popping them-");
        objectStack.popAll();
    }
}

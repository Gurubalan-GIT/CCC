package guru.algorithms.datastructures.stacks.stacks_trvial.stacks_arrays.stacks_objects;

import java.util.Scanner;

class ObjectStack {
    private ObjectStackModel[] stack;
    private int size;
    private int top;
    static Scanner scanner=new Scanner(System.in);
    //Default constructor
    ObjectStack() {
        top=-1;
        size=100;
        stack=new ObjectStackModel[size];
    }
    //Parametrized constructor with getter
    ObjectStack(int size){
        top=-1;
        this.size=size;
        stack=new ObjectStackModel[size];
    }

    boolean push(ObjectStackModel data){
        if(!isFull()){
            top++;
            stack[top]=data;
            return true;
        }else{
            return false;
        }
    }

    void pushAll(){
        if(!isFull()){
            while(size!=0) {
                String name=scanner.next();
                int registerNumber=scanner.nextInt();
                ObjectStackModel objectStackModel = new ObjectStackModel(name,registerNumber);
                push(objectStackModel);
                size--;
            }
        }
    }

    ObjectStackModel pop(){
        return stack[top--];
    }

    void popAll() {
        while(!isEmpty()){
            System.out.println(pop().toResult());
        }
    }

    boolean isFull(){
        return (top==stack.length-1);
    }

    boolean isEmpty(){
        return (top==-1);
    }

    void show() {
        for(ObjectStackModel i:stack){
            System.out.println(i.toResult());
        }
    }
}

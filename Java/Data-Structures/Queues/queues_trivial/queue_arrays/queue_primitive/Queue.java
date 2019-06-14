package guru.algorithms.datastructures.queues.queues_trivial.queue_arrays.queue_primitive;

import java.util.Scanner;

public class Queue {
    private int[] queue;
    private int total;
    private int rear;
    private int front;
    private int size;
    static Scanner scanner=new Scanner(System.in);

    public Queue() {
        total=0;
        rear=0;
        front=0;
        size=100;
        queue=new int[size];
    }

    public Queue(int size) {
        total=0;
        rear=0;
        front=0;
        this.size = size;
        queue=new int[this.size];
    }

    @SuppressWarnings("Duplicates")
    boolean enqueue(int element){
        if(!isFull()){
            total++;
            queue[rear]=element;
            rear++;
            return true;
        }else{
            return false;
        }
    }

    void enqueueAll(){
       while(size!=0){
           int element=scanner.nextInt();
           enqueue(element);
           size--;
       }
    }

    int dequeue(){
        int item=queue[front];
        total--;
        front++;
        return item;
    }

    void dequeueAll(){
        while(total!=0){
            System.out.println(dequeue());
        }
    }

    boolean isFull(){
        return (size==total);
    }

    boolean isEmpty(){
        return (total==0);
    }

    void show(){
        if(!isEmpty()) {
            for (int i : queue) {
                System.out.println(i);
            }
        }
    }

}

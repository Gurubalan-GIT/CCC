package guru.algorithms.datastructures.queues.queues_trivial.queue_arrays.queue_object;

import java.util.Scanner;

public class ObjectQueue {
    private ObjectQueueModel[] queue;
    private int total;
    private int rear;
    private int front;
    private int size;
    static Scanner scanner=new Scanner(System.in);

    public ObjectQueue() {
        total=0;
        rear=0;
        front=0;
        size=100;
        queue=new ObjectQueueModel[size];
    }

    public ObjectQueue(int size) {
        total=0;
        rear=0;
        front=0;
        this.size = size;
        queue=new ObjectQueueModel[this.size];
    }

    @SuppressWarnings("Duplicates")
    boolean enqueue(ObjectQueueModel element){
        if(!isFull()){
            total++;
            queue[rear]=element;
            rear++;
            return true;
        }else{
            return false;
        }
    }

    ObjectQueueModel dequeue(){
        ObjectQueueModel item=queue[front];
        total--;
        front++;
        return item;
    }

    void dequeueAll(){
        while(total!=0){
            System.out.println(dequeue().toResult());
        }
    }

    boolean isFull(){
        return (size==total);
    }

    boolean isEmpty(){
        return (total==0);
    }

    void show(){
        int tempFront=front;
        if(total!=0){
            for(int i=0;i<total;i++){
                System.out.println(queue[tempFront].toResult());
                tempFront=tempFront+1;
            }
        }
    }

}

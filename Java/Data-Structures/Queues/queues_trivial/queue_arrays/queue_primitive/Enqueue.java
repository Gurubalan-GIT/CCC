package guru.algorithms.datastructures.queues.queues_trivial.queue_arrays.queue_primitive;

public class Enqueue {
    public static void main(String[] args){
        int size;
        System.out.println("Enter the size of the queue-");
        size=Queue.scanner.nextInt();
        Queue queue=new Queue(size);
        System.out.println("Enter the elements-");
        queue.enqueueAll();
        queue.dequeueAll();
        queue.show();
    }
}

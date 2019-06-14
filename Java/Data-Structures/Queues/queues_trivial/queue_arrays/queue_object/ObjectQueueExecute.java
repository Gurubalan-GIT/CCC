package guru.algorithms.datastructures.queues.queues_trivial.queue_arrays.queue_object;

public class ObjectQueueExecute {
    public static void main(String[] args){
        int size;
        System.out.println("Enter the size of the queue-");
        size=ObjectQueue.scanner.nextInt();
        ObjectQueue objectQueue=new ObjectQueue(size);
        System.out.println("Enter the name and the Register number- ");
        while(size!=0){
            if(!objectQueue.isFull()) {
                String name = ObjectQueue.scanner.next();
                int registerNumber = ObjectQueue.scanner.nextInt();
                ObjectQueueModel objectQueueModel = new ObjectQueueModel(name, registerNumber);
                objectQueue.enqueue(objectQueueModel);
                size--;
            }
        }
        objectQueue.show();
    }
}

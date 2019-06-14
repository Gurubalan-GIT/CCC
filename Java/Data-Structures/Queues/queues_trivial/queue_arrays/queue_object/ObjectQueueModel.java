package guru.algorithms.datastructures.queues.queues_trivial.queue_arrays.queue_object;

public class ObjectQueueModel {
    private String name;
    private int registerNumber;

    public ObjectQueueModel(String name, int registerNumber) {
        this.name = name;
        this.registerNumber = registerNumber;
    }

    String toResult(){
        return "Name- "+name+" Register Number- "+registerNumber;
    }
}

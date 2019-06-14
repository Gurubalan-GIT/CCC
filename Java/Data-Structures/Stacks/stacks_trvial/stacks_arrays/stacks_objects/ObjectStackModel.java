package guru.algorithms.datastructures.stacks.stacks_trvial.stacks_arrays.stacks_objects;

class ObjectStackModel {
    private String name;
    private int registerNumber;

    ObjectStackModel(String name, int registerNumber) {
        this.name = name;
        this.registerNumber = registerNumber;
    }

    String toResult(){
        return "Name: "+name+" Register Number "+registerNumber;
    }
}

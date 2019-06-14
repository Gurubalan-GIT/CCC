package guru.algorithms.datastructures.linkedlist.linkedlist_trivial;

import java.util.Scanner;
/**
 * @author Gurbalan-GIT
 */
class LinkedList {
    private Node head;
    static Scanner scanner=new Scanner(System.in);

    void addMultipleFirst(int nodes){
        for(int i=1;i<=nodes;i++)
        {
            int data = scanner.nextInt();
            addFirst(data);
        }
    }

    void addMultipleLast(int nodes){
        for(int i=1;i<=nodes;i++)
        {
            int data = scanner.nextInt();
            addLast(data);
        }
    }

    private void addLast(int data){
        Node node=new Node(data);
        //This step need not be done, default is null.
        node.next=null;
        //Checking if the head is null, if it is node we have to traverse till the last node (until null) and then add it.
        if(head==null){
            head=node;
        }
        else{
            Node traversalNode = head;
            while (traversalNode.next!=null){
                traversalNode=traversalNode.next;
            }
            traversalNode.next=node;
        }
    }

    void addAt(int index, int data){
        Node node = new Node(data);
        node.next=null;
        if(index==0){
            addFirst(data);
        }else {
            Node traversal = head;
            for (int i = 0; i < index - 1; i++) {
                traversal = traversal.next;
            }
            node.next = traversal.next;
            traversal.next = node;
        }
    }

    private void addFirst(int data){
        Node node=new Node(data);
            node.next = head;
            head=node;
    }

    void deleteLast(){
        Node traversalNode=head;
        for(int i=0;i<size()-2;i++){
            traversalNode=traversalNode.next;
        }
        traversalNode.next=null;
    }

    void deleteFirst(){
        head=head.next;
    }

    void deleteAt(int index){
        if(index==0){
            deleteFirst();
        }else {
            Node node = head;
            Node tempNode;
            for (int i = 0; i < index - 1; i++) {
                node = node.next;
            }
            tempNode=node.next;
            node.next=tempNode.next;
        }
    }

    void deleteData(int data){
        int tempData=0;
        if(head.getData()==data){
            deleteFirst();
        }else {
            Node delete = head;
            Node tempNode;
            while (delete != null) {
                if (delete.next.getData() == data) {
                    tempData = delete.next.getData();
                    break;
                } else {
                    delete = delete.next;
                }
            }
        }
    }

    void show(){
        Node currentNode=head,traverse=head;
        int lastNode=0;
        while(currentNode!=null){
            lastNode=currentNode.getData();
            currentNode=currentNode.next;
        }
        //I'm doing this so I can break when I know the last element and print with the correct pattern.
        while(traverse!=null){
            if(lastNode==traverse.getData()){
                System.out.println(traverse.getData());
                break;
            }else{
                System.out.print(traverse.getData()+"->");
                traverse=traverse.next;
            }
        }
    }

    private int size(){
        int size=0;
        Node traverse=head;
        while(traverse!=null){
            traverse=traverse.next;
            size++;
        }
        return size;
    }
}

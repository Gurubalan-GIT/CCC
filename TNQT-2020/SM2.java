import java.util.*;
//This was asked in TNQT-2020, 
/*
Basically check if the input is equal to the given list of keywords or not
*/
class SM2{
    public static void main(String[] args){
        int flag=0;
        Scanner scanner=new Scanner(System.in);
        String input=scanner.next();
        String keys="break case continue default defer else for func goto if map range return struct type var";
        String[] keywords=keys.split(" ");
        for(String key:keywords){
            if(input.equals(key)){
                flag=1;
                break;
            }
        }
        if(flag==1){
            System.out.println("Yes, the input is a keyword");
        }else{
            System.out.println("No, the input is not a keyword");
        }
        scanner.close();
    }
    
}
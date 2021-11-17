import java.util.ArrayList;

public class Bank {
    public String name; //bank name
    public ArrayList<Branch> branches = new ArrayList<Branch>(); //List of branches

    public void addNewBranch(String b_Name){
        if(b_Name.length() < 0){
            System.out.println("Error: Invalid name and/or amount");
        } else {
            Branch branch = new Branch();
            branches.add(branch);
        }
    }
}

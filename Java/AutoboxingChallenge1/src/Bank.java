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

    public void addNewTransaction(String c_Name, double amount){
        for(int i = 0; i < branches.size(); i++){
            if(branches.get(i).customers.get(i).name == c_Name){ //if name matches what exists in a branch we have
                branches.get(i).customers.get(i).transactions.add(amount); //add an amount to their transaction
            }
        }
    }
}

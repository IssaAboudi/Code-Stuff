import java.util.ArrayList;

public class Branch {
    public ArrayList<Customer> customers = new ArrayList<Customer>(); //store list of customers

    //functions:
    public void addNewCustomer(String c_Name, double amount){
        if(amount < 0.0 && c_Name.length() < 0) {
            System.out.println("Error: Invalid name and/or amount");
        } else { // as long as arguments are valid (non negative amount && a valid name)
            Customer customer = new Customer();
            customer.name = c_Name; //set name of new customer
            customer.transactions.add(amount); //push initial amount into customer's arraylist
            customers.add(customer); //push new customer into branch's arraylist
        }
    }

    public void addNewTransaction(String c_Name, double amount){
        if(amount < 0.0 && c_Name.length() < 0) {
            System.out.println("Error: Invalid name and/or amount");
        } else {
            for (int i = 0; i < customers.size(); i++) {
                if (customers.get(i).name == c_Name) { //if a customer at this branch:
                    customers.get(i).transactions.add(amount); //add amount to that customer's transaction list
                } else {
                    System.out.println("Error: Account not located");
                }
            }
        }
    }
}

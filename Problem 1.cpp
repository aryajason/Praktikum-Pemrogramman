#include <iostream> // For Input and Output Function
using namespace std;

int main()
{
    // The Variables
    string name;
    long long GrossSalary, Installment, Insurance; // For The Base Salary
    
    // Input Number From The User
    cout <<" Enter Your Name: ";
    cin>> name;
    
    cout <<" The GrossSalary: ";
    cin>> GrossSalary;
    
    cout <<" The Installment: ";
    cin>> Installment;
    
    cout <<" The Insurance: ";
    cin>> Insurance;
    
    //Calculate The Input GrossSalary From The Input Number
    long long Tax_Amount = 0.2*GrossSalary;
    long long net_salary = GrossSalary - Tax_Amount - Installment - Insurance;
    
    // The Function Will Display The Result
    cout<< "Payslip for Employee"<<endl;
    cout<< "--------------------"<<endl;
    cout<< "Name: ";
    cout<<name<<endl;
    cout<< "Tax (20%): ";
    cout<<Tax_Amount<<endl;
    cout<< "Instalment: ";
    cout<<Installment<<endl;
    cout<< "Insurance: ";
    cout<<Insurance<<endl;
    cout<<"Net Salary: ";
    cout<<net_salary<<endl;
    
    return 0; // End The Program
}

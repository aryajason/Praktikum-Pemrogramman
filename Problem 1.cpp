#include <iostream>
using namespace std;

int main()
{
    string name;
    long long GrossSalary, Installment, Insurance;
    
    cout <<" Enter Your Name: ";
    cin>> name;
    
    cout <<" The GrossSalary: ";
    cin>> GrossSalary;
    
    cout <<" The Installment: ";
    cin>> Installment;
    
    cout <<" The Insurance: ";
    cin>> Insurance;
    
    long long Tax_Amount = 0.2*GrossSalary;
    long long net_salary = GrossSalary - Tax_Amount - Installment - Insurance;
    
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
        
}

#include<iostream>

#include<string.h>

using namespace std;

class Person {

protected:
    char name[50];

public:
    Person(char &nam){
        strcpy(name,&nam);
    }

    void display(){
        cout<<"Name is"<<name;
    }
};


class Employee : public Person {

protected :
    int emp_no;
    float salary;

public:

    Employee(int empNo,float sal,char *name):Person(*name){
        emp_no =empNo;
        salary=sal;
    }

    void displayEmployeeDetails(){
        display();
        cout<<"\n\nEmplyee No: "<<emp_no;
        cout<<"\n\nEmplyee Salary: "<<salary;
        }
};



class Customer : public Person {

int cust_id;
static int customer_no;

public:
    Customer(int id,char *name):Person(*name){
        cust_id=id;
        customer_no++;
    }

    void displayCustomer(){
        display();
        cout<<"\n\nCustomer Id :"<<cust_id;
    }


};

class SalesPerson:Employee {

    char product[];


}

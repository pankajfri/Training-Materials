#include <iostream>
using namespace std;

class Student {
 	public : 
    int rollNo ;  
 	char  name[20]; 
	char address[150] ; 
	float  marks[5]; 
	float height;
 
float calculatePercentage(){   // Memeber Functio to calculate percentage
    int sum =0;
    for(int i=0;i<5;i++)
        sum = sum + marks[i];
    return sum/5;
}

};


int main()
{
Student s1 ;  // Object Creation  from class (BluePrint)
s1.rollNo = 3;

Student s2 ;
s2.rollNo = 5;

cout << "\n\nRollno of Student 1: "<<s1.rollNo;


cout << "\n\nRollno of Student 2: "<<s2.rollNo;

cout<<"\n\n\n\n\n";
return 0;
}

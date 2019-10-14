#include <stdio.h>
#include<iostream>


using namespace  std;

#define MAX 10

int list[MAX] = {1,8,4,6,0,3,5,2,7,9};

void display() {
   int i;
  cout<<"[";
	
   // navigate through all items 
   for(i = 0; i < MAX; i++) {
      cout<<list[i]<<", ";
   }
	
   cout<<"]\n";
}

void bubbleSort() {
   int temp;
   int i,j;
	
   
   // loop through all numbers 
   for(i = 0; i < MAX-1; i++) { 
		
      // loop through numbers falling ahead 
      for(j = 0; j < MAX-1-i; j++) {
        cout<<"     \n Items compared:  "<<list[j]<<"::"<<list[j+1];

         // check if next number is lesser than current no
         //   swap the numbers. 
         //  (Bubble up the highest number)
			
         if(list[j] > list[j+1]) {
            temp = list[j];
            list[j] = list[j+1];
            list[j+1] = temp;

            cout<<" => swapped --> "<<list[j]<<"::"<<list[j+1]<<"-->";
            display(); 
     
         } else {
            cout<<" => not swapped --> "<<list[j]<<"::"<<list[j+1]<<"-->";
            display(); 
         }
			
      }
      
      cout<<"\n Iteration --> "<<(i+1)<<"#: "; 
      display();
   }
	
}

int main() {
   cout<<"Input Array: ";
   display();
   cout<<"\n";    
   bubbleSort();
   cout<<"\nOutput Array: ";
   display();
   return 0;
}
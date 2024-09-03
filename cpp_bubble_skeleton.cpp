//
// template C++ code for doing bubblesort, W. Bethel, SFSU, 2/2023
//
// Marcos Garcia
// CSC 656-01 F24, Assignment: Coding project 1
// 09/03/2024
// 1-sentence description here: bubblesort skeleton code, used hand-crafted array of ints and a fixed problem size of n=10
//

#include <iostream>

int main (int ac, char *av[]) 
{
   int a[] = {6, 4, 2, 5, 1, 3, 9, 10, 2, 3}; // replace with your own random 10 ints from www.calculator.net/random-number-generator.html (Done.)
   int n = sizeof(a)/sizeof(int);
   int i;
   int j;
   int temp;

   std::cout << "a before sort: " << std::endl;

   // print out the contents of a before the sort
   for (int i = 0; i < n; i++) 
   {
      std::cout << a[i]  << " ";
   }
   std::cout << std::endl;

   // do the sort into ascending order. 
   // insert your code here
   for (i = 0; i < n-1; i++) 
   {
      for (j = 0; j < n-i-1; j++) 
      {
         if (a[j] > a[j+1])
         {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
         }
      }
   }


   // print out the contents of a after the sort
   std::cout << "a after bubble sort: " << std::endl;
    for (int i = 0; i < n; i++) 
    {
        std::cout << a[i] << " ";
    }
}
// EOF

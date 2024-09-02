//
// template C++ code for doing bubblesort, W. Bethel, SFSU, 2/2023
//
// Your name here
// Your course number, assignment number here
// date here
// 1-sentence description here: bubblesort skeleton code, used hand-crafted array of ints and a fixed problem size of n=10
//

#include <iostream>

int main (int ac, char *av[]) 
{
   int a[] = {6, 4, 2, 5, 1, 3, 9, 10, 2, 3}; // replace with your own random 10 ints from www.calculator.net/random-number-generator.html (Done.)
   int n = sizeof(a)/sizeof(int);

   std::cout << " a before sort " << std::endl;

   // print out the contents of a before the 
   for(int i = 0; i < n; i++) {
      std::cout << a[i] << std::endl;
   }


   // do the sort into ascending order. 
   // insert your code here


   // print out the contents of a after the sort
   // insert your code here
}
// EOF

// Shun Lu
// Homework 1
// Completed 10/5/2015
//




#include <iostream>

int main(){
   int age = 21 ;
   int ageSquared = age * age;
   int ageHalved = age / 2;

   std::cout << "Age: " << age << " AgeSquared: " << ageSquared 
             << " AgeHalved: " << ageHalved << std::endl;

// Calculating results with different operators.

   std::cout << age * ageHalved << std::endl
             << ageSquared / ageHalved << std::endl
             << ageSquared % ageHalved << std::endl
             << age - ageHalved << std::endl
             << age / ageSquared << std::endl
             << ageSquared + age << std::endl
             << ( age + ageSquared + ageHalved ) / 3.0F << std::endl;

   return 0;
}


// Shun Lu
// Homework 2
// Completed 10/12/2015



#include <iostream>
#include <fstream>
#include <cmath>

int main(){
   int n;

   std::cout << "Enter a positive odd integer: ";
   std::cin >> n;
   while (!(n > 0 && n % 2 == 1)){
      std::cout << "Not positive odd integer, please enter again: ";
      std::cin >> n;
   }

   std::ofstream fout1("diamond.txt");
   for (int i = -n / 2; i <= n / 2; i++){
      for (int j = -n / 2; j <= n / 2; j++){
         fout1 << (std::abs(i) + std::abs(j) <= n / 2 ? "X" : " ");
      }
   fout1 << "\n";
   }

   std::ofstream fout2("square.txt");
   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
         if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            fout2 << "X";
         else
            fout2 << " ";
      }
   fout2 << "\n";
   }

   std::ofstream fout3("cross.txt");
   for (int i = -n / 2; i <= n / 2; i++){
      for (int j = -n / 2; j <= n / 2; j++){
         fout3 << (std::abs(i) == std::abs(j) ? "X" : " ");
      }
   fout3 << "\n";
   }

   std::cout << "You entered: " << n << "\n";
   return 0;
}


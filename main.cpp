#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::make_shared;
using std::make_unique;
using std::move;
using std::string;
using std::unique_ptr;
using std::vector;

int main() {
   //   std::ifstream fudge("64317-0.txt");
   //
   //   std::string test;
   //   while (std::getline(fudge ,test)) {
   //      cout << test << " ";
   //   }

   while (true) {
      cout << "Enter an int and a word: ";
      string s;
      getline(cin, s);
      std::istringstream sin(s);
      int i;
      string word;
      sin >> i >> word;
      if (!sin) {
         cout << "You messed up!\n";
         if (sin.eof())
            cout << "Because you didn't give enough input.\n";
         sin.clear();
      } else
         cout << "int was " << i << " and word was " << word << std::endl;
      if (i == 13)
         break;
   }
}

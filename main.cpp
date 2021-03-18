#include <iostream>
#include <optional>
using std::cout;
using std::cin;
using std::optional;
#include <string>
using std::string;

optional<int> getNumBooks() {
   cout << "How many books would you like to buy? ";
   int numBooks;
   cin >> numBooks;
   if (!cin) {
      cin.clear();
      cin.ignore(999,'\n');
      return {};
   }
   if (numBooks<0)
      return {};
   return numBooks;
}

int main() {
   int booksSoldSoFar = 0;
   for(int i=0;i<10;++i) {
      auto howMany = getNumBooks();
      if (howMany)//can also use howMany.has_value()
         cout << "The customer wanted " << howMany.value() << " books.\n";
      else
         cout << "The customer did not enter a valid value.\n";

      booksSoldSoFar += howMany.value_or(0);
      cout << booksSoldSoFar << " books have been sold.\n";
   }
   return 0;
}
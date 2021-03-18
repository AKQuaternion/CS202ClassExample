#include <iostream>
#include <optional>
using std::cout;
using std::cin;
using std::optional;

optional<int> getNumBooks() {
   cout << "How many books would you like to buy? ";
   int numBooks;
   cin >> numBooks;
   if (!cin) {
      cin.ignore(9999);
      cin.clear();
      return {};
   }
   if (numBooks<0)
      return {};
   return numBooks;
}

int main() {
   int booksSoldSoFar = 13;
   auto howMany = getNumBooks();
   if(howMany) //can also use howMany.hasValue()
      cout << "The customer wanted " << howMany.value() << " books.\n";
   else
      cout << "The customer did not enter a valid value.\n";

   booksSoldSoFar += howMany.value_or(0);
   cout << booksSoldSoFar << " books have been sold.\n";
   return 0;
}
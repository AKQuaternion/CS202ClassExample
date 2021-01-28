#include "Foo.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "Pet.hpp"
#include <memory>
using std::unique_ptr;
using std::make_unique;
using std::cout;
using std::move;
using std::vector;
using std::make_shared;

int main() {
//   Pet dave("dave");
//   unique_ptr<Pet> duPtr = make_unique<Pet>("uniqueBill");
//   unique_ptr<Pet> p;
//   p = move(duPtr);
//   (*p).setName("will go away");
//   p->setName("movedUniqueBill");
//
//   int x{6};
//   Pet peter{"Peter"};
//
//   unique_ptr<Pet>(new Pet);
   std::shared_ptr<Pet> second;
   {
      auto sPtr = make_shared<Pet>("sharedJenny");
      second = sPtr;
   }
   cout << "I am here.\n";
   second = make_shared<Pet>("Colleen");
}

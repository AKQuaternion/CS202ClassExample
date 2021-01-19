#include "Foo.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::cout;

void showCommandLine(std::vector<std::string> args) {
   cout << "Your command line was:\n";
   for (const auto s : args)
      cout << s << " ";
   cout << "\n";
}
int main(int argc, const char **argv) {
   cout << argc << " arguments, program name is " << argv[0] << "\n";

   std::vector<std::string> args;
   for (int index = 0; index < argc; index++) {
      args.push_back(argv[index]);
   }

   showCommandLine(args);

   Foo f;
   return 0;
}

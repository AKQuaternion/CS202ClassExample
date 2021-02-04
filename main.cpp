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
using std::ostream;
#include <iomanip>
using std::setw;

using std::ofstream;
using std::ifstream;
int main() {
   int a[100] = {1,2,3};
   int ii=256*256;
   ofstream fout("data.dat",std::ios::binary | std::ios::out);
   fout.write(reinterpret_cast<const char *>(&ii),sizeof(ii));
   fout.close();

   ifstream fin("data.dat",std::ios::binary | std::ios::in);

   for(int j=0;j<4;++j) {
      unsigned char c;
      fin.read(reinterpret_cast<char *>(&c),sizeof(c));
      cout << (unsigned int)(c) << std::endl;
   }
   return 0;
}

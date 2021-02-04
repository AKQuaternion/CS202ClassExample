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
   int a[100]={13};

//   ofstream fout("data.dat",std::ios::binary | std::ios::out);
//   fout.write(reinterpret_cast<const char *>(a),sizeof(int)*100);
//   fout.close();

   cout << a[0] << std::endl;
   ifstream fin("data.dat",std::ios::binary | std::ios::in);


   fin.read(reinterpret_cast<char *>(&a),sizeof(int)*100);
   cout << a[0] << std::endl;


   int i;
   fin.seekg(2*sizeof(int));
   fin.read(reinterpret_cast<char *>(&i),sizeof(int));
   cout << i << std::endl;
   return 0;
}

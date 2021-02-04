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


int main() {
//      std::ofstream fout("example.txt");
//      for(int i=0;i<100;++i)
//         fout << setw(5) << i*i;
//      fout.close();

      std::ifstream fin("example.txt");

      fin.seekg(83*5);
      int x;
      fin >> x;
      cout << "83 squared is " << x << std::endl;
      return 0;
}

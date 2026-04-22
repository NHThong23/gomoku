#include <fstream> // std::ofstream
using namespace std;

int main() {

ofstream ofs("test.txt", ofstream::out);

ofs << "Welcome to CO1011!\nLecture 4: Libraries.\n";

ofs.close();
return 0;

}
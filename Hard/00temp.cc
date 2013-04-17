/*


*/

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream ifs(argv[1]);
    int A, B, N;
    string line;
    
    while (getline(ifs, line)) {
        istringstream iss(line);
        iss >> A >> B >> N;
    }

    return 0;
}
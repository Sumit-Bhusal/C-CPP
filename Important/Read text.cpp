#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
string line;
ifstream myfile("file.txt"); // open the file
if (myfile.is_open()) {
    while (getline(myfile, line)) {
        cout << line << endl; // display the text in screen
    }
    myfile.close(); // close the file
} else {
    cout << "Unable to open file" << endl;
}

return 0;
}

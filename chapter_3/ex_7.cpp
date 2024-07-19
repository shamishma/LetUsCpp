/* inline function*/
#include <iostream>
#include <fstream>
using namespace std;

inline void reportError(const char *str) {
    cout << endl << str;
    exit(1);
}

int main() {
    ifstream sourceFile("source.txt", ios::in | ios::binary);
    if (!sourceFile.is_open()) {
        reportError("Unable to open source file");
    }

    ofstream targetFile("target.txt", ios::out | ios::binary);
    if (!targetFile.is_open()) {
        reportError("Unable to open target file");
    }

    // Copy the contents of the source file into the target file
    targetFile << sourceFile.rdbuf();

    sourceFile.close();
    targetFile.close();

    return 0;
}

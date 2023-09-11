#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    int totalString = 10;
    vector<string> stringList;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < totalString; i++) {
        string randomString;
        for (int j = 0; j < 5; j++) { // Generating a string of length 5
            char randomChar = 'a' + rand() % ('z' - 'a' + 1);
            randomString += randomChar;
        }
        stringList.push_back(randomString);
    }

    for (int i = 0; i < totalString; i++) {
        if (!stringList[i].empty()) {
            stringList[i][0] = toupper(stringList[i][0]);
        }
    }

    sort(stringList.begin(), stringList.end());

    cout << "Strings em ordem alfabética:" << endl;
    for (int i = 0; i < totalString; i++) {
        cout << "String " << i + 1 << ": " << stringList[i] << endl;
    }

    return 0;
}

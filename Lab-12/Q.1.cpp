#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Step 1: Create and write to the file
    ofstream outFile("data.txt");
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    string data = "This is some sample data to demonstrate file operations.";
    outFile << data;
    outFile.close();

    // Step 2: Open the file for reading
    ifstream inFile("data.txt", ios::binary);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char buffer[6]; // to store 5 bytes + null character for string
    while (!inFile.eof()) {
        inFile.read(buffer, 5); // Read 5 bytes
        streamsize bytesRead = inFile.gcount(); // Actual bytes read
        buffer[bytesRead] = '\0'; // Null terminate
        cout << buffer;

        // Skip next 5 bytes
        inFile.seekg(5, ios::cur);
    }

    inFile.close();
    return 0;
}

#include <iostream>
#include <fstream>
int main() {
    std::ofstream outFile("example.txt", std::ios::app);
    if (!outFile.is_open()) {
        std::cerr << "Error: could not open file\n";
        return 1;
    }
    outFile << "This is some example text\n";
    outFile.close();
    std::cout << "File written successfully\n";
    return 0;
}

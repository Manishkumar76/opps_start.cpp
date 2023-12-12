#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        outputFile << "Hello, world!" << std::endl;
        outputFile.close();
    }

    std::ifstream inputFile("input.txt");
    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    }

    return 0;
}

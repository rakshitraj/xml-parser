#include <iostream>
#include <fstream>

using namespace std;

// class parser {

// };

void read_xml(const std::string &filepath) {
    std::ifstream inputFile(filepath);
    if (!inputFile) {
        std::cerr << "Unable to open file at " << filepath;
    }

    std::string line;
    while(std::getline(inputFile, line)) {
        std::cout << line << '\n';
    }
}

int main() {
    read_xml("res/1_contact_info.xml");
    return 0;
}
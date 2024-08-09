#include <iostream>
#include <fstream>
#include <vector>

class parser {
private:
    std::ifstream inputFile;
public:
    // Member functions
    void read_xml(const std::string&);
    std::vector<char>* parse_to_char_vector();

    // Default constructor
    parser() {
        std::cout << "Default parser object initialized..\n";
    }

    // Destructor
    ~parser() {
        if (inputFile.is_open()) {
            inputFile.close();
        }
    }
};

void parser::read_xml(const std::string &filepath) {
    inputFile.open(filepath); // Open the file and bind to the member variable
    if (!inputFile) {
        std::cerr << "Unable to open file at " << filepath << std::endl;
    }
}

std::vector<char>* parser::parse_to_char_vector() {
    if (!inputFile.is_open()) {
        std::cerr << "Input stream is not open or does not exist" << std::endl;
        return nullptr;
    }

    std::vector<char>* char_parsed_xml = new std::vector<char>();

    char ch;
    while (inputFile.get(ch)) {
        if (ch != '\n') char_parsed_xml->push_back(ch);
    }

    if (inputFile.eof()) {
        std::cout << "End of file reached." << std::endl;
    } else if (inputFile.fail()) {
        std::cerr << "Error reading file" << std::endl;
    }

    return char_parsed_xml;
}

int main() {
    parser parserObj;
    parserObj.read_xml("res/1_contact_info.xml");
    std::vector<char>* parsedVector = parserObj.parse_to_char_vector();

    if (parsedVector) {
        for (char ch : *parsedVector) {
            std::cout << " | " << ch;
        }
        delete parsedVector; // Clean up allocated memory
    }

    return 0;
}

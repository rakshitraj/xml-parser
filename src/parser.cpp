#include <iostream>
#include <fstream>
#include <vector>

#include "include/xmlnode.cpp"

class parser {
private:
    std::ifstream inputFile;
public:
    // Data members
    xmlNode* root;

    // Member functions
    std::vector<char>* parse_to_char_vector();

    void read_xml(const std::string&);
    xmlNode* xmlParser();

    // Default constructor
    parser() {
        std::cout << "Default parser object initialized..\n";
        this->root = new xmlNode();
    }

    // Parameterized constructor
    parser(xmlNode* root) {
        if (!root) {
            std::cerr << "The xmlNode object cannot be initialized, the object does not exist.\n";
        }
        else this->root = root;
        std::cout << "Parameterized parser object created with root node.\n";
    }

    // Destructor
    ~parser() {
        // Close file
        if (inputFile.is_open()) {
            inputFile.close();
        }
        // Delete root node
        delete this->root;
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

xmlNode* parser::xmlParser() {
    char ch, delim;
    std::string tag;
    while(true) {
        this->inputFile.get(ch);

        if(ch=='<'){
            delim = '>';
            std::getline(inputFile, tag, delim);
            std::cout << ch << " " << tag << '\n';

            xmlNode* node = new xmlNode();
        }

        if (inputFile.eof()) {
            std::cout << "End of file reached.\n";
            break;
        } else if (inputFile.fail()) {
            std::cerr << "Error reading file\n";
            break;
        }
    }
    return nullptr;
}

int main() {
    parser parserObj;
    parserObj.read_xml("res/1_contact_info.xml");
    parserObj.xmlParser();
    return 0;
}

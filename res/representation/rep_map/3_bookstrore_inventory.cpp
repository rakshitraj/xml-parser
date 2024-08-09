#include <string>
#include <vector>
#include <unordered_map>

std::unordered_map<std::string, std::string> book1 = {
    {"title", "Learning XML"},
    {"lang", "en"},
    {"author", "John Doe"},
    {"year", "2022"},
    {"price", "29.99"},
    {"publisher", "Example Publishing"}
};

std::unordered_map<std::string, std::string> book2 = {
    {"title", "Mastering XML"},
    {"lang", "en"},
    {"author", "Jane Smith"},
    {"year", "2023"},
    {"price", "39.99"},
    {"publisher", "XML Press"}
};

std::unordered_map<std::string, std::string> book3 = {
    {"title", "Apprendre XML"},
    {"lang", "fr"},
    {"author", "Jean Dupont"},
    {"year", "2021"},
    {"price", "25.99"},
    {"publisher", "Éditions Exemple"}
};

std::vector<std::unordered_map<std::string, std::string>> bookstore = {book1, book2, book3};

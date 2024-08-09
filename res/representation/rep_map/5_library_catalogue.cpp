#include <string>
#include <vector>
#include <unordered_map>

std::unordered_map<std::string, std::string> book1 = {
    {"title", "The Great Gatsby"},
    {"author", "F. Scott Fitzgerald"},
    {"year", "1925"},
    {"isbn", "9780743273565"}
};

std::unordered_map<std::string, std::string> book2 = {
    {"title", "1984"},
    {"author", "George Orwell"},
    {"year", "1949"},
    {"isbn", "9780451524935"}
};

std::unordered_map<std::string, std::vector<std::unordered_map<std::string, std::string>>> fiction = {
    {"name", "Fiction"},
    {"books", {book1, book2}}
};

std::unordered_map<std::string, std::string> book3 = {
    {"title", "Sapiens: A Brief History of Humankind"},
    {"author", "Yuval Noah Harari"},
    {"year", "2011"},
    {"isbn", "9780062316097"}
};

std::unordered_map<std::string, std::string> book4 = {
    {"title", "Educated"},
    {"author", "Tara Westover"},
    {"year", "2018"},
    {"isbn", "9780399590504"}
};

std::unordered_map<std::string, std::vector<std::unordered_map<std::string, std::string>>> nonFiction = {
    {"name", "Non-Fiction"},
    {"books", {book3, book4}}
};

std::unordered_map<std::string, std::string> book5 = {
    {"title", "A Brief History of Time"},
    {"author", "Stephen Hawking"},
    {"year", "1988"},
    {"isbn", "9780553380163"}
};

std::unordered_map<std::string, std::string> book6 = {
    {"title", "The Selfish Gene"},
    {"author", "Richard Dawkins"},
    {"year", "1976"},
    {"isbn", "9780198788607"}
};

std::unordered_map<std::string, std::vector<std::unordered_map<std::string, std::string>>> science = {
    {"name", "Science"},
    {"books", {book5, book6}}
};

std::unordered_map<std::string, std::vector<std::unordered_map<std::string, std::vector<std::unordered_map<std::string, std::string>>>>> library = {
    {"sections", {fiction, nonFiction, science}}
};

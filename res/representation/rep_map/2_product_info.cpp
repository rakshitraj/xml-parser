#include <string>
#include <vector>
#include <unordered_map>

std::unordered_map<std::string, std::string> product1 = {
    {"id", "101"},
    {"name", "Laptop"},
    {"price", "899.99"},
    {"stock", "25"}
};

std::unordered_map<std::string, std::string> product2 = {
    {"id", "102"},
    {"name", "Smartphone"},
    {"price", "499.99"},
    {"stock", "100"}
};

std::unordered_map<std::string, std::string> product3 = {
    {"id", "103"},
    {"name", "Tablet"},
    {"price", "299.99"},
    {"stock", "50"}
};

std::vector<std::unordered_map<std::string, std::string>> products = {product1, product2, product3};

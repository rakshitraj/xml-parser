#include <string>
#include <vector>
#include <unordered_map>

std::unordered_map<std::string, std::string> contact1 = {
    {"email", "john.doe@company.com"},
    {"phone", "+1234567890"}
};

std::unordered_map<std::string, std::unordered_map<std::string, std::string>> employee1 = {
    {"id", "001"},
    {"name", "John Doe"},
    {"department", "IT"},
    {"role", "Software Developer"},
    {"contact", contact1}
};

std::unordered_map<std::string, std::string> contact2 = {
    {"email", "jane.smith@company.com"},
    {"phone", "+0987654321"}
};

std::unordered_map<std::string, std::unordered_map<std::string, std::string>> employee2 = {
    {"id", "002"},
    {"name", "Jane Smith"},
    {"department", "HR"},
    {"role", "HR Manager"},
    {"contact", contact2}
};

std::unordered_map<std::string, std::string> contact3 = {
    {"email", "michael.brown@company.com"},
    {"phone", "+1122334455"}
};

std::unordered_map<std::string, std::unordered_map<std::string, std::string>> employee3 = {
    {"id", "003"},
    {"name", "Michael Brown"},
    {"department", "Finance"},
    {"role", "Accountant"},
    {"contact", contact3}
};

std::vector<std::unordered_map<std::string, std::unordered_map<std::string, std::string>>> employees = {employee1, employee2, employee3};

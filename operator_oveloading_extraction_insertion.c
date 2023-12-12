#include <iostream>
#include <string.h>

class Person {
private:
    std::string name;
    int age;
public:
    Person(const std::string& n = "", int a = 0) : name(n), age(a) {}

    // Overloading the insertion operator (<<)
    friend std::ostream& operator<<(std::ostream& os, const Person& person) {
        os << "Name: " << person.name << ", Age: " << person.age;
        return os;
    }

    // Overloading the extraction operator (>>)
    friend std::istream& operator>>(std::istream& is, Person& person) {
        std::cout << "Enter name: ";
        is >> person.name;
        std::cout << "Enter age: ";
        is >> person.age;
        return is;
    }
};

int main() {
    Person p1("John", 25);

    // Output using the insertion operator (<<)
    std::cout << p1 << std::endl;

    Person p2;

    // Input using the extraction operator (>>)
    std::cin >> p2;
    std::cout << p2 << std::endl;

    return 0;
}

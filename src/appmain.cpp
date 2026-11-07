
#if 0

Your task is to implement a Person class from scratch with the requirements listed in the TODO comments in the starter code.





#endif


#include <iostream>
#include <string>

// TODO: Define the Person class
class Person {

public:
    //  - Implement a constructor that initializes both data members
    Person(std::string a, int b) :name(a), age(b) {}

    //  - Implement a copy constructor with a 'Person' parameter
    Person(const Person& obj) {
        name = obj.name;
        age = obj.age;
    }

    //  - Create private data members 'name' and 'age'
private:
    std::string name;
    int age;

    //  - Implement a 'display' method that prints 'name' and 'age'
public:
    void display()
    {
        std::cout << "Name = " << this->name << "Age = " << this->age;
    }

};

int main() {
    // TODO: Create a Person object with name "Alice" and age 30
    Person my_person("Alice", 30);

    // TODO: Call the 'display' method on this object to print the details
    my_person.display();
    // TODO: Create a copy of the first object using the copy constructor
    Person copyPerson(my_person);
    // TODO: Call the 'display' method on the copied object to print the details
    copyPerson.display();
    return 0;
}
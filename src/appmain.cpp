#include <iostream>
#include <string>

class Musician {
public:
    // TODO: Update the constructor to include the yearsActive data member
    Musician(const std::string& name, const std::string& instrument, int yearsActive)
        : name(name), instrument(instrument), yearsActive(yearsActive) {
    }

    // TODO: Update the copy constructor to include the yearsActive data member in the copy
    Musician(const Musician& other)
        : name(other.name), instrument(other.instrument), yearsActive(other.yearsActive) {
    }

    // TODO: Update the display method to include the yearsActive data member in the output
    void display() const {
        std::cout << "Name: " << name << ", Instrument: " << instrument << "Yearactive: " << name << yearsActive << std::endl;
    }


private:
    std::string name;
    std::string instrument;
    int yearsActive;
    // TODO: Add a new data member 'yearsActive' to capture the number of years the musician has been active
};

int main() {
    // TODO: Update the instance of Musician to include the yearsActive data member with a value of 10
    Musician musician("John", "Guitar", 10);
    musician.display();

    // Using the copy constructor
    Musician musicianCopy(musician);
    musicianCopy.display();


    return 0;
}
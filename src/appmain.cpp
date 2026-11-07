

#if 0

Great job so far!Let's enhance the Album class by adding a constructor that takes the title, genre, and release year as arguments. Also, implement the main to do operations with the class.

Notice that the setTitle method updates only the title of one album; the other one remains unchanged because it is a copy of the original album.




#endif











#include <iostream>
#include <string>

class Album {
public:
    // TODO: Add the constructor here that takes the title, genre, and release year
    Album(std::string var_title, std::string var_genre, int var_releaseYear) :title(var_title), genre(var_genre), releaseYear(var_releaseYear)
    {
    }
    // Copy constructor
    Album(const Album& other)
        : title(other.title), genre(other.genre), releaseYear(other.releaseYear) {
    }

    void display() const {
        std::cout << "Title: " << title << ", Genre: " << genre << ", Release Year: " << releaseYear << std::endl;
    }

    void setTitle(const std::string& title) {
        this->title = title;
    }

private:
    std::string title;
    std::string genre;
    int releaseYear;
};

int main() {
    // TODO: Create an Album object with the title "Abbey Road", genre "Rock", and release year 1969
    Album my_album("Abbey Road", "Rock", 1969);
    // TODO: Using the copy constructor to create albumCopy
    Album albumCopy(my_album);

    // TODO: Call the setTitle method on albumCopy with the value "Green River"
    albumCopy.setTitle("Green River");


    // TODO: Display the album details
    my_album.display();

    // TODO: Display the albumCopy details
    albumCopy.display();

    return 0;
}
//empty space 

#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    // Default Constructor
    Rectangle() : width(1.0), height(1.0) {}

    // Parameterized Constructor
    Rectangle(double w, double h) {
        setWidth(w);
        setHeight(h);
    }

    // Destructor
    ~Rectangle() {}

    // Setters
    void setWidth(double w) {
        width = (w > 0) ? w : 1.0;
    }

    void setHeight(double h) {
        height = (h > 0) ? h : 1.0;
    }

    // Getters
    double getWidth() const { return width; }
    double getHeight() const { return height; }

    // Member Function
    double calculateArea() const {
        return width * height;
    }
};

int main() {
    Rectangle rect(5.0, 4.0);
    std::cout << "Area: " << rect.calculateArea() << "\n";
    return 0;
}

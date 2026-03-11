#include <iostream>
#include <string>
#include <cstdlib> // rand function

// create Route structure (source, destination)

class Route {
private: // Access specifier
    std::string source;
    std::string destination;
    int length;

    // private method
    void updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 50;
    }

public:

    // constructors must be public, have the same name as the class
    // constructors have no return type (not even void)
    //Route() { // no argument constructor
        //length = 0;
    //}

    //no argument constructor (second version)
    Route() : source("-"), destination("-"), length(0) {

    }

    // constructor with arguments
    Route(const std::string& s, const std::string& d) {
        setSource(s);
        setDestination(d);
    }

    //create a method of the structure
    void print() {
        std::cout << source << " -> " << destination << ": " << length << std::endl;
    };

    // get methods (accessor functons, getters)
    std::string getSource() {
        return source;
    }
    
    std::string getDestination() {
        return destination;
    }
    
    int getLength() {
        return length;
    }
    
    
    // and set methods (setters, mutator functions)
    void setSource(const std::string& new_source) {
        source = new_source;
        updateLength();
    }
    
    void setDestination(const std::string& new_destination) {
        destination = new_destination;
        updateLength();
    }

};


int main(void) {
    // set the seed
    srand(time(0));

    
    //create an object of a Route structure
    Route spring_trip;

    spring_trip.print();

    spring_trip.setSource("Lakeland");
    spring_trip.setDestination("Honolulu");

    spring_trip.print();

    // ......
    spring_trip.setDestination("New York"); 

    //call structure method
    spring_trip.print();

    //create second Route object
    Route summer_vacation("Lakeland", "Tokyo");
    summer_vacation.print();

    return 0;
};
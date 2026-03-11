#include "Car.hpp"

int main() {
    //create an object of car class
    Car ferrari;
    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2024);
    ferrari.setMPG(13.8);

    ferrari.print_info();

    return 0;
}
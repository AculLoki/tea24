#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"
#include <string>


void changeValueByParameter(int value){
    value = 99;
    fmt::print("value set to(val): {}\n", value);
}

void changeValueByPointer(int* ptr){
    *ptr = 420;
    fmt::print("Value set to(adr): {}\n", *ptr);
}




int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/12.0/api/
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    /* INSERT YOUR CODE HERE */

    /*
    int x = 10;
    int* p = &x;
  

   

    fmt::print("x = {}\nAdresse von x = {}\n", *p, fmt::ptr(p));

    *p = 42;

    fmt::print("x wurde geaendert auf {}\n", x);

    // fmt::print("Mein name ist {}\n", name); 
    */
    /*

    double* d = new double(3.1415);

    fmt::print("Wert: {}\n", *d);

    delete d;

    */



    int value = 42;
    fmt::print("Erster Wert von value: {}\n", value);

    changeValueByParameter(value);
    fmt::print("Mittlerer Wert von value: {}\n", value);

    changeValueByPointer(&value);
    fmt::print("Letzter Wert von value: {}\n", value);




    return 0; /* exit gracefully*/
}

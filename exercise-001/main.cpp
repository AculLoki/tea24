#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"





void foo() {
    fmt::print(("Hello world from foo!\n"));
}



int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

     INSERT YOUR CODE HERE */





    /*
    int globalVar1 = 1;
    int globalVar2;
    static int globalVar3 = 3;      //Änderung in speicherbereich
    const int globalVar4 = 3;       //Keine Änderung

    fmt::print("Value of globalVar: {}\nAdresse: {}\n", globalVar1, fmt::ptr(&globalVar1));
    fmt::print("Value of globalVar: {}\nAdresse: {}\n", globalVar2, fmt::ptr(&globalVar2));
    fmt::print("Value of globalVar: {}\nAdresse: {}\n", globalVar3, fmt::ptr(&globalVar3));
    fmt::print("Value of globalVar: {}\nAdresse: {}\n", globalVar4, fmt::ptr(&globalVar4));
    */

/*
    int globalVar = 2;
    fmt::print("Value of globalVar: {}\nAdresse: {}\n", globalVar, fmt::ptr(&globalVar));

    int* heapVar = new int(3);
    fmt::print("Value of heapVar: {}\nAdresse: {}\n", *heapVar, fmt::ptr(heapVar));
    delete heapVar;

*/

    fmt::print("Adresse von foo: {}\n", fmt::ptr(&foo));
    

    return 0; /* exit gracefully*/
}

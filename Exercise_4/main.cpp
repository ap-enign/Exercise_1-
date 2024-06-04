#include <iostream>


int main (){

    /*
    const char* p_message {"Hello World!"};
    std::cout << "message: " << p_message << std::endl;
    std::cout << "Address of message (first charactor): " << *p_message << std::endl;

    // p_messages is ARRAY of pointer to const char 
    const char* p_messages[] {"Hello World! 1", "Hello World! 2", "Hello World! 3"};
    std::cout << "message1: " << p_messages[0] << std::endl;
    std::cout << "message2: " << p_messages[1] << std::endl;
    std::cout << "message3: " << p_messages[2] << std::endl;
    */

    //  Different pointers:
    int var1{33};                    // Raw variable
    const int var2{40};              // Const variable
    int* p_var1 {&var1};             // Raw pointer: Non const pointer to int
    const int* p_var2 {&var2};       // Pointer to const 
    const int* const p_var3 {&var2}; // Const pointer to const int  
    int* const p_var4 {&var1};       // Const pointer to int     

    // Arrays of const pointer to const char
    const char* const p_messages[] {"Hello World! 1", "Hello World! 2", "Hello World! 3"};
     
    // Array name can be treated as a pointer to first element in the array
    int scores[10] {11,22,33,4,5,6,7,8,9,10};
    int* p_score {scores};
    std::cout << "scores: " << scores << std::endl;
    std::cout << "p_score: " << p_score << std::endl;
    std::cout << "*scores: " << *scores << std::endl;
    std::cout << "scores[0]: " << scores[0] << std::endl;

    return 0;
}
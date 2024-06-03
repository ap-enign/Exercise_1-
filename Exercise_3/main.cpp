#include <iostream>

// void unique_numbers( int[], const unsigned int);
void unique_numbers( int /*array*/[] , const unsigned int /*col_size*/);

int main (){

    // calling the function

    int nums [] {12,3,21,3,8,2,21,4,3};
    
    unique_numbers(nums,std::size(nums));

    // expected result: 
    // The collection contains 6 unique numbers, they are : 12 3 21 8 2 4 

    return 0;
}

void unique_numbers( int numbers[], const unsigned int collection_size){
    //Write your code here

}
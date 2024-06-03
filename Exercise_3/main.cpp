#include <iostream>


void unique_numbers( int /*array*/[] , const unsigned int /*col_size*/);

int main (){

    // calling the function

    int nums [] {12,3,21,3,8,2,21,4,3};
    const unsigned int col_size = 9; 
    unique_numbers(nums,col_size);

    // expected result: 
    // The collection contains 6 unique numbers, they are : 12 3 21 8 2 4 

    return 0;
}

void unique_numbers( int array[] , const unsigned int col_size){
    for (int i = 0; i < col_size; i++) 
        {
            int j;
            for (j = 0; j < i; j++) 
            {
                if (array[i] == array[j]) 
                    break; 
            }
            if (i == j) 
                std::cout << array[i] << " "; 
        }
};

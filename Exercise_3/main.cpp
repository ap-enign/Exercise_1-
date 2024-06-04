#include <iostream>

void unique_numbers( int /*array*/[] , const unsigned int /*col_size*/);

int main (){

    // calling the function

    int nums [] {1,2,3,1,2,3};
    
    unique_numbers(nums,std::size(nums));

    // expected result: 
    // The collection contains 6 unique numbers, they are : 1 2 3  

    return 0;
}

void unique_numbers( int numbers[], const unsigned int collection_size){
    //Write your code here


    // *************************  SABER *************************
    // Create a new array to store the unique elements
    int uni_arr [collection_size];
    // Define a counter to check how many different elements are in the array
    int cnt {0};
    // Pick all elements one by one
    for (int cnt_org_arr=0; cnt_org_arr<collection_size; cnt_org_arr++)
    {
        // Check if the picked element is already printed
        int cnt_uni_arr;
        for (cnt_uni_arr=0; cnt_uni_arr < cnt_org_arr; cnt_uni_arr++)
           if (numbers[cnt_org_arr] == numbers[cnt_uni_arr]){
               break;
           }
        // If not printed earlier, then print it
        if (cnt_org_arr == cnt_uni_arr){
          uni_arr[cnt] = numbers[cnt_uni_arr];
          cnt++;
        }
    }
    std::cout << "The collection contains " << cnt << " unique numbers, they are : ";
    for(int elm =0; elm <cnt; elm++){
        std::cout << uni_arr[elm] << " ";
    }
    // ******************************

}
#include <iostream>
#include <unordered_set>

void unique_numbers(int /*array*/[], const unsigned int /*col_size*/);

int main()
{
    // calling the function

    int nums[]{1, 2, 3, 1, 2, 3};

    unique_numbers(nums, std::size(nums));

    // expected result:
    // The collection contains 3 unique numbers, they are : 1 2 3

    return 0;
}

void unique_numbers(int numbers[], const unsigned int collection_size)
{
    // Write your code here

    // *************************  SABER *************************
    // Create a new array to store the unique elements
    int uni_arr[collection_size];
    // Define a counter to check how many different elements are in the array
    int cnt{0};
    // Pick all elements one by one
    for (int cnt_org_arr = 0; cnt_org_arr < collection_size; cnt_org_arr++)
    {
        // Check if the picked element is already printed
        int cnt_uni_arr;
        for (cnt_uni_arr = 0; cnt_uni_arr < cnt_org_arr; cnt_uni_arr++)
            if (numbers[cnt_org_arr] == numbers[cnt_uni_arr])
            {
                break;
            }
        // If not printed earlier, then print it
        if (cnt_org_arr == cnt_uni_arr)
        {
            uni_arr[cnt] = numbers[cnt_uni_arr];
            cnt++;
        }
    }
    std::cout << "The collection contains " << cnt << " unique numbers, they are : ";
    for (int elm = 0; elm < cnt; elm++)
    {
        std::cout << uni_arr[elm] << " ";
    }
    // ******************************

    // *************************  AHMAD *************************
    // The array that is going to store unique data
    int unique_data[collection_size];
    unsigned int unique_counter{}; // Initialized to zero. Counts the elements we have in
                                   // the unique_data array

    for (unsigned int i{}; i < collection_size; ++i)
    {

        bool already_in{false};

        // See if  the element is not already in our unique_data
        for (unsigned int j{}; j < unique_counter; ++j)
        {

            // If we find that the element is already in our unique_data array,
            // we say that the element at current iteration is a duplicate and
            // break out of the loop
            if (unique_data[j] == numbers[i])
            {
                already_in = true;
                break;
            }
        }

        // If the element isn't already in, we put it in and increment the counter
        // Please understand the use of the postfix operator here.
        if (!already_in)
        {
            unique_data[unique_counter++] = numbers[i];
        }
    }
    std::cout << "The collection contains " << unique_counter << " unique numbers, they are : ";
    for (unsigned int i{}; i < unique_counter; ++i)
    {
        std::cout << unique_data[i] << " ";
    }
    // ******************************

    // ************************* ChatGPT *************************
    // Create a new array to store the uniqe elements
    std::unordered_set<int> unique_elements;

    // Iterate through the input array
    for (unsigned int i = 0; i < collection_size; ++i)
    {
        // Insert each element into the set (duplicates are automatically handled by the set)
        unique_elements.insert(numbers[i]);
    }

    // Output the unique elements
    std::cout << "The collection contains " << unique_elements.size() << " unique numbers, they are: ";
    for (const int &num : unique_elements)
    {
        std::cout << num << " ";
    }
    // ******************************
}
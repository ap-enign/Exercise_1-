#include <iostream>
#include <limits>
#include <string>

// Template function for input validation
template <typename T>
void getInput(T &);

// functions to get students information
void getStudentsInfo(std::string *, unsigned int &);
void averageCalculation(unsigned int &, unsigned int *, float **, std::string *);

// main function
int main()
{
    unsigned int number{0};
    std::cout << "Enter the number of students: ";
    getInput(number);

    std::string *studentsNameArray = new std::string[number];
    getStudentsInfo(studentsNameArray, number);

    delete[] studentsNameArray;
    studentsNameArray = nullptr;

    return 0;
}

template <typename T>
void getInput(T &input)
{
    while (true)
    {
        std::cin >> input;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
    }
}

void getStudentsInfo(std::string *studentsArray, unsigned int &numofStudents)
{
    std::cout << std::endl;
    unsigned int *numofSubjects = new unsigned int[numofStudents];
    float **grades = new float *[numofStudents];

    for (unsigned int num{0}; num < numofStudents; ++num)
    {
        std::cout << "Enter the name of student " << num + 1 << " : ";
        std::getline(std::cin, studentsArray[num]);

        std::cout << "Enter the number of subjects for " << studentsArray[num] << ": ";
        unsigned int n_subjects{numofSubjects[num]};
        getInput(n_subjects);

        grades[num] = new float[numofSubjects[num]];

        for (unsigned int sub_count{0}; sub_count < numofSubjects[num]; ++sub_count)
        {
            std::cout << "Subject " << sub_count + 1 << ": ";
            float subject_grade{grades[num][sub_count]};
            getInput(subject_grade);
        }
        std::cout << std::endl;
    }

    // Average Calculation
    averageCalculation(numofStudents, numofSubjects, grades, studentsArray);

    // Deallocation
    for (unsigned int i{0}; i < numofStudents; ++i)
    {
        delete[] grades[i];
        grades[i] = nullptr;
    }

    delete[] numofSubjects;
    numofSubjects = nullptr;
}

void averageCalculation(unsigned int &numofStudents, unsigned int *numofSubjects, float **grades, std::string *studentsArray)
{
    float totalSum{0.0f};
    for (unsigned int i{0}; i < numofStudents; ++i)
    {
        float sum{0.0f};
        for (unsigned int j{0}; j < numofSubjects[i]; ++j)
        {

            sum += grades[i][j];
        }
        float avg = sum / numofSubjects[i];
        totalSum += avg;
        std::cout << "Average grade for " << studentsArray[i] << ": " << avg << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Overall average grade: " << totalSum / numofStudents << std::endl;
}

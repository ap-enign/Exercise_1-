#include <iostream>
#include <vector>
#include <cstdarg>
#include <iomanip>

class my_class {
private:
    std::string* m_names;
    int size;
    std::vector<int>* m_number_of_courses;
    std::vector<float>* m_grades;
public:
    // Constructor
    my_class(int arraySize) {
        size = arraySize;
        m_names = new std::string[size]; // Allocate memory for the array of names
        for (int i = 0; i < size; ++i) {
            m_names[i] = "name"; // Initialize array of names elements to 0
        }
        m_grades = new std::vector<float>; // Allocate memory for the vector of grades
        m_number_of_courses = new std::vector<int>; // Allocate memory for the vector of courses' numbers
    }

    // Method to set a value in the array of names
    void set_value_names(int index, std::string value) {
        if (index >= 0 && index < size) {
            m_names[index] = value;
        } else {
            std::cerr << "Index out of bounds" << std::endl;
        }
    }

    // Method to set a value in the vector of numbers of couses
    void set_value_courses(int course_nums) {
        m_number_of_courses->push_back(course_nums);
    }

    // Method to set a value in the vector of grades
    void set_values_grades(float grade) {
        m_grades->push_back(grade);
    }

    // Method to get the array of names
    const std::string* get_value_names() const {
        return m_names;
    }

    // Method to get the vector of the numbers of courses
    const std::vector<int>& get_value_courses() const {
        return *m_number_of_courses;
    }

    // Method to get the vector of grades
    const std::vector<float>& get_value_grades() const {
        return *m_grades;
    }

    // Destructor
    ~my_class() {
        // Deallocate memory
        delete[] m_names; 
        delete m_grades; 
        delete m_number_of_courses;
    }
};

// Function to calculate the average of a vector by setting range
template<typename T>
double calculate_average_range(const std::vector<T>& vec, std::size_t start, std::size_t end) {

    double sum = 0.0;
    for (std::size_t i = start; i < end; ++i) {
        sum += vec[i];
    }
    return sum / (end - start);
}

int main() {

    //Defining inits for getting info from user
    int num_of_students{};
    std::string name{};
    int num_subject{};
    float grade{};
    int counter_k{};

    //Getting info from user
    std::cout<<"Enter the number of students: ";
    std::cin>>num_of_students;
    my_class class_students(num_of_students); 

    for(int iter_i=0; iter_i<num_of_students;iter_i++){
        std::cout<<"\n";
        std::cout<<"Enter the name of student "<<iter_i+1<<": ";
        std::cin>> name;
        class_students.set_value_names(iter_i,name);
        std::cout<<"Enter the number of subjects for "<<name<<": ";
        std::cin>>num_subject;
        class_students.set_value_courses(num_subject);
        std::cout<<"Enter the grades for "<<name<<": "<<std::endl;
        for(int iter_j=0; iter_j<num_subject;iter_j++){
            std::cout<<"Subject "<<iter_j+1<<": ";
            std::cin>> grade;
            class_students.set_values_grades(grade);
        }
    }

    std::cout<<"\n";
    
    // Showing the average of each student
    for(int iter_i=0; iter_i<num_of_students;iter_i++){
        
        std::cout<<std::fixed << std::setprecision(2)<<"Average grade for "<<class_students.get_value_names()[iter_i]<<": " <<calculate_average_range(class_students.get_value_grades(),counter_k, counter_k + class_students.get_value_courses()[iter_i]);
        std::cout<<std::endl;
        counter_k = class_students.get_value_courses()[iter_i];

    }

    std::cout<<"\n";

    // Showing the average of the class
    std::cout<<std::fixed << std::setprecision(2)<<"Overall average grade: "<<calculate_average_range(class_students.get_value_grades(),0,class_students.get_value_grades().size());

    std::cout<<"\n";

    return 0;
}

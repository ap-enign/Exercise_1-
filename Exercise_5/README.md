# Exercise

# Problem: Dynamic Student Grade Book

You are required to create a dynamic grade book for a class of students. The program should:

1. Ask the user for the number of students in the class.
2. For each student, ask for the number of subjects they are enrolled in.
3. Dynamically allocate memory to store the names of the students.
4. Dynamically allocate memory to store the grades of each student in each subject.
5. Compute and display the average grade for each student.
6. Display the overall average grade for the entire class.

# Requirements:

Use an array to store pointers to the names of the students.
Use a pointer array to store the grades of each student.
Use dynamically allocated memory to manage the student names and their grades.

# Example Execution:

Enter the number of students: 2

Enter the name of student 1: Alice
Enter the number of subjects for Alice: 3
Enter the grades for Alice:
Subject 1: 85
Subject 2: 90
Subject 3: 78

Enter the name of student 2: Bob
Enter the number of subjects for Bob: 2
Enter the grades for Bob:
Subject 1: 88
Subject 2: 92

Average grade for Alice: 84.33
Average grade for Bob: 90.00

Overall average grade: 87.17

# Hints:

Use 'new' and 'delete' to manage dynamic memory.
Remember to deallocate all dynamic memory to avoid memory leaks.
Consider creating helper functions to handle tasks like computing averages and deallocating memory.

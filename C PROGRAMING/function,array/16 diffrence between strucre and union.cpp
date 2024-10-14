#include <stdio.h>
struct Student {
    int rollNumber;
    float marks;
    char grade;
};
union Data {
    int rollNumber;
    float marks;
    char grade;
};

int main() {
    struct Student student1;
    student1.rollNumber = 101;
    student1.marks = 85.5;
    student1.grade = 'A';
    union Data data1;
    data1.rollNumber = 101;
    printf("Structure Data:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);
    printf("Grade: %c\n\n", student1.grade);
    printf("Union Data:\n");
    printf("Roll Number: %d\n", data1.rollNumber);

    data1.marks = 85.5; 
    printf("Marks: %.2f\n", data1.marks);

    data1.grade = 'A';  
	    printf("Grade: %c\n", data1.grade);

    return 0;
}


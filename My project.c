#include <stdio.h>
// Creating a structure for a student
struct Student
{
  char name[50];
  char reg_No[30];
  float marks;
};
int main() {
  // An array for 5 students
  struct Student students[5];
  // Get the details of each student from the user
  for (int i = 0; i < 5; i++)
    {
    printf("Enter the details of student %d:\n", i + 1);
    printf("Name: ");
    scanf("%s", students[i].name);
    printf("Reg No: ");
    scanf("%s", &students[i].reg_No);
    printf("Marks: ");
    scanf("%f", &students[i].marks);
  }
  // Print the details of each student along with their grade
  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Details of student %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("reg_No: %s\n", students[i].reg_No);
    printf("Marks: %.2f\n", students[i].marks);

    // Use a switch statement to assign a grade based on the student's marks
    char grade;
    switch ((int)students[i].marks / 10)
    {
      case 10:
      case 9:
        grade = 'A';
        break;
      case 8:
        grade = 'B';
        break;
      case 7:
        grade = 'C';
        break;
      case 6:
        grade = 'D';
        break;
      default:
        grade = 'F';
    }

    printf("Grade: %c\n\n", grade);
  }

  return 0;
}


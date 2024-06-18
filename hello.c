





#include <stdio.h>
#include <stdlib.h>

// دالة لتفريغ المخزن المؤقت للإدخال
void flushall() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int num_strings;
    int i, size;
    char **strings; // مصفوفة من المؤشرات إلى السلاسل النصية

    printf("Enter the number of strings: ");
    flushall();
    scanf("%d", &num_strings);

    // تخصيص الذاكرة للمصفوفة
    strings = (char **)malloc(num_strings * sizeof(char *));
    if (strings == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < num_strings; i++) {
        printf("Enter the size of string %d: ", i + 1);
        flushall();
        scanf("%d", &size);

        // تخصيص الذاكرة لكل سلسلة
        strings[i] = (char *)malloc((size + 1) * sizeof(char)); // +1 للحرف null
        if (strings[i] == NULL) {
            printf("Memory allocation failed for string %d.\n", i + 1);
            // تحرير الذاكرة المخصصة سابقًا في حالة فشل التخصيص
            for (int j = 0; j < i; j++) {
                free(strings[j]);
            }
            free(strings);
            return 1;
        }

        printf("Enter string %d: ", i + 1);
        flushall();
        fgets(strings[i], size + 1, stdin);

        // إزالة الحرف \n إذا كان موجودًا
        size_t len = strlen(strings[i]);
        if (len > 0 && strings[i][len - 1] == '\n') {
            strings[i][len - 1] = '\0';
        }
    }

    printf("\nStrings entered:\n");
    for (i = 0; i < num_strings; i++) {
        printf("String %d: %s\n", i + 1, strings[i]);
    }

    // تحرير الذاكرة المخصصة لكل سلسلة
    for (i = 0; i < num_strings; i++) {
        free(strings[i]);
    }
    // تحرير الذاكرة المخصصة للمصفوفة
    free(strings);

    return 0;
}
















// #include <stdio.h>
// #include <stdlib.h>

// typedef struct {
//     int id;
//     float gross_salary;
//     float tax;
//     float net_salary;
// } Employee;

// int main() {
//     int num_employees;
//     int i;
//         Employee* employees = (Employee*)malloc(num_employees * sizeof(Employee));

//     printf("Enter the number of employees: ");
//     scanf("%d", &num_employees);

//     // تخصيص الذاكرة للمصفوفة من الموظفين

//     // التحقق من نجاح تخصيص الذاكرة
//     if (employees == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     // قراءة بيانات كل موظف
//     for ( i = 0; i < num_employees; i++) {
//         printf("\nEnter details for employee %d:\n", i + 1);
//         printf("ID: ");
//         scanf("%d", &employees[i].id);
//         printf("Gross Salary: ");
//         scanf("%f", &employees[i].gross_salary);
//         printf("Tax: ");
//         scanf("%f", &employees[i].tax);

//         // حساب الراتب الصافي
//         employees[i].net_salary = employees[i].gross_salary - employees[i].tax;
//     }

//     // طباعة معرف وراتب كل موظف
//     printf("\nEmployee details:\n");
//     for ( i = 0; i < num_employees; i++) {
//         printf("ID: %d, Net Salary: %.2f\n", employees[i].id, employees[i].net_salary);
//     }

//     // تحرير الذاكرة المخصصة
//     free(employees);

//     return 0;
// }







// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10; // إضافة الرقم الأخير إلى المجموع
//         n /= 10;       // إزالة الرقم الأخير من العدد
//     }

//     printf("%d\n", sum); // طباعة مجموع الأرقام

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     for (int i = a; i <= b; i++) {
//         if (i >= 1 && i <= 9) {
//             if (i == 1) {
//                 printf("one\n");
//             } else if (i == 2) {
//                 printf("two\n");
//             } else if (i == 3) {
//                 printf("three\n");
//             } else if (i == 4) {
//                 printf("four\n");
//             } else if (i == 5) {
//                 printf("five\n");
//             } else if (i == 6) {
//                 printf("six\n");
//             } else if (i == 7) {
//                 printf("seven\n");
//             } else if (i == 8) {
//                 printf("eight\n");
//             } else if (i == 9) {
//                 printf("nine\n");
//             }
//         } else {
//             if (i % 2 == 0) {
//                 printf("even\n");
//             } else {
//                 printf("odd\n");
//             }
//         }
//     }

//     return 0;
// }







// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     if (n >= 1 && n <= 9) {
//         if (n == 1) {
//             printf("one\n");
//         } else if (n == 2) {
//             printf("two\n");
//         } else if (n == 3) {
//             printf("three\n");
//         } else if (n == 4) {
//             printf("four\n");
//         } else if (n == 5) {
//             printf("five\n");
//         } else if (n == 6) {
//             printf("six\n");
//         } else if (n == 7) {
//             printf("seven\n");
//         } else if (n == 8) {
//             printf("eight\n");
//         } else if (n == 9) {
//             printf("nine\n");
//         }
//     } else {
//         printf("Greater than 9\n");
//     }

//     return 0;
// }








// #include <stdio.h>

// int main() {
//     int a, b;
//     float x, y;

//     // Read two integers
//     scanf("%d %d", &a, &b);

//     // Read two floating point numbers
//     scanf("%f %f", &x, &y);

//     // Calculate sum and difference of integers
//     int int_sum = a + b;
//     int int_diff = a - b;

//     // Calculate sum and difference of floating point numbers rounded to 1 decimal place
//     float float_sum = x + y;
//     float float_diff = x - y;

//     // Print the sum and difference of integers
//     printf("%d %d\n", int_sum, int_diff);

//     // Print the sum and difference of floating point numbers rounded to 1 decimal place
//     printf("%.1f %.1f\n", float_sum, float_diff);

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     char ch;
//     char s[100];
//     char sen[100];

//     // قراءة الحرف
//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     // قراءة السلسلة النصية
//     printf("Enter a word: ");
//     scanf("%s", s);

//     // تنظيف المخزن المؤقت
//     getchar(); // لإزالة '\n' المتبقي في المخزن المؤقت بعد قراءة الكلمة

//     // قراءة الجملة باستخدام scanf والنمط %[^\n]
//     printf("Enter a sentence: ");
//     scanf("%[^\n]", sen);

//     // طباعة الحرف
//     printf("%c\n", ch);

//     // طباعة السلسلة النصية
//     printf("%s\n", s);

//     // طباعة الجملة
//     printf("%s\n", sen);

//     return 0;
// }







// #include<stdio.h>
// #include<conio.h>

// void swapByAddress(int *, int *);

// void main(void) {

//     int no1 = 1, no2 = 5;
//     clrscr();
//     swapByAddress(&no1, &no2);
//     printf("/t Number 1 : %d and Number 2 : %d", no1, no2);
//     getch();
// }

// void swapByAddress(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

















// #include<stdio.h>
// #include<conio.h>

// int power(int, int);

// int main(int argc, char** argv) {
//     int n1 = 2, n2 = 3;
//     int result;
//     clrscr();
//     result = power(n1,n2);
//     printf("\n\tpower(%d,%d) = %d",n1, n2, result);
//     getch();

// }
// int power(int base, int pow) {
//     int result = 1;
//     if (pow==0)
//     {
//         result = 1;
//     } else {
//         result = base*power(base,pow-1);

//     }
//     return result
    

// }
















// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <conio.h>

// typedef struct {
//     char studentName[100];
//     char course[100];
//     char track[100];
//     char period[100];
//     char institute[100];
//     char branch[100];
// } Student;

// void clrscr() {
//     system("cls || clear");
// }

// int main() {
//     int choice = 0;
//     Student student;
//     int hasStudentData = 0;
//     char buffer[100];
//     int selectedOption = 0;
//     int ch;

//     clrscr();

//     while (1) {
//         clrscr();
//         printf("Menu:\n");
//         printf("%s 1. New\n", selectedOption == 0 ? ">" : " ");
//         printf("%s 2. getStudentINFO\n", selectedOption == 1 ? ">" : " ");
//         printf("%s 3. Exit\n", selectedOption == 2 ? ">" : " ");

//         ch = _getch();
//         if (ch == 0 || ch == 224) {
//             switch (_getch()) {
//                 case 72: // Arrow up
//                     selectedOption = (selectedOption + 2) % 3;
//                     break;
//                 case 80: // Arrow down
//                     selectedOption = (selectedOption + 1) % 3;
//                     break;
//             }
//         } else if (ch == 13) { // Enter key
//             choice = selectedOption + 1;
//             clrscr();
//             switch (choice) {
//                 case 1:
//                     clrscr();

//                     printf("Enter the following details:\n");
//                     printf("Student Name: ");
//                     fgets(student.studentName, sizeof(student.studentName), stdin);
//                     student.studentName[strcspn(student.studentName, "\n")] = 0;

//                     printf("Course: ");
//                     fgets(student.course, sizeof(student.course), stdin);
//                     student.course[strcspn(student.course, "\n")] = 0;

//                     printf("Track: ");
//                     fgets(student.track, sizeof(student.track), stdin);
//                     student.track[strcspn(student.track, "\n")] = 0;

//                     printf("Period: ");
//                     fgets(student.period, sizeof(student.period), stdin);
//                     student.period[strcspn(student.period, "\n")] = 0;

//                     printf("Institute: ");
//                     fgets(student.institute, sizeof(student.institute), stdin);
//                     student.institute[strcspn(student.institute, "\n")] = 0;

//                     printf("Branch: ");
//                     fgets(student.branch, sizeof(student.branch), stdin);
//                     student.branch[strcspn(student.branch, "\n")] = 0;
//                     hasStudentData = 1;
//                     clrscr();
//                     break;
//                 case 2:
//                     if (hasStudentData) {
//                         printf("Enter Student Name to Search: ");
//                         fgets(buffer, sizeof(buffer), stdin);
//                         buffer[strcspn(buffer, "\n")] = 0;

//                         if (strcmp(buffer, student.studentName) == 0) {
//                             printf("Student Name: %s\n", student.studentName);
//                             printf("Course: %s\n", student.course);
//                             printf("Track: %s\n", student.track);
//                             printf("Period: %s\n", student.period);
//                             printf("Institute: %s\n", student.institute);
//                             printf("Branch: %s\n", student.branch);
//                         } else {
//                             printf("Student not found.\n");
//                         }
//                     } else {
//                         printf("No student data available. Please enter student data first.\n");
//                     }
//                     break;
//                 case 3:
//                     printf("Exiting program.\n");
//                     exit(0);
//                 default:
//                     printf("Invalid choice. Please select a number between 1 and 3.\n");
//                     break;
//             }

//             printf("Press Enter to return to the menu...");
//             while(getchar() != '\n'); // Wait for Enter key
//         }
//     }

//     return 0;
// }

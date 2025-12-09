#include <stdio.h>
#include <string.h>

/*
    How Arrays Help Efficiently Manage Attendance:

    Arrays are fundamental data structures that allow us to store a collection of elements of the same type in contiguous memory locations. In this attendance management program, they offer several key advantages:

    1.  Structured Storage: Instead of declaring individual variables for each employee's name and attendance (e.g., `name1`, `attendance1`, `name2`, `attendance2`), we can use arrays.
        -   `char names[N][50];` creates a single variable that holds up to N employee names.
        -   `int attendance[N];` creates a single variable to hold the attendance status for all N employees.

    2.  Implicit Data Linking: The most powerful feature here is the use of the array index. The index `i` acts as a link between the employee's name and their attendance status. `names[i]` corresponds directly to `attendance[i]`. This parallel structure makes it easy to look up an employee's attendance or find the name of an employee with a specific attendance status.

    3.  Scalability and Efficiency with Loops: Operations like marking attendance, checking for absentees, or displaying the full list can be performed on all employees using a simple `for` loop that iterates from 0 to N-1. This makes the code concise and highly scalable. The same logic works for 3 employees or 3000 employees without changing the code structure, only the value of N. Without arrays, we would have to write separate code for each employee, which would be repetitive and unmanageable for a large number of employees.
*/

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    clear_input_buffer(); // Consume the newline character left by scanf

    if (n <= 0) {
        printf("Number of employees must be positive.\n");
        return 1;
    }

    char names[n][50];
    int attendance[n];
    int i;

    // Input employee names and initialize attendance to 0 (Absent)
    for (i = 0; i < n; i++) {
        printf("Enter name of employee %d: ", i + 1);
        fgets(names[i], 50, stdin);
        // Remove the newline character that fgets might add
        names[i][strcspn(names[i], "\n")] = 0;
        attendance[i] = 0; // Default to Absent
    }

    int choice;
    do {
        printf("\nEmployee Attendance Management System\n");
        printf("1. Check absentees\n");
        // clear_input_buffer(); // Consume the newline character - This line is commented out because it's causing an issue.


        printf("2. Mark attendance for an employee\n");
        printf("3. Display all employee attendance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clear_input_buffer(); // Consume the newline character

        switch (choice) { 



            case 1: {
                printf("\nList of absent employees:\n");
                int absent_count = 0;
                for (i = 0; i < n; i++) {
                    if (attendance[i] == 0) {
                        printf("%s\n", names[i]);
                        absent_count++;
                    }
                }
                if (absent_count == 0) {
                    printf("No employees are absent.\n");
                }
                break;
            }
            case 2: {
                char name_to_mark[50];
                int found_index = -1;

                printf("Enter employee name to mark attendance: ");
                fgets(name_to_mark, 50, stdin);
                name_to_mark[strcspn(name_to_mark, "\n")] = 0; // Remove newline

                for (i = 0; i < n; i++) {
                    if (strcmp(names[i], name_to_mark) == 0) {
                        found_index = i;
                        break;
                    }
                }

                if (found_index != -1) {
                    int status;
                    printf("Enter attendance for %s (1 for Present, 0 for Absent): ", names[found_index]);
                    scanf("%d", &status);
                    clear_input_buffer();

                    if (status == 1 || status == 0) {
                        attendance[found_index] = status;
                        printf("%s has been marked as %s.\n", names[found_index], status == 1 ? "Present" : "Absent");
                    } else {
                        printf("Invalid attendance status. Please enter 1 or 0.\n");
                    }
                } else {
                    printf("Employee '%s' not found.\n", name_to_mark);
                }
                break;
            }
            case 3: {
                printf("\nEmployee Attendance List:\n");
                for (i = 0; i < n; i++) {
                    printf("% -20s - %s\n", names[i], attendance[i] == 1 ? "Present" : "Absent");
                }
                break;
            }
            case 4:
                printf("Exiting program. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
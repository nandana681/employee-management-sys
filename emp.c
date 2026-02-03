#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[10];
    int n = 0, choice, i, eid;
    float sal;

    while (1) {
        printf("\n1.Add Employee 2.View Employees 3.Update Salary 4.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Employee ID: ");
            scanf("%d", &emp[n].id);
            printf("Name: ");
            scanf("%s", emp[n].name);
            printf("Salary: ");
            scanf("%f", &emp[n].salary);
            n++;
        }
        else if (choice == 2) {
            for (i = 0; i < n; i++)
                printf("%d %s %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
        }
        else if (choice == 3) {
            printf("Employee ID to update: ");
            scanf("%d", &eid);
            for (i = 0; i < n; i++)
                if (emp[i].id == eid) {
                    printf("New Salary: ");
                    scanf("%f", &sal);
                    emp[i].salary = sal;
                }
        }
        else if (choice == 4) {
            break;
        }
    }
    return 0;
}
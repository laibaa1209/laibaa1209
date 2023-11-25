#include <stdio.h>

struct Employee {
    int employee_id;
    char name[50];
    float salary;
};

struct Organization {
    char organisation_name[50];
    char organisation_number[15];
    struct Employee emp; // Nested structure
};

int main() {
    struct Organization org;
    org.emp.employee_id = 127;
    strcpy(org.emp.name, "Linus Sebastian");
    org.emp.salary = 400000.0;

    strcpy(org.organisation_name, "NU-Fast");
    strcpy(org.organisation_number, "NUFAST123ABC");

    printf("The size of structure organisation: %lu\n", sizeof(struct Organization));
    printf("Organisation Name: %s\n", org.organisation_name);
    printf("Organisation Number: %s\n", org.organisation_number);
    printf("Employee id: %d\n", org.emp.employee_id);
    printf("Employee name: %s\n", org.emp.name);
    printf("Employee Salary: %.2f\n", org.emp.salary);

    return 0;
}
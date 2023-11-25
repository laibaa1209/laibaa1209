#include <stdio.h>
#include <string.h>


struct EnginePart {
    char serialNumber[4];
    int yearOfManufacture;
    char material[20];
    int quantityManufactured;
};

int main() {
    struct EnginePart parts[] = {
        {"AA0", 2020, "Steel", 100},
        {"BB1", 2021, "Aluminum", 150},
        {"BB2", 2019, "Titanium", 120},
        {"CC5", 2020, "Plastic", 80},
        {"CC6", 2021, "Steel", 200},
        {"DD3", 2018, "Aluminum", 90},
        {"FF9", 2022, "Titanium", 180}
    };

    printf("Parts with serial numbers between BB1 and CC6:\n");
    for (int i = 0; i < sizeof(parts) / sizeof(parts[0]); i++) {
        if (strcmp(parts[i].serialNumber, "BB1") >= 0 && strcmp(parts[i].serialNumber, "CC6") <= 0) {
            printf("Serial Number: %s\n", parts[i].serialNumber);
            printf("Year of Manufacture: %d\n", parts[i].yearOfManufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantityManufactured);
            printf("\n");
        }
    }

    return 0;
}
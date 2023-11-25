#include <stdio.h>

#define MAX_BRANCHES 3  
#define MAX_PHONES 2   
int main() {
    int bills[MAX_BRANCHES][MAX_PHONES];
    int totalBill = 0;
    int maxBranchID, maxBill = 0;
    int maxBranchIDMobileID[2] = {0};

   
    for (int i = 0; i < MAX_BRANCHES; i++) {
        printf("Enter bills for Branch %d:\n", i + 1);
        for (int j = 0; j < MAX_PHONES; j++) {
            printf("Enter bill for Mobile Phone %d: ", j + 1);
            scanf("%d", &bills[i][j]);
            totalBill += bills[i][j];

            if (bills[i][j] > maxBill) {
                maxBill = bills[i][j];
                maxBranchID = i + 1; 
                maxBranchIDMobileID[0] = i + 1;
                maxBranchIDMobileID[1] = j + 1;
            }
        }
    }


    printf("\nTotal bill for all branches: %d\n", totalBill);

    printf("\nTotal bill for each branch:\n");
    for (int i = 0; i < MAX_BRANCHES; i++) {
        int branchTotal = 0;
        for (int j = 0; j < MAX_PHONES; j++) {
            branchTotal += bills[i][j];
        }
        printf("Branch %d: %d\n", i + 1, branchTotal);
    }

 
    printf("\nBranch ID where maximum bill arrived: %d\n", maxBranchID);

 
    printf("Branch and Mobile Phone IDs where bill is highest: Branch %d, Mobile Phone %d\n", maxBranchIDMobileID[0], maxBranchIDMobileID[1]);

    return 0;
}
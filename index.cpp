#include <stdio.h>

// Function to search for a registration number in the array and return its index
int searchRegNo(int regNos[], int size, int regNo) {
    for (int i = 0; i < size; i++) {
        if (regNos[i] == regNo) {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int regNos[] = {1001, 1002, 1003, 1004, 1005};
    int size = sizeof(regNos) / sizeof(regNos[0]);
    int regNoToSearch;
    
    printf("Enter the registration number to search: ");
    scanf("%d", &regNoToSearch);
    
    int index = searchRegNo(regNos, size, regNoToSearch);
    
    if (index != -1) {
        printf("Registration number %d found at index %d.\n", regNoToSearch, index);
    } else {
        printf("Registration number %d not found.\n", regNoToSearch);
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int accessionNumber;
    char author[50];
    char title[100];
    int isIssued; 
};

int main() {
    struct Book library[MAX_BOOKS];
    int numBooks = 0; 

    int choice;

    do {
        printf("\nLibrary Menu:\n");
        printf("1 - Display book information\n");
        printf("2 - Add a new book\n");
        printf("3 - Display all the books of a particular author\n");
        printf("4 - Display the number of books of a particular title\n");
        printf("5 - Display the total number of books in the library\n");
        printf("6 - Issue a book\n");
        printf("0 - Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter accession number of the book: ");
                int accession;
                scanf("%d", &accession);

                int found = 0;
                for (int i = 0; i < numBooks; i++) {
                    if (library[i].accessionNumber == accession) {
                        found = 1;
                        printf("Book Information:\n");
                        printf("Accession Number: %d\n", library[i].accessionNumber);
                        printf("Author: %s\n", library[i].author);
                        printf("Title: %s\n", library[i].title);
                        printf("Status: %s\n", library[i].isIssued ? "Issued" : "Available");
                        break;
                    }
                }

                if (!found) {
                    printf("Book with accession number %d not found.\n", accession);
                }
                break;

            case 2: 
                if (numBooks < MAX_BOOKS) {
                    printf("Enter details for the new book:\n");
                    printf("Accession Number: ");
                    scanf("%d", &library[numBooks].accessionNumber);
                    printf("Author: ");
                    scanf("%s", library[numBooks].author);
                    printf("Title: ");
                    scanf("%s", library[numBooks].title);
                    library[numBooks].isIssued = 0; // Set the book as not issued
                    numBooks++;
                    printf("Book added successfully.\n");
                } else {
                    printf("Library is full. Cannot add more books.\n");
                }
                break;

            case 3: 
                printf("Enter author name: ");
                char authorSearch[50];
                scanf("%s", authorSearch);

                printf("Books by %s:\n", authorSearch);
                for (int i = 0; i < numBooks; i++) {
                    if (strcmp(library[i].author, authorSearch) == 0) {
                        printf("%s\n", library[i].title);
                    }
                }
                break;

            case 4: 
                printf("Enter title: ");
                char titleSearch[100];
                scanf("%s", titleSearch);

                int bookCount = 0;
                for (int i = 0; i < numBooks; i++) {
                    if (strcmp(library[i].title, titleSearch) == 0) {
                        bookCount++;
                    }
                }
                printf("Number of books with title %s: %d\n", titleSearch, bookCount);
                break;

            case 5: 
                printf("Total number of books in the library: %d\n", numBooks);
                break;

            case 6: 
                printf("Enter accession number of the book to be issued: ");
                int accessionToIssue;
                scanf("%d", &accessionToIssue);

                found = 0;
                for (int i = 0; i < numBooks; i++) {
                    if (library[i].accessionNumber == accessionToIssue) {
                        found = 1;
                        if (library[i].isIssued) {
                            printf("Book is already issued.\n");
                        } else {
                            library[i].isIssued = 1;
                            printf("Book issued successfully.\n");
                        }
                        break;
                    }
                }

                if (!found) {
                    printf("Book with accession number %d not found.\n", accessionToIssue);
                }
                break;

            case 0: // Exit
                printf("Exiting the Library System.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
#include <stdio.h>
#include <string.h>
#define max 200

int main() {


    char title[max][200];
char author[max][100];
char isbn[max][200];
int book_count = 0;



    int choice;
    printf("Library Management System\n");

    while (1) {
        printf(" Add Book\n");
        printf("2. Search Book\n");
        printf("3. View All Books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        if (choice == 1) {
            if (book_count >= max) {
                printf("MORE BOOKS CAN'T BE ADDED LIBRARY IS FULL.\n");
                continue;
            }
            printf(" Enter title: ");
            gets(title[book_count]);

            printf("Enter Author: ");
            gets(author[book_count]);

            printf("Enter ISBN: ");
            gets(isbn[book_count]);

            book_count++;
            printf("Book added successfully!\n");
            printf("-------------\n");

        } else if (choice == 2) {
            char search[200];
            int found = 0;

            printf("Enter book title or author to search: \n");
            gets(search);

            for (int i = 0; i < book_count; i++) {
                if (strcmp(title[i], search) == 0 ||strcmp(author[i], search) == 0) {
                    printf("Book Found:\n");
                    printf("Title: %s\n", title[i]);
                    printf("Author: %s\n", author[i]);
                    printf("ISBN:%s\n", isbn[i]);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book not found!\n");
            }
            printf("--------------\n");

        } else if (choice == 3) {
            printf("\nLibrary Catalog\n");
            printf("----------------------\n");
            if (book_count == 0) {
                printf("No Books in the library.\n");
            } else {
                for (int i = 0; i < book_count; i++) {
                    printf("Title: %s\n", title[i]);
                    printf("Author: %s\n", author[i]);
                    printf("ISBN: %s\n", isbn[i]);
                }
            }
            printf("---------------\n");

        } else if (choice == 4) {
            printf("Exiting the system...\n");
            printf("Thank you for using the Library Management System!\n");
            return 0;
        } else {
            printf("Invalid choice\n");
        }
    }
}

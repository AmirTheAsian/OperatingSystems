#include <stdio.h>
#include <string.h>

// Define struct
struct Person {
    char name[50];
    int age;
};

// Function to add and view contacts
int main() {
    struct Person p;

    // Add a contact
    strcpy(p.name, "Alice");
    p.age = 25;

    // Save contact to file
    FILE *file = fopen("contacts.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Name: %s, Age: %d\n", p.name, p.age);
    fclose(file);

    // View contact
    printf("Contact added:\n");
    printf("Name: %s, Age: %d\n", p.name, p.age);

    return 0;
}

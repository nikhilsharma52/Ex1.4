#include <stdio.h>

int main() {
    char *name = "Rajkumar Chihar";
    char *location = "Agra";
    char *university = "Chandigarh University";
    char *program = "BE-CSE";
    float cgpa = 8.2;
    char *skills[] = {"Python", "C++", "Java", "ReactJS", "Flutter", "NodeJS"};

    printf("------------------------------\n");
    printf("          RESUME\n");
    printf("------------------------------\n\n");

    printf("Name: %s\n", name);
    printf("Location: %s\n\n", location);

    printf("Education:\n");
    printf("  University: %s\n", university);
    printf("  Program: %s\n", program);
    printf("  CGPA: %.1f\n\n", cgpa);

    printf("Technical Skills:\n");
    for (int i = 0; i < sizeof(skills) / sizeof(skills[0]); i++) {
        printf("  - %s\n", skills[i]);
    }

    return 0;
}

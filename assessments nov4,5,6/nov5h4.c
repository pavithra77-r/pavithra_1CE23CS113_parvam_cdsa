#include<stdio.h>
char determine_grade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

int main() {
    int score;
    printf("Enter score (0-100): ");
    scanf("%d", &score);
    
    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter a score between 0 and 100.");
    } else {
        printf("Grade: %c", determine_grade(score));
    }
    
    return 0;
}
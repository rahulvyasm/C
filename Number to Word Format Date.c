#include <stdio.h>

int main(void) {
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
 // Input
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
  switch (month) {
    case 1:
    printf("January");
    break;
    case 2:
    printf("February");
    break;
    case 3:
    printf("March");
    break;
    case 4:
    printf("April");
    break;
    case 5:
    printf("May");
    break;
    case 6:
    printf("June");
    break;
    case 7:
    printf("July");
    break;
    case 8:
    printf("August");
    break;
    case 9:
    printf("September");
    break;
    case 10:
    printf("October");
    break;
    case 11:
    printf("November");
    break;
    case 12:
    printf("December");
    break;
    default:
    printf("Invalid Input");
    break;
  }

  // Print the day
switch (day) {
  case 1: case 21: case 31:
  printf("\t%dst", day);
  break;
  case 2: case 22:
  printf("\t%dnd", day);
  break;
  case 3: case 23:
  printf("\t%drd", day);
  break;
  default:
  printf("\t%dth", day);
  break;
}

  // Print the year
  printf(", %d\n", year);
  printf("\nCreated by RAHUL VYAS.M\n");
  
  
  return 0;
}
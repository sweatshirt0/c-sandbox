#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
  float temp;
  char mes;

  printf("\n\nHello, thank you for using my temparature converter!\n\n");
  printf("What will you be converting from, type F or C respectively.\n");
  printf("\n.> ");
  scanf("%c", &mes);
  if (mes == 'F') {
    printf("\nYou have selected Farenheit.\n\n");
    printf("What is the value to convert? Enter a number: ");
    scanf("%f", &temp);
    printf("\n\nThe value you have entered is %.2f Farenheit.\n\n", temp);
    printf("Here is the conversion in Celsius: ");
    temp = ((temp - 32) * 5/9);
    printf("%.2f C.\n\n", temp);
    printf("Thank you for using Evil Corp Software.\n\n");
  } else if (mes == 'C') {
    printf("\nYou have selected Celsius.\n\n");
    printf("What is the value to convert? Enter a number: ");
    scanf("%f", &temp);
    printf("\n\nThe value you have entered is %.2f Celsius.\n\n", temp);
    printf("Here is the conversion in Farenheit: ");
    temp = (temp * 9/5) + 32;
    printf("%.2f F.\n\n", temp);
    printf("Thank you for using Evil Corp Software.\n\n");
  } else {
    printf("\nYou are trolling; good bye.\n\n");
  }
  return 0;
}

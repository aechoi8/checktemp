#include <stdio.h>

int main(){

  char hot[] = "hot";
  char mild[] = "mild";
  char cold[] = "cold";

  int temp;
  
  printf("Enter the current temp: ");
  scanf("%d", &temp);

  if(temp >= 70) {
    printf("it's %s\n", hot);
  } else if (temp > 30 && temp < 70) {
    printf("it's %s\n", mild);
  } else {
    printf("it's %s\n", cold);
  }

  return 0;
}

#include <stdio.h>
int main() {
  printf("RA2211042010036");
  int avl_quantity, mess_count;
  scanf("%d %d", &avl_quantity, &mess_count); 
  int food_for_each_mess = avl_quantity/mess_count;
  int remaining_food = avl_quantity%mess_count; 
  printf("%d ", food_for_each_mess); 
  printf("%d", remaining_food); 
}

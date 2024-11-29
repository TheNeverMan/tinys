#include <stdio.h>

#include "../tinys.h"

int main()
{
  TinyS* Int_Stack = Create_New_Empty_Stack();
  int index = 0;
  while(index < 9)
  {
    int* tmp = malloc(sizeof(int));
    *tmp = index++;
    Push_To_Stack(Int_Stack,tmp);
  }
  printf("Stack Length: %zu\n{", Get_Stack_Length(Int_Stack));

  while(!Is_Stack_Empty(Int_Stack))
  {
    int* el = (int*) Pop_From_Stack(Int_Stack);
    printf("%i, ",*el);
    free(el);
  }
  printf("}\n Stack Length: %zu\n", Get_Stack_Length(Int_Stack));
  free(Int_Stack);
  return 0;
}

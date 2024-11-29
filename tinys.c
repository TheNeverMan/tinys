#include "tinys.h"

TinyS* Create_New_Empty_Stack()
{
  TinyS* out = malloc(sizeof(TinyS));
  out->Last = NULL;
  return out;
}

size_t Get_Stack_Length(TinyS* Stack)
{
  TinyS_Element* Iterator;
  size_t out = 0;
  assert(Stack != NULL);
  Iterator = Stack->Last;
  while(Iterator)
  {
    out++;
    Iterator = Iterator->Prev;
  }
  return out;
}

void Push_To_Stack(TinyS* Stack, void* Data)
{
  TinyS_Element* New;
  assert(Stack != NULL);
  New = malloc(sizeof(TinyS_Element));
  New->Data = Data;
  New->Prev = Stack->Last;
  Stack->Last = New;
}

void* Pop_From_Stack(TinyS* Stack)
{
  TinyS_Element* Last;
  void* out;
  assert(Stack != NULL);
  if(!Stack->Last)
    return NULL;
  Last = Stack->Last;
  out = Last->Data;
  Stack->Last = Stack->Last->Prev;
  free(Last);
  return out;
}

bool Is_Stack_Empty(TinyS* Stack)
{
  return (Stack->Last == NULL) ? TRUE : FALSE;
}

#pragma once
#include<stdlib.h>
#include<assert.h>

#define FALSE 0
#define TRUE 255

typedef struct TinyS_Element
{
  void* Data;
  struct TinyS_Element* Prev;
} TinyS_Element;

typedef struct TinyS
{
  TinyS_Element* Last;
} TinyS;

typedef int bool;

TinyS* Create_New_Empty_Stack();
void Push_To_Stack(TinyS* Stack, void* Data);
void* Pop_From_Stack(TinyS* Stack);
size_t Get_Stack_Length(TinyS* Stack);
bool Is_Stack_Empty(TinyS* Stack);

#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
#include<windows.h>

//struct of the symbol Table
typedef struct
{
  char name[20];
  char code[20];
  char type[20];
} STType;

STType symbolTable[100];
int counterST = 0;

//search function to see if the entity already exist in the symbol table
int search(char entity[])
{
  int counter = 0;
  while (counter < counterST)
  {
    //check if the entity exist
    if ( strcmp(entity,symbolTable[counter].name) == 0 )
    {
      //if exist return the position
      return counter;
    }
    counter++;
  }
  // return -1 because we looped over the table and we didn't find anything similar to the entity
  return -1;
}

// function to insert the entity if it doesn't exist 
void insert(char entity[], char code[])
{
  //check if the entity already exist
  if(search(entity) == -1)
  {
    //we get here in case that the entity doesn't exist, we need to copy the function parameter on the table
    strcpy(symbolTable[counterST].name, entity);
    strcpy(symbolTable[counterST].code, code);
    //move to the next case on the table
    counterST++;
  }
}

//function to display the symbol table
void displaySymbolTable(){
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
  printf("\n******************* SYMBOL TABLE *******************\n");
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
  printf("\n----------------------------------------------------\n");
}
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

//struct of the symbol Table
typedef struct
{
  char name[20];
  char code[20];
  char type[20];
  float value;
} STType;

STType symbolTable[1000];
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
void insert(char entity[], char code[], char type[], float value)
{
  //check if the entity already exist
  if(search(entity) == -1)
  {
    //we get here in case that the entity doesn't exist, we need to copy the function parameter on the table
    strcpy(symbolTable[counterST].name, entity);
    strcpy(symbolTable[counterST].code, code);
    strcpy(symbolTable[counterST].type, type);
    symbolTable[counterST].value = value;
    //move to the next case on the table
    counterST++;
  }
}

//function to insert type 
void insertType(char entityName[], char type[])
{
  int position;
  //we need to search for the position first
  position = search(entityName);
  //check if the entity exist
  if(position != -1){
    //the entity exist so we insert their type here
    strcpy(symbolTable[position].type,type);
  }
}

//function to check the double declaration
int doubleDeclaration(char entityName[]){
  int position;
  //we need to search for the position first
  position = search(entityName);
  if(position != -1){
  //the entity exist so we check if their type exist
    if(strcmp(symbolTable[position].type,"")==0){
      //here we find that the entity doesn't have a type so its not double declared
      return 0;
    }else{
      //here the entity have a type so its double declared
      return -1;
    }
  }
}

//function to insert the value on the symbol table
void insertValue(char entityName[], char valueAsString[], char type[])
{
  int position;
  //we need to search for the position first
  position = search(entityName);
  if(position != -1){
    if (strcmp(type,"int")==0)
    {
      // if the type is an integer
      symbolTable[position].value = atoi(valueAsString);
    }else{
      if(strcmp(type,"float")==0)
      {
        // if the type is an float
        symbolTable[position].value = atof(valueAsString);
      }else{
       if(strcmp(type,"bool")==0)
       {
          // if the type is an integer
          if (strcmp(valueAsString,"true"))
          {
            // if the bool is true
            //insert 1 for true
            symbolTable[position].value = 1;
          }else{
            // if the bool is false
            //insert -1 for false
            symbolTable[position].value = -1;
          }
       } 
       //we dont treat the case of a char cause we can't insert a char value into a float
      }
    }
  }  
}
//function to display the symbol table
void displaySymbolTable()
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
  printf("\n******************************* SYMBOL TABLE *******************************\n");
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
  printf("------------------------------------------------------------------------------\n");
  printf("| ENTITY NAME |   ENTITY CODE      |      ENTITY TYPE   |      ENTITY VALUE   |\n");
  printf("|-------------|--------------------|--------------------|---------------------|\n");
  int counter = 0;
  while (counter < counterST)
  {
    printf("|  %8s   |   %12s     |      %8s      |      %9.3f      |\n", symbolTable[counter].name, symbolTable[counter].code, symbolTable[counter].type, symbolTable[counter].value);
    printf("|-------------|--------------------|--------------------|---------------------|\n");
    counter++;
  }
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

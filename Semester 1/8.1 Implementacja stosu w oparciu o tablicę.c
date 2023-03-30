#include <stdio.h>
#include <stdlib.h>
#define MAX 10 
int stack[MAX]; 
int top; 


void display(int stack[]) {
	int i;
  if (top == 0) {
    printf("Stos jest pusty\n");
  } else {
    printf("Zawartosc stosu: ");
    for (i = top-1; i >= 0; i--) {
      printf("%d ", stack[i]);
    }
    printf("\nWskaznik stosu top: %d\n", top);
  }
}


void push(int stack[], int elem) {
  if (top == MAX) {
    printf("Stos jest pelny, nie mo¿na dodac elementu %d\n", elem);
  } else {
    stack[top] = elem;
    top++;
  }
}


int pop(int stack[]) {
  if (top == 0) {
    printf("Stos jest pusty, nie mo¿na usunac elementu\n");
    return -1;
  } else {
    top--;
    int elem = stack[top];
    printf("Usunieto element %d ze stosu\n", elem);
    return elem;
  }
}

int is_empty() {
  return top == 0;
}

void main() {
  int item = 0;
  int choice = 0;
  top = 0;
  while(1) {
    printf("Wybierz (1: pokaz (display), 2: wstaw (push), 3: usun (pop)), 4: Koniec..:");
    scanf("%d",&choice);
    switch(choice) {
      case 1: display(stack); break;
      case 2:
        printf("podaj liczbe ktora mam wstawic :");
        scanf("%d",&item);
        printf(" wstawiam %d\n",item);
        push(stack,item);
        break;
      case 3: pop(stack); break;
      case 4: exit(0);
      default:
        printf("\nZla opcja");
        break;
    }
  }
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100

char stack[max];
char infix[max],postfix[max];
int top=-1;

void conversion(char*);
void push(char);
char pop();
int isEmpty();
int precedance(char);

void main(){
    gets(infix);
    conversion(infix);
    int i=0;
    while(postfix[i]!='\0'){
        printf("%c",postfix[i]);
        i++;
    }
}

void conversion(char *infix){
    int j=0;
    char symbol,next;
    for(int i=0;infix[i]!='\0';i++){
        symbol=infix[i];
        switch(symbol){
            case '(':
            push(symbol);
            break;
            case ')':
            while((next=pop())!='('){
                postfix[j]=next;
                j++;
                break;
            }
            break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
            while(!isEmpty() && precedance(stack[top])>=precedance(symbol) ){
                postfix[j++]=pop();
            }
            push(symbol);
            break;
            default:
                postfix[j++]=symbol;
                break;
        }
    }
    while(!isEmpty()) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0'; 
}

int precedance(char symbol){
    switch(symbol){
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default :
            return 0;
    }
}
void push(char symbol){
    if (top==max -1)
    {
        printf("Stack overflowed");
        exit(1);
    } 
    top++;
    stack[top]=symbol;
}
char pop(){
    if(top==-1){
        printf("Stack empty");
        exit(1);
    }
    char c=stack[top];
    top--;
    return c;
}
int isEmpty(){
    if(top==-1)
    return 1;
    else
    return 0;
}
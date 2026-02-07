#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char c)
 {
    top++;
    stack[top] = c;
}

char pop() {
    char c = stack[top];
    top--;
    return c;
}

int is_match(char open, char close) {
    if (open == '(' && close == ')')
        return 1;
    else if (open == '[' && close == ']')
        return 1;
    else if (open == '{' && close == '}')
        return 1;
    else
        return 0;
}

int check_balanced(char expr[]) {
    int i;
    top = -1;
    
    for (i = 0; i < strlen(expr); i++) {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            push(expr[i]);
        }
        else if (expr[i] == ')' || expr[i] == ']' || expr[i] == '}') {
            if (top == -1)
                return 0;
            
            char last = pop();
            if (is_match(last, expr[i]) == 0)
                return 0;
        }
    }
    
    if (top == -1)
        return 1;
    else
        return 0;
}

int main() {
    char expr[100];
    
    printf("Enter expression: ");
    gets(expr);
    
    printf("\nExpression is %s\n", expr);
    
    if (check_balanced(expr) == 1)
        printf("Balanced");
    else
        printf("Not Balanced");
    
    return 0;
}
#include <stdio.h>
#include <string.h>

char stack[50];
int top = -1;

void push(char c) {
    top++;
    stack[top] = c;
}

char pop() {
    char c = stack[top];
    top--;
    return c;
}

int priority(char c) {
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return 0;
}

void convert(char infix[], char postfix[]) {
    int i, j = 0;
    top = -1;
    
    for (i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];
        
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9') {
            postfix[j] = ch;
            j++;
        }
        else if (ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            while (stack[top] != '(') {
                postfix[j] = pop();
                j++;
            }
            pop();
        }
        else {
            while (top != -1 && priority(stack[top]) >= priority(ch)) {
                postfix[j] = pop();
                j++;
            }
            push(ch);
        }
    }
    
    while (top != -1) {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
}

int numstack[50];
int numtop = -1;

void pushnum(int n) {
    numtop++;
    numstack[numtop] = n;
}

int popnum() {
    int n = numstack[numtop];
    numtop--;
    return n;
}

int calculate(char postfix[]) {
    int i;
    numtop = -1;
    
    for (i = 0; postfix[i] != '\0'; i++) {
        char ch = postfix[i];
        
        if (ch >= '0' && ch <= '9') {
            pushnum(ch - '0');
        }
        else {
            int b = popnum();
            int a = popnum();
            
            if (ch == '+')
                pushnum(a + b);
            else if (ch == '-')
                pushnum(a - b);
            else if (ch == '*')
                pushnum(a * b);
            else if (ch == '/')
                pushnum(a / b);
        }
    }
    
    return popnum();
}

int main() {
    char infix[50], postfix[50];
    
    printf("Enter infix expression: ");
    gets(infix);
    
    convert(infix, postfix);
    
    printf("%s\n", postfix);
    
    int ans = calculate(postfix);
    printf("%d\n", ans);
    
    return 0;
}

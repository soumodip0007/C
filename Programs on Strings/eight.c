// Removing brackets from an algebraic expression
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to remove all brackets from the expression
void removeAllBrackets(char *expression) {
    int length = strlen(expression);

    // Iterate through the expression and remove all '(', ')', '{', '}', '[', and ']'
    for (int i = 0; i < length; i++) {
        if (expression[i] == '(' || expression[i] == ')' || expression[i] == '{' ||
            expression[i] == '}' || expression[i] == '[' || expression[i] == ']') {
            memmove(expression + i, expression + i + 1, length - i);
            i--;
            length--;
        }
    }
}

int main() {
    char expression[100];

    // Input the algebraic expression
    printf("Enter an expression with brackets: ");
    scanf("%s", expression);

    // Remove all brackets from the expression
    removeAllBrackets(expression);

    // Output the result
    printf("Expression without brackets: %s\n", expression);

    return 0;
}

// A. Say Hello With C++
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given a name S. Print "Hello, (name)" without parentheses.

// Input
// Only one line containing a string S.

// Output
// Print "Hello, " without quotes, then print name.

#include <stdio.h>
 
int main() {
    char a[101];
    scanf("%s",&a);
    printf("Hello, %s",a);
    return 0;
}
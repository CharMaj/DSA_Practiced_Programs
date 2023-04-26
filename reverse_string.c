// C++ program to reverse the stack
// 03/22/23

#include <iostream.h>
#include <stack>

using namespace std;

void Reverse(char *C, int n)
{
    int i=0;
    stack<char> S;
    //Push the string C on to the stack
    for(i=0;i<n;i++)
    {
        S.push(C[i]);
    }
    //reverse and pop the elements of the string on to the stack
    for(i=0;i<n;i++)
        C[i] = S.top();  // stores the elements pointed by the top of the stack onto the C [i]
        S.pop();    //deletes the elements
}

int main()
{
    char C[51];
    printf("Enter the string!: ");
    gets(C);
    Reverse(C, strlen(C));
    printf("Output: %s", C);
}

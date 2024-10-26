#include <stdio.h>

    int findMax(int x, int y)
    {
        // if(x > y){
        //     return x;
        // }
        // else{
        //     return y;
        // }

        // OR

        return (x > y) ? x : y;
    }

int main()
{
    // Ternary Operator = shortcut to if/else when assiging/returning a value
    // (codition) ? value if true : value if false

    int max = findMax(5, 4);

    printf("%d", max);

    return 0;
}
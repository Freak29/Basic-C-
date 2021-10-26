#include<bits/stdc++.h>
using namespace std;

int main(){
int i = 0, j = 0, k;
    for (i = 0; i < 5; i++)
    {
        for (k = 9; k >= i; k--)
        {
            printf(" ");    
        }
        for (j = 0; j <= (i); j++)
        {
            printf("* ");
        }
        printf("\n");   
    }
	return 0;
}

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, lastDigit;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    /* Get the last digit */
    lastDigit = n % 10;

    printf("Last digit = %d", lastDigit);

    return 0;
}
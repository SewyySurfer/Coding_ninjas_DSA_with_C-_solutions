#include<bits/stdc++.h>

//Solution1: Common sense with recursion
/*
int stringToNumber(char input[]) {
    // Write your code here
    static int sum = 0;
    int l = strlen(input);
    sum = sum * 10 + (input[0] - '0');      // string to int converted
    if (input[1] != '\0')
        stringToNumber(input + 1);
    else
        return sum;
 */


// Solution 2: Head recursion 
 int stringToNumber(char input[]) {
	if(strlen(input) == 0) return 0;
    int a = input[0] - 48;
    return (a* pow(10, strlen(input) - 1)) + stringToNumber(input+1);

}

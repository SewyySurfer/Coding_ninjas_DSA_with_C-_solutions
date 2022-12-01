/*
String to Integer

Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 < |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567
*/




//Solution1: Common sense with recursion
/*
#include<bits/stdc++.h>

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
#include<bits/stdc++.h>

 int stringToNumber(char input[]) {
	if(strlen(input) == 0) return 0;
    int a = input[0] - 48;
    return (a* pow(10, strlen(input) - 1)) + stringToNumber(input+1);

}

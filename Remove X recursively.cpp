/*
Problem :
Remove X
Send Feedback
Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S
Output format :
Modified String
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
*/


// Change in the given string itself. So no need to return or print anything
#include <bits/stdc++.h>
using namespace std;


void removeX(char input[]) {   
  // base case 
  if (input[0] == '\0')
    return;                  

   // recursive call
   removeX(input+1);   

// small work
if (input[0] =='x') {                                      
      for(int i = 1 ; i<= strlen(input) ; i++)
      {  
          input[i-1]=input[i];
      }
  }
}

/*
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
Constraints:-
1<=|S|<=50

*/

// Solution:

#include <bits/stdc++.h>
using namespace std;
void replacePi(char input[]) {
	
    if(input[0]=='\0')
        return;
    if(input[0]=='p' && input[1]=='i'){
        input[0]='3';
        input[1]='.';
        
        int size=strlen(input);
        for(int i=size+2;i>1;i--){                  // everytime 'pi' is found we shifting the whole string after pi to right by 2.
            input[i]=input[i-2];
        }
        input[2]='1';
        input[3]='4';
    }
    
    replacePi(input+1);

}

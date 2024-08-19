//Display Numbers from 1 to 5

#include <iostream>

using namespace std;

int main() {
    int i = 1; 

    // do...while loop from 1 to 5
    do {
        cout << i << " ";
        ++i;
    }
    while (i <= 5);
    
    return 0;
}

/*

Iteration	Variable	    i <= 5	                Action
 	            i = 1	  not checked	1 is printed and i is increased to 2
1st	            i = 2	  true	        2 is printed and i is increased to 3
2nd	            i = 3	  true	        3 is printed and i is increased to 4
3rd	            i = 4	  true	        4 is printed and i is increased to 5
4th	            i = 5	  true	        5 is printed and i is increased to 6
5th	            i = 6	  false	        The loop is terminated
*/
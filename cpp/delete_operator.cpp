// declare an int pointer
int* pointVar;

// dynamically allocate memory
// for an int variable 
pointVar = new int;

// assign value to the variable memory
*pointVar = 45;

// print the value stored in memory
cout << *pointVar; // Output: 45

// deallocate the memory
delete pointVar;

// Here, we have dynamically allocated memory for an int variable using the pointer pointVar.
// After printing the contents of pointVar, we deallocated the memory using delete.
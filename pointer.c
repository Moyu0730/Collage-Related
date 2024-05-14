#include<stdio.h>

/* Session 1 : Working with Pointers */

// int main(){
//     int a;
//     int *p; // Both [int* p] and [int *p] is Valid

//     a = 10;
//     p = &a; // &a = the Address of a
//     printf("The Address of p is %d\n", p);
//     printf("The Value at p is %d\n\n", *p);
    
//     int b = 20;
//     int c = 100;
//     *p = b; // The ADDRESS of p WON'T change to b, but the VALUE WILL
//     printf("The Address of p is %d\n", p);
//     printf("The Value at p is %d\n\n", *p);

//     // Pointer Arithmetic
//     printf("The Address of p is %d\n", p);
//     printf("The Value at p is %d\n", *p);
//     printf("The Size of Integer is %d bytes\n", sizeof(int));
//     printf("The Address of p+1 is %d\n", p+1);
//     printf("The Value of *(p+1) is %d\n", *(p+1)); // Garbage Value
//     printf("The Address of p+2 is %d\n", p+2);
//     printf("The Value of *(p+2) is %d\n", *(p+2)); // Garbage Value
// }


/* Session 2 : Pointer Types, Pointer Arithmetic, Void Pointers */

// int main(){
//     int a = 1025; // 1025 = 00000000 00000000 00000100 00000001

//     int *p;
//     p = &a;
//     printf("The Size of Integer is %d bytes\n", sizeof(int));
//     printf("The Address of p is %d, and the Value is %d\n", p, *p);
//     printf("The Address of p+1 is %d, and the Value is %d\n\n", p+1, *(p+1));

//     char *pA;
//     pA = (char*)p; // TypeCasting
//     printf("The Size of char is %d bytes\n", sizeof(char));
//     printf("The Address of pA is %d, and the Value is %d\n", pA, *pA);
//     printf("The Address of pA+1 is %d, and the Value is %d\n", pA+1, *(pA+1));
//     printf("The Address of pA+2 is %d, and the Value is %d\n\n", pA+2, *(pA+2));

//     void *pV;
//     pV = p; // (void*) Not Required
//     printf("The Address of pV is %d\n", pV); // Valid
//     // printf("The Value of pV is %d\n", *pV); // InValid Operation : DeReferencing
//     // printf("The Address of pV+1 is %d\n", pV+1); // InValid Operation : Arithmetic
// }

/* Session 3 : Pointer as Funciton Arguments - Call By Referencing */

// void Increment( int *p ){
//     *p = (*p) + 1;
// }

// int main(){
//     int a = 10;
//     Increment(&a);

//     printf("The Value of a is %d\n", a);
// }

/* Session 4 : Pointers and Arrays */

// int main(){
//     int A[] = {2, 4, 5, 8, 1};
//     int i;
//     int *p = A;

//     for( int i = 0 ; i < 5 ; i++ ){
//         printf("The Address of A[%d] is %d\n", i, &A[i]);
//         printf("The Address of A[%d] is %d\n", i, A+i);
//         printf("The Value of A[%d] is %d\n", i, A[i]);
//         printf("The Value of A[%d] is %d\n\n", i, *(A+i));
//     }
// }

/* Session 5 : Array as Function Arguements  */

// int SumOfElements( int *A, int len ){ // Both [int* A] and [int A[]] is fine, they are the same
//     int sum = 0;

//     printf("In Sum Of Elements : The Size of A is %d, and the Size of A[0] is %d\n", sizeof(A), sizeof(A[0]));
//     for( int i = 0 ; i < len ; i++ ) sum += A[i];

//     return sum;
// }

// void DoubleTheValue( int *A, int len ){
//     for( int i = 0 ; i < len ; i++ ) A[i] *= 2;
// }

// int main(){
//     int A[] = {1, 2, 3, 4, 5};
//     int len = sizeof(A) / sizeof(A[0]);
//     int total = SumOfElements(A, len);
//     printf("Sum of the Elements is %d\n", total);
//     printf("In Main : The Size of A is %d, and the Size of A[0] is %d\n", sizeof(A), sizeof(A[0]));
    
//     for( int i = 0 ; i < len ; i++ ) printf("A[%d] is %d\n", i, A[i]);
//     printf("\n");
    
//     DoubleTheValue(A, len);

//     for( int i = 0 ; i < len ; i++ ) printf("A[%d] is %d\n", i, A[i]);
// }

/* Session 6 & 7 : Character Arrays And Pointers - Part A */
// #include<string.h>

// int main(){
//     /* Invalid to declare C[4] for the string which len is equal to 4 */
//     char C[4];
//     C[0] = 'J';
//     C[1] = 'O';
//     C[2] = 'H';
//     C[3] = 'N';
//     printf("The Value of C is %s", C);

//     /* Valid to declare a array longer greater than 4+1 for the string which len is equal to 4 */
//     char C[20];
//     C[0] = 'J';
//     C[1] = 'O';
//     C[2] = 'H';
//     C[3] = 'N';
//     C[4] = '\0'; // Don't forget to add a NULL char ('\0') at the end of the array
//     int len = strlen(C);
//     printf("The Value of C is %s\n", C);
//     printf("The Size of C is %d bytes\n", sizeof(C));
//     printf("The Length of C is %d\n", len); // The null character will not be implicated

//     /* Another Way to initialize C string */
//     // Valid
//     char C[] = {'J', 'O', 'H', 'N', '\0'};
    // char C[] = "Hello";
    // printf("The Value of C is %s\n", C);

//     // Invalid
//     char C[10];
//     C = "JOHN";
//     C = {'J', 'O', 'H', 'N', '\0'};
// }

/* Session 6 & 7 : Character Arrays And Pointers - Part B */

// void Print( char* C ){
    // int i = 0 ;
    // while( C[i] != '\0' ){
    //     printf("%c", C[i]);
    //     i++;
    // }
    // printf("\n");

    /* Equivalence 1 */
    // int i = 0 ;
    // while( *(C+i) != '\0' ){
    //     printf("%c", *(C+i));
    //     i++;
    // }
    // printf("\n");

    /* Equivalence 2 */
    // while( *C != '\0' ){
    //     printf("%c", *C);
    //     C++;
    // }
    // printf("\n");
// }

// int main(){
//     char C[20] = "Hello";
//     Print(C);
// }

/* Session 6 & 7 : Character Arrays And Pointers - Part C */

int main(){
    char c[20] = "Hello World"; // String gets stored in the space for array
    char* p = "Hello World"; // String gets stored as compile time contants ( Type is int )

    printf("The ASCII(int) Value of c[0] is %d\n", *(c+0));
    printf("The ASCII(char) Value of c[0] is %c\n", *(c+0));
    printf("The Address of c is %d\n\n", (c+0));

    printf("The ASCII(int) Value of c[0] is %d\n", *(c+1));
    printf("The ASCII(char) Value of c[0] is %c\n", *(c+1));
    printf("The Address of c+1 is %d\n\n", (c+1));

    printf("--------------------\n\n");

    printf("The ASCII(int) Value of p is %d\n", *p); // ASCII
    printf("The ASCII(char) Value of p is %c\n", *p); // Char   
    printf("The Size of p is %d bytes\n", sizeof(p));
    printf("The Address of p is %d\n\n", &p);

    printf("The ASCII(int) Value of p+1 is %d\n", *(p+1)); // ASCII
    printf("The ASCII(char) Value of p+1 is %c\n", *(p+1)); // Char   
    printf("The Size of p+1 is %d bytes\n", sizeof(p+1));
    printf("The Address of p+1 is %d\n\n", &p+1);

    printf("--------------------\n\n");

    printf("Valid Operaiton in Char Array and Char Pointer\n\n");

    for( int i = 0 ; i < 11 ; i++ ) printf("%c", c[i]);
    printf("\n");
    for( int i = 0 ; i < 11 ; i++ ) printf("%c", p[i]);
    printf("\n\n");

    for( int i = 0 ; i < 11 ; i++ ) printf("%c", *(c+i));
    printf("\n");
    for( int i = 0 ; i < 11 ; i++ ) printf("%c", *(p+i));
    printf("\n\n");

    printf("Valid Operaiton ONLY in Char Pointer\n\n");
    while( *p != '\0' ) printf("%c", *p++); // ONLY Pointer Support Arithmetic
    printf("\n\n");
}
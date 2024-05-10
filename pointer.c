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
//     *p = b; // The ADDRESS of p WON'T change to b, but the VALUE WILL
//     printf("The Address of p is %d\n", p);
//     printf("The Value at p is %d\n\n", *p);

//     // Pointer Arithmetic
//     printf("The Address of p is %d\n", p);
//     printf("The Value at p is %d\n", *p);
//     printf("The Size of Integer is %d bytes\n", sizeof(int));
//     printf("The Address of p+1 is %d\n", p+1);
//     printf("The Value of *p+1 is %d\n", *p+1); // Garbage Value
//     printf("The Value of *(p+1) is %d\n", *(p+1)); // Garbage Value
//     printf("The Value of *p+2 is %d\n", *p+2); // Garbage Value
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

void Increment( int *p ){
    *p = (*p) + 1;
}

int main(){
    int a = 10;
    Increment(&a);

    printf("The Value of a is %d\n", a);
}
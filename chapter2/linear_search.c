#include<stdio.h>
int main(){
    int a[6]={1,2,3,4,5,6};
    int find=3,i=0;
    while(a[i]!=find&&i<6)
        i++;
    printf("%d %d",i,a[i]);
}
/*  
The loop invariant in the provided code is:

0 <= i <= 6 and (a[0], a[1], ..., a[i-1]) != find

This statement holds true after each iteration of the loop. Let's break it down:

0 <= i <= 6: This ensures that the index i is always within the valid range of the array a (0 to 5).
(a[0], a[1], ..., a[i-1]) != find: This part states that all elements from the beginning of the array (a[0]) up to the element before the current index (i-1) have already been checked, and none of them are equal to the value we're searching for (find).
Explanation:

Initialization: When the loop starts, i is set to 0. Since 0 is within the valid range (0 to 5) and no elements have been checked yet (i-1 is -1), the loop invariant holds true.

Loop body:

If a[i] == find: The loop terminates, and the invariant still holds because i now points to the index of the element that equals find.
If a[i] != find and i < 6:
The loop continues, and i is incremented. This maintains the validity of the first part of the invariant (0 <= i <= 6).
Since only a[i] is compared to find in this iteration, the elements before i (a[0] to a[i-1]) remain unchanged and haven't been checked for the value find. Therefore, the second part of the invariant ((a[0], a[1], ..., a[i-1]) != find) still holds true.
After the loop:

If the element find is found: The loop terminates with i pointing to its index, and the loop invariant holds true.
If the element find is not found: The loop finishes iterating through all elements (i reaches 6), and the loop invariant still holds true because all elements have been checked, and none of them were equal to find.
Therefore, the loop invariant accurately reflects the state of the loop and the elements that have been checked so far in the search process.*/
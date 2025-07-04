/*
if given input is in formate  of 24 hours time print valid
else print invalid
*/

#include <stdio.h>
void main()
{
    int hour, min, sec;
    scanf("%d:%d:%d", &hour, &min, &sec);
    if ((hour >= 0 && hour <= 23) &&
        (min >= 0 && min <= 59) &&
        (sec >= 0 && sec <= 59))
        printf("\nValid");
    else
        printf("In valid");
}

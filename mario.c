#include <stdio.h>
int main(void)
{
int height;

    do{                 //start of do while loop
    printf("Height: ");
    scanf("%d", &height);

    }
    while((height<0) || (height>23)); //reject numbers outside that range

    for(int i=0;i<height;i++){  //valid number entered and start of FOR, when height is 1, i starts at 0

        for(int spaces=i;spaces<(height-1);spaces++){ //prints spaces height-1 per loop iteration, so decreasing
        printf(" ");
        }

        for(int hash=0;hash<i;hash++){  // print a hash starting from height>=2, and increasing per iteration
        printf("#");
        }

    printf("##\n"); //always print 2 "#" for every height > 0
    }
}

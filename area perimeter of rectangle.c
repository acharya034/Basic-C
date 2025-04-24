#include <stdio.h>

int main() {
    int l; // let length be l.
    int b; // let breadth be b.
    int a; // let area be a.
    int p; // let perimeter be p.
    printf("Enter length of rectangle in meter. ");
    scanf("%d",&l);//to input length.
    printf("Enter breadth of rectangle in meter. ");
    scanf("%d",&b);//to input breadth.

    // calculation for area.
    a = l * b;// area = l X b.
    printf("The area of rectangle is %d meter square.\n",a);

    // calculation for perimeter.
    p = 2 * (l + b);// perimeter = 2(l+b).
    printf("The perimeter of rectangle is %d meter.",p);

    return 0;
}


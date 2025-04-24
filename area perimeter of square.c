#include <stdio.h>

int main() {
    int l; // let length be l.
    int a; // let area be a.
    int p; // let perimeter be p.
    printf("Enter length of Square in meter. ");
    scanf("%d",&l);//to input length.

    // calculation for area.
    a = l * l ;// area = l^2 = l X l.
    printf("The area of square is %d meter square.\n",a);

    // calculation for perimeter.
    p = 4 * l;// perimeter = 4l.
    printf("The perimeter of square is %d meter.",p);

    return 0;
}


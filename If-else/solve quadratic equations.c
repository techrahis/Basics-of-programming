#include <stdio.h>
#include <math.h>

/* 
    The standard form of a quadratic equation is:
    ax^2 + bx + c = 0, where
    a, b and c are real numbers and
    a != 0

    The term b^2 - 4ac is known as the discriminant of a quadratic equation.
    It tells the nature of the roots.
    
     If the discriminant is greater than 0, the roots are real and different.
     If the discriminant is equal to 0, the roots are real and equal.
     If the discriminant is less than 0, the roots are complex and different.
*/

int main() {
    float a,b,c,dis,r1,r2,realPart,imgPart;
    scanf("%f %f %f",&a,&b,&c);
    
    //finding discriminant
    dis = b * b - 4 * a * c;
    
    //finding roots
    (dis>0) ? r1 = (-b + sqrt(dis)) / (2 * a),
    r2 = (-b - sqrt(dis)) / (2 * a),
    printf("Root One : %f\nRoot Two : %f",r1,r2): 
    (dis == 0) ? r1 = r2 = -b /(2 * a),
    printf("Root One : %f\nRoot Two : %f",r1,r2) :
    (dis < 0) ? realPart = (-b / (2 * a)),
    imgPart = sqrt(-dis) / (2 * a) ,
    printf("Real Root : %.2lf+%.2lfi\nImaginary Root : %.2f-%.2fi",realPart,imgPart):
    printf("error");  
    
    getchar();    
    return 0;
}
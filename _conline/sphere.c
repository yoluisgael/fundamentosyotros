#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
    float r,h,V;
    int res;
    bool x=false;
    while (res<=0||res>=4){
        if(x){
            printf("PLEASE CHOOSE AN AVAILABLE OPTION\n1.Sphere\t2.Cylinder\t3.Both\n");
        }
        else{
            printf("Which volume?\n1.Sphere\t2.Cylinder\t3.Both\n");
        }
        scanf("%d", &res);
        x=true;
    }
        switch(res){
            case 1:
            printf("Enter radio: ");
            scanf("%f", &r);
            V= M_PI * pow(r, 3) * 4.0/3;
            printf("Sphere's volume is: %.2f cubic units.\n", V);
            return 0;
            break;

            case 2:
            printf("Enter radio: ");
            scanf("%f", &r);
            printf("Enter height: ");
            scanf("%f", &h);
            V= M_PI * pow(r, 2) * h;
            printf("Cylinder's volume is: %.2f cubic units.\n", V);
            return 0;
            break;

            case 3:
            printf("Enter radio: ");
            scanf("%f", &r);
            printf("Enter height: ");
            scanf("%f", &h);
            V= M_PI * pow(r, 2) * h;
            printf("Cylinder's volume is: %.2f cubic units.\n", V);
            V= M_PI * pow(r, 3) * 4.0/3;
            printf("Sphere's volume is: %.2f cubic units.\n", V);
            return 0;
            break;
        }
}
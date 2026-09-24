#include<stdio.h>
void main()
{
    int y;
    do
    {
    printf("\n\n=====| Multi Utility Calculator |=====\n\n");
    printf("1. Simple Calculator.\n2. Grade Calculate.\n3. BMI Calculate.\n4. EXIT.\n");
    printf("Enter your choice: ");
    scanf("%d",&y);
        switch(y)
        {
            case 1:
                int x;
                printf("\n\n1. Simple Calculation.\n2. Formulas\n3. Unit Conversion\n");
                printf("Enter your choice: ");
                scanf("%d",&x);
                if(x==1)
                {
                    float a,b,sum,neg,pro,div;
                    char c;
                    printf("\n\nEnter two number: ");
                    scanf("%f %f",&a,&b);
                    printf("Enter symbol: ");
                    scanf(" %c",&c);
                    switch(c)
                    {
                    case '+':
                        sum=a+b;
                        printf("\n\n==> Sum= %.2f\n\n",sum);
                        break;
                    case '-':
                        neg=a-b;
                        printf("\n\n==> Subtraction= %.2f\n\n",neg);
                        break;
                    case '*':
                        pro=a*b;
                        printf("\n\n==> Product= %.2f\n\n",pro);
                        break;
                    case '/':
                        if(b==0)
                            printf("\n\nCannot divide by zero.\n\n");
                        else
                        {
                            div=a/b;
                            printf("\n\n==> Quotient=%.2f\n\n",div);
                        }
                        break;
                    default:
                        printf("\n\n==> Something is wrong! <==\nInvalid symbol\n\n");
                    }
                    printf("____Result Generated Successfully____\n");
                }
                else if(x==2)
                    {
                        int a;
                        float b,c,fo;
                        printf("\n\nEnter the value of a: ");
                        scanf("%f",&b);
                        printf("Enter the value of b: ");
                        scanf("%f",&c);
                        printf("\n\n1. (a+b)²,\n2. (a-b)²,\n3. a²+b²\n");
                        printf("Choice formula: ");
                        scanf("%d",&a);
                        switch(a)
                        {
                        case 1:
                            fo=(b*b)+2*b*c+(c*c);
                            printf("\n\n==> Answer= %.1f",fo);
                            break;
                        case 2:
                            fo=(b*b)-2*b*c+(c*c);
                            printf("\n\n==> Answer= %.1f",fo);
                            break;
                        case 3:
                            fo=(b*b)+(c*c);
                            printf("\n\n==> Answer= %.1f",fo);
                            break;
                        default:
                            printf("\n\n====> Invalid Choice <====\n");
                        }
                    }
                else if(x==3)
                {
                    int a;
                    float cm,m,ft,inch,lb,kg,g;
                    printf("\n\n1. Centimeter(cm) to Meter(m).\n2. Feet(ft) to Meter(m).\n3. Inch to Centimeter(cm).\n4. Pound(lb) to Kilogram(kg).\n5. Gram(g) to Kilogram(kg).\n");
                    printf("Enter your choice: ");
                    scanf("%d",&a);
                    switch(a)
                    {
                    case 1:
                        printf("\n\nEnter Centimeter: ");
                        scanf("%f",&cm);
                        m=cm/100;
                        printf("\n\n==> Meter= %.3f m\n",m);
                        break;
                    case 2:
                        printf("\n\nEnter Feet: ");
                        scanf("%f",&ft);
                        m=ft*0.3048;
                        printf("\n\n==> Meter= %.3f m\n",m);
                        break;
                    case 3:
                        printf("\n\nEnter Inch: ");
                        scanf("%f",&inch);
                        cm=inch*2.54;
                        printf("\n\n==> Centimeter= %.3f cm\n",cm);
                        break;
                    case 4:
                        printf("\n\nEnter Pound: ");
                        scanf("%f",&lb);
                        kg=lb*0.453592;
                        printf("\n\n==> Kilogram= %.3f kg\n",kg);
                        break;
                    case 5:
                        printf("\n\nEnter Gram: ");
                        scanf("%f",&g);
                        kg=g/1000;
                        printf("\n\n==> Kilogram= %.3f kg\n",kg);
                        break;
                    default:
                        printf("\n\n_____> Something is wrong! <_____\nInvalid Choice\n");
                    }
                }
                else
                    printf("\n\n==> Something is wrong! <==\nPlease check your choice.\n");
                break;
            case 2:
                   float a,n,c,i,avg,res,csum=0,psum=0,point;
                   printf("\n\nEnter subject numbers: ");
                   scanf("%f",&n);
                   i=n;
                   for(;n>0;n--)
                   {
                       printf("\nEnter subject credit: ");
                       scanf("%f",&c);
                       printf("Enter subject number: ");
                       scanf("%f",&a);
                       if(a<40)
                       {
                        printf("\n\n===> You fail a subject. You need a makeup exam. <===");
                        break;
                       }
                       else
                       {
                        if(a>=80 && a<=100)
                        point=4.00;
                        else if(a>=75)
                        point=3.75;
                        else if(a>=70)
                        point=3.50;
                        else if(a>=65)
                        point=3.25;
                        else if(a>=60)
                        point=3.00;
                        else if(a>=55)
                        point=2.75;
                        else if(a>=50)
                        point=2.50;
                        else if(a>=45)
                        point=2.25;
                        else if(a>=40)
                        point=2.00;
                        avg=c*point;
                        psum=psum+avg;
                        csum=csum+c;
                       }
                   }
                   res=psum/csum;
                    printf("\n\n====> CGPA= %.2f <====",res);
                   printf("\n\n_____Result Generated Successfully_____\n");
                break;
            case 3:
                float w,h,bmi;
                printf("\n\nEnter weight in KG: ");
                scanf("%f",&w);
                printf("Enter height in meter: ");
                scanf("%f",&h);
                if(h<=0 || w<=0)
                    printf("\n\n_____> Invalid input <______\n");
                else
                {
                   bmi=w/(h*h);
                    printf("\n\n==> BMI= %.1f <==\n",bmi);
                    if(bmi<18.5)
                        printf("Comment: Underweight\n");
                    else if(bmi>=18.5 && bmi<=24.9)
                        printf("Comment: Normal Weight\n");
                    else if(bmi>=25.0 && bmi<=29.9)
                        printf("Comment: Overweight\n");
                    else if(bmi>=30.0 && bmi<=34.9)
                        printf("Comment: Obesity Class I/Fat\n");
                    else if(bmi>=35.0 && bmi<=39.9)
                        printf("Comment: Obesity Class II/More Fat\n");
                    else if(bmi>=40.0)
                        printf("Comment: Obesity Class III/Extreme Fat\n");
                }
            break;
            case 4:
                printf("\n\nThank you for using Multi Utility Calculator.\n");
                break;
            default:
                printf("\n\n_____> Something is wrong! <_____\nInvalid Choice\n");
            }
            }while(y!=4);
}

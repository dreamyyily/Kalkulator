#include <stdio.h>
#include <math.h>


int factorial(int n){
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

int main(){
    int choice;
    double a, b, result;
    int year, month, week, day, hour, minute, second;
    double celsius, fahrenheit, kelvin, reamur;
    double IDR, USD, EUR, JPY, GBP;
    double km, hm, dam, m, dm, cm, mm;
    double initialPrice, discount, finalPrice, savings;

    printf("TYPES OF CALCULATOR\n");
    printf("1. Basic Calculator\n");
    printf("2. Scientific Calculator\n");
    printf("3. Trigonometri\n");
    printf("4. Conversion\n");
    printf("5. Price Discount\n");

    printf("Choose the type of Calculator (1 - 5) : ");
    scanf("%d", &choice);

    switch (choice){
        case 1:
        printf ("\n>>  BASIC CALCULATOR  <<\n");
        printf("1. Addition         ( + )\n");
        printf("2. Substraction     ( - )\n");
        printf("3. Multiplication   ( x )\n");
        printf("4. Division         ( : )\n");


        printf("\nChoose an operation (1 - 4)  : ");
        scanf("%d", &choice);

        printf("Enter the value              : ");
        scanf("%lf", &a);
        printf("Enter the second value       : ");
        scanf("%lf", &b);

        switch(choice){
            case 1:
            result = a + b;
            printf("Addition result              : %.2lf", result);
            break;

            case 2:
            result = a - b;
            printf("Subtraction result           : %.2lf", result);
            break;

            case 3:
            result = a * b;
            printf("Multiplication result       : %.2lf", result);
            break;

            case 4:
            result = a / b;
            printf("Division result               : %.2lf", result);
            break;
            
            default:
            printf("\nInvalid choice.\n");
            break;
        }
        break;

        case 2:
        printf("\n>>   SCIENTIFIC CALCULATOR   <<\n");
        printf("1. Power            ( ^)\n");
        printf("2. Factorial        ( ! )\n");
        printf("3. Square Root           \n");

        printf("\nChoose an operation (1 - 3)  : ");
        scanf("%d", &choice);
        printf("Enter the value              : ");
        scanf("%lf", &a);

        if (choice != 2 && choice != 3){
        printf("Enter the second value       : ");
        scanf("%lf", &b);
        }
        
        switch(choice){
            case 1:
            result = pow(a, b);
            printf("\nPower result : %.2lf", result);
            break;

            case 2:
            result = factorial ((int) a);
            printf("Factorial result             : %.0lf\n", result);
            break;

            case 3:
            result = sqrt(a);
            printf("Square Root result           : %.0lf\n", result);
            break;

            default:
            printf("\nInvalid choice.\n");
            break;
            }
        break;

        case 3:
        printf(">>   TRIGONOMETRI   <<\n");
        printf("1. Sin\n");
        printf("2. Cos\n");
        printf("3. Tan\n");
        printf("4. Cosec\n");
        printf("5. Sec\n");
        printf("6. Cot\n");

        printf("\nChoose the type (1 - 6)  : ");
        scanf("%d", &choice);

        printf("Enter the value              : ");
        scanf("%lf", &a);

        switch(choice){
            case 1:
            result = sin(a * 3.14 / 180);
            printf("Sin result                   : %.2lf\n", result);
            break;

            case 2:
            result = cos(a * 3.14 / 180);
            printf("Cos result                : %.2lf\n", result);
            break;

            case 3:
            result = tan(a * 3.14 / 180);
            printf("Tan result                   : %.2lf\n", result);
            break;

            case 4:
            result = 1 / sin(a * 3.14 / 180);
            printf("Cosec result                   : %.2lf\n", result);
            break;

            case 5:
            result = 1 / cos(a * 3.14 / 180);
            printf("Sec result                  : %.2lf\n", result);
            break;

            case 6:
            result = 1 / tan(a * 3.14 / 180);
            printf("Cot result                   : %.2lf\n", result);
            break;

            default:
            printf("\nInvalid choice.\n");
            break;
        }
        break;
    
        case 4:
        printf ("\n>>  CONVERSION  <<\n");
        printf("1. Currency Conversion\n");
        printf("2. Length Conversion\n");
        printf("3. Temperature Conversion\n");
        printf("4. Time Conversion\n");

        printf("\nChoose an operation (1 - 4)  : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            printf("\n>>   CURRENCY   <<\n");
            printf("1. IDR to All\n");
            printf("2. USD to All\n");
            printf("3. EUR to All\n");
            printf("4. JPY to All\n");
            printf("5. GBP to All\n");
        
            printf("\nChoose currency exchange (1 - 5)    : ");
            scanf("%d", &choice);

            switch(choice){
                case 1:
                printf("Enter the amount of IDR     : ");
                scanf("%lf", &IDR);
                USD     = IDR / 14950.65;
                EUR     = IDR / 16038.48;
                JPY     = IDR / 107.30;
                GBP     = IDR / 18489.83;

                printf("\n>>   CURRENCY EXCHANGE   <<\n");
                printf("to USD  : %lf\n", USD);
                printf("to EUR  : %lf\n", EUR);
                printf("to JPY  : %lf\n", JPY);
                printf("to GBP  : %lf\n", GBP);
                break;

                case 2:
                printf("Enter the amount of USD     : ");
                scanf("%lf", &USD);
                IDR     = USD * 14947.60;;
                EUR     = USD * 0.93;
                JPY     = USD * 140.61;
                GBP     = USD * 0.81;

                printf("\n>>   CURRENCY EXCHANGE   <<\n");
                printf("to IDR  : %.3lf\n", IDR);
                printf("to EUR  : %.3lf\n", EUR);
                printf("to JPY  : %.3lf\n", JPY);
                printf("to GBP  : %.3lf\n", GBP);
                break;

                case 3:
                printf("Enter the amount of EUR     : ");
                scanf("%lf", &EUR);
                IDR     = EUR * 16074.01;
                JPY     = EUR * 150.91;
                GBP     = EUR * 0.87;
                USD     = EUR * 1.07;

                printf("\n>>   CURRENCY EXCHANGE   <<\n");
                printf("to IDR  : %.3lf\n", IDR);
                printf("to JPY  : %.3lf\n", JPY);
                printf("to GBP  : %.3lf\n", GBP);
                printf("to USD  : %.3lf\n", USD);
                break;

                case 4:
                printf("Enter the amount of JPY     : ");
                scanf("%lf", &JPY);
                IDR     = JPY * 106.57;
                GBP     = JPY * 0.0058;
                USD     = JPY * 0.0071;
                EUR     = JPY * 0.0066;

                printf("\n>>   CURRENCY EXCHANGE   <<\n");
                printf("to IDR  : %.3lf\n", IDR);
                printf("to GBP  : %.3lf\n", GBP);
                printf("to USD  : %.3lf\n", USD);
                printf("to EUR  : %.3lf\n", EUR);
                break;

                case 5:
                printf("Enter the amount of GBP     : ");
                scanf("%lf", &GBP);
                IDR     = GBP * 18494.09;
                USD     = GBP * 1.23;
                EUR     = GBP * 1.15;
                JPY     = GBP * 173.58;

                printf("\n>>   CURRENCY EXCHANGE   <<\n");
                printf("to IDR  : %.3lf\n", IDR);
                printf("to USD  : %.3lf\n", USD);
                printf("to EUR  : %.3lf\n", EUR);
                printf("to JPY  : %.3lf\n", JPY);
                break;

                default:
                printf("Invalid choice.\n");
                break;
            }
            break;

            case 2:
            printf("\n>>   LENGTH CONVERSION   <<\n");
            printf("1. Kilometer    (km)    to All\n");
            printf("2. Hectometer   (hm)    to All\n");
            printf("3. Dekameter    (dam)   to All\n");
            printf("4. Meter        (m)     to All\n");
            printf("5. Desimeter    (dm)    to All\n");
            printf("6. Centimeter   (cm)    to All\n");
            printf("7. Millimeter   (mm)    to All\n");

            printf("\nChoose length unit conversion (1 - 7)    : ");
            scanf("%d", &choice);

            switch(choice){
                case 1:
                printf("Enter the length in kilometer (km)      : ");
                scanf("%lf", &km);
                hm      = km * 10;
                dam     = km * 100;
                m       = km * 1000;
                dm      = km * 10000;
                cm      = km * 100000;
                mm      = km * 1000000;

                printf("\n>>   CONVERSION RESULT   <<\n");
                printf("to hm       : %lf\n", hm);
                printf("to dam      : %lf\n", dam);
                printf("to m        : %lf\n", m);
                printf("to dm       : %lf\n", dm);
                printf("to cm       : %lf\n", cm);
                printf("to mm       : %lf\n", mm);
                break;

                case 2:
                printf("Enter the length in hectometer (hm)      : ");
                scanf("%lf", &hm);
                km      = hm / 10;
                dam     = hm * 10;
                m       = hm * 100;
                dm      = hm * 1000;
                cm      = hm * 10000;
                mm      = hm * 100000;

                printf("\n>>   CONVERSION RESULT   <<\n");
                printf("to km       : %lf\n", km);
                printf("to dam      : %lf\n", dam);
                printf("to m        : %lf\n", m);
                printf("to dm       : %lf\n", dm);
                printf("to cm       : %lf\n", cm);
                printf("to mm       : %lf\n", mm);
                break;

                case 3:
                printf("Enter the length in dekameter (dam)      : ");
                scanf("%lf", &dam);
                km      = dam / 100;
                hm      = dam / 10;
                m       = dam * 10;
                dm      = dam * 100;
                cm      = dam * 1000;
                mm      = dam * 10000;

                printf("\n>>   CONVERSION RESULT   <<\n");
                printf("to km       : %lf\n", km);
                printf("to hm       : %lf\n", hm);
                printf("to m        : %lf\n", m);
                printf("to dm       : %lf\n", dm);
                printf("to cm       : %lf\n", cm);
                printf("to mm       : %lf\n", mm);
                break;

                case 4:
                printf("Enter the length in meter (m)      : ");
                scanf("%lf", &m);
                km      = m / 1000;
                hm      = m / 100;
                dam     = m / 10;
                dm      = m * 10;
                cm      = m * 100;
                mm      = m * 1000;

                printf("\n>>   CONVERSION RESULT   <<\n");
                printf("to km       : %lf\n", km);
                printf("to hm       : %lf\n", hm);
                printf("to dam      : %lf\n", dam);
                printf("to dm       : %lf\n", dm);
                printf("to cm       : %lf\n", cm);
                printf("to mm       : %lf\n", mm);
                break;

                case 5:
                printf("Enter the length in desimeter (dm)      : ");
                scanf("%lf", &dm);
                km      = dm / 10000;
                hm      = dm / 1000;
                dam     = dm / 100;
                m       = dm / 10;
                cm      = dm * 10;
                mm      = dm * 100;

                printf("\n>>   CONVERSION RESULT   <<\n");
                printf("to km       : %lf\n", km);
                printf("to hm       : %lf\n", hm);
                printf("to dam      : %lf\n", dam);
                printf("to m        : %lf\n", m);
                printf("to cm       : %lf\n", cm);
                printf("to mm       : %lf\n", mm);
                break;
            
                case 6:
                printf("Enter the length in centimeter (cm)      : ");
                scanf("%lf", &cm);
                km      = cm / 100000;
                hm      = cm / 10000;
                dam     = cm / 1000;
                m       = cm / 100;
                dm      = cm / 10;
                mm      = cm * 10;

                printf("\n>>   CONVERSION RESULT   <<\n");
                printf("to km       : %lf\n", km);
                printf("to hm       : %lf\n", hm);
                printf("to dam      : %lf\n", dam);
                printf("to m        : %lf\n", m);
                printf("to dm       : %lf\n", dm);
                printf("to mm       : %lf\n", mm);
                break;

                case 7:
                printf("Enter the length in millimeter (mm)      : ");
                scanf("%lf", &mm);
                km      = cm / 1000000;
                hm      = cm / 100000;
                dam     = cm / 10000;
                m       = cm / 1000;
                dm      = cm / 100;
                cm      = cm / 10;

                printf("\n>>   CONVERSION RESULT   <<\n");
                printf("to km       : %lf\n", km);
                printf("to hm       : %lf\n", hm);
                printf("to dam      : %lf\n", dam);
                printf("to m        : %lf\n", m);
                printf("to dm       : %lf\n", dm);
                printf("to cm       : %lf\n", cm);
                break;

                default:
                printf("Invalid choice.\n");
                break;                        
            }
            break;

            case 3:
            printf("\n>>   TEMPERATURE CONVERSION   <<\n");
            printf("1. Celsius to All\n");
            printf("2. Fahrenheit to All\n");
            printf("3. Kelvin to All\n");
            printf("4. Reamur to All\n");
        
            printf("\nChoose the conversion type (1 - 4)    : ");
            scanf("%d", &choice);

            switch(choice){
                case 1:
                printf("Enter the temperature in Celsius      : ");
                scanf("%lf", &celsius);
                fahrenheit   = (celsius * 9 / 5) + 32;
                kelvin       = celsius + 273.15;
                reamur       = celsius * 0.8;

                printf("-   CONVERSION RESULT   -\n");
                printf("to Fahrenheit  : %.2lf\n", fahrenheit);
                printf("to Kelvin      : %.2lf\n", kelvin);
                printf("to Reamur      : %.2lf", reamur);
                break;

                case 2:
                printf("Enter the temperature in Fahrenheit     : ");
                scanf("%lf", &fahrenheit);
                celsius  = (fahrenheit - 32) * 5 / 9;
                kelvin   = (fahrenheit - 32) * 5 / 9 + 273.15;
                reamur   = (fahrenheit - 32) * 4 / 9;

                printf("-   CONVERSION RESULT   -\n");
                printf("to Celsius  : %.2lf\n", celsius);
                printf("to Kelvin      : %.2lf\n", kelvin);
                printf("to Reamur      : %.2lf", reamur);
                break;

                case 3:
                printf("Enter the temperature in Kelvin     : ");
                scanf("%lf", &kelvin);
                celsius     = kelvin - 273.15;
                fahrenheit  = (kelvin - 273.15) * 9 / 5 + 32;
                reamur      = (kelvin - 273.15) * 0.8;

                printf("-   CONVERSION RESULT   -\n");
                printf("to Celsius      : %.2lf\n", celsius);
                printf("to Fahrenheit   : %.2lf\n", fahrenheit);
                printf("to Reamur       : %.2lf", reamur);
                break;

                case 4:
                printf("Enter the temperature in Reamur     : ");
                scanf("%lf", &reamur);
                celsius     = reamur * 1.25;
                fahrenheit  = (reamur * 9 / 4) + 32;
                kelvin      = (reamur * 5 / 4) + 273.15;

                printf("-   CONVERSION RESULT   -\n");
                printf("to Celsius      : %.2lf\n", celsius);
                printf("to Fahrenheit   : %.2lf\n", fahrenheit);
                printf("to Kelvin       : %.2lf", kelvin);
                break;

                default:
                printf("Invalid choice.\n");
                break;
            }
            break;

            case 4:
            printf("\n>>   TIME CONVERSION   <<\n");
            printf("1. Year to All\n");
            printf("2. Month to All\n");
            printf("3. Week to All\n");
            printf("4. Day to All\n");
            printf("5. Hour to All\n");
            printf("6. Minute to All\n");
            printf("7. Second to All\n");

            printf("Choose the type (1 - 7)  : ");
            scanf("%d", &choice);

            switch(choice){
                case 1:
                printf("\nEnter the number of years : ");
                scanf("%d", &year);
                month   = year      * 12;
                week    = year      * 52;
                day     = year      * 365;
                hour    = day       * 24;
                minute  = hour      * 60;
                second  = minute    * 60;

                printf("-  CONVERSION RESULT  -\n");
                printf("Months    : %d\n", month);
                printf("Weeks     : %d\n", week);
                printf("Days      : %d\n", day);
                printf("Hours     : %d\n", hour);
                printf("Minutes   : %d\n", minute);
                printf("Seconds   : %d\n", second);  
                break;

                case 2:
                printf("\nEnter the number of months : ");
                scanf("%d", &month);
                week    = month     * 4;
                day     = month     * 30;
                hour    = day       * 24;
                minute  = hour      * 60;
                second  = minute    * 60;

                printf("-  CONVERSION RESULT  -\n");
                printf("Weeks     : %d\n", week);
                printf("Days      : %d\n", day);
                printf("Hours     : %d\n", hour);
                printf("Minutes   : %d\n", minute);
                printf("Seconds   : %d\n", second);
                break;

                case 3:
                printf("\nEnter the number of weeks : ");
                scanf("%d", &week);
                day     = week     * 7;
                hour    = day      * 24;
                minute  = hour     * 60;
                second  = minute   * 60;

                printf("-  CONVERSION RESULT  -\n");
                printf("Days      : %d\n", day);
                printf("Hours     : %d\n", hour);
                printf("Minutes   : %d\n", minute);
                printf("Seconds   : %d\n", second);
                break;

                case 4:
                printf("\nEnter the number of days : ");
                scanf("%d", &day);
                hour    = day      * 24;
                minute  = hour     * 60;
                second  = minute   * 60;

                printf("-  CONVERSION RESULT  -\n");
                printf("Hours     : %d\n", hour);
                printf("Minutes   : %d\n", minute);
                printf("Seconds   : %d\n", second);
                break;

                case 5:
                printf("\nEnter the number of hours : ");
                scanf("%d", &hour);
                minute  = hour     * 60;
                second  = minute   * 60;

                printf("-  CONVERSION RESULT  -\n");
                printf("Minutes   : %d\n", minute);
                printf("Seconds   : %d\n", second);
                break;

                case 6:
                printf("\nEnter the number of minutes : ");
                scanf("%d", &minute);
                second  = minute   * 60;

                printf("-  CONVERSION RESULT  -\n");
                printf("Seconds   : %d\n", second);
                break;

                default:
                printf("Invalid choice.\n");
                break;
            }
            break;

            
        }
        break;

        case 5:
        printf("\n>>   PRICE DISCOUNT   <<\n");
        printf("Enter the initial price         : Rp. ");
        scanf("%lf", &initialPrice);
        printf("Enter the discount percentage   : ");
        scanf("%lf", &discount);

        finalPrice  = initialPrice - (initialPrice * discount / 100);
        savings     = initialPrice - finalPrice;

        printf("Final price after discount      : Rp. %.3lf\n", finalPrice);
        printf("You saved                       : Rp. %.3lf\n", savings);
    
        break;
    
    }

        return 0;
}
#include <stdio.h>
#include <math.h>


char strop;
char Readstrop;
double dof_num;
double ReadDof;
double ReadDos;
double dos_num;
double res;
double res_sqrt;
double res_sqrt_;
double res_pow;
double res_add;
double res_sub;
double res_pro;
double res_quo;
double res_rem;
char execution;
char execution_answer;
int loop = 0;


double add(double number_0, double number_1)
{
    return number_0 + number_1;
}
double sub(double number_0, double number_1)
{
    return number_0 - number_1;
}
double power(double nbase, double npower)
{
    return pow(nbase, npower);
}
double quo(double ndivident, double ndivisor)
{
    return ndivident / ndivisor;
}
double rem(double ndivident, double ndivisor)
{
    return fmod(ndivident, ndivisor);
}
double pro(double number_0, double number_1)
{
    return number_0 * number_1;
}
double sqrut(double number)
{
    return sqrt(number);
}
void error_color()
{
    printf("\033[1;31m");
}
void sucess_color()
{
    printf(" \033[0;32m");
}
void reset_color()
{
    printf("\033[0m");
}
int main()
{
    printf("Basic C-lang calculator.\n");
    while (loop != 1)
    {
        printf("Choose your operation(+,-,*,/,p,s,a): \n");
        Readstrop = scanf("%s", &strop);
        switch (strop)
        {
        case '+':
            printf("Enter your first number: \n");
            ReadDof = scanf("%lf", &dof_num);
            if (ReadDof != 1)
            {
                error_color();
                printf("Invalid input");
                reset_color();
                return 0;
            }
            else
            {
                printf("Enter your second number: \n");
                ReadDos = scanf("%lf", &dos_num);
                if (ReadDos != 1)
                {
                    error_color();
                    printf("Invalid input");
                    reset_color();
                }
                else
                {
                    sucess_color();
                    res = add(dof_num, dos_num);
                    printf("%.lf plus %.1lf gives %.4lf", dof_num, dos_num, res);
                    reset_color();
                    getchar();
                }
            }
            break;
        case '-':
            printf("Enter your first number: \n");
            ReadDof = scanf("%lf", &dof_num);
            if (ReadDof != 1)
            {
                error_color();
                printf("Invalid input");
                reset_color();
                return 0;
            }
            else
            {
                printf("Enter your second number: \n");
                ReadDos = scanf("%lf", &dos_num);
                if (ReadDos != 1)
                {
                    error_color();
                    printf("Invalid input");
                    reset_color();
                }
                else
                {
                    res = sub(dof_num, dos_num);
                    sucess_color();
                    printf("%.1lf subtracted by %.1lf gives %.4lf", dof_num, dos_num, res);
                    reset_color();
                    getchar();
                }
            }
            break;
        case '*':
            printf("Enter your first number: \n");
            ReadDof = scanf("%lf", &dof_num);
            if (ReadDof != 1)
            {
                error_color();
                printf("Invalid input");
                reset_color();
                return 0;
            }
            else
            {
                printf("Enter your second number: \n");
                ReadDos = scanf("%lf", &dos_num);
                if (ReadDos != 1)
                {
                    error_color();
                    printf("Invalid input");
                    reset_color();
                }
                else
                {
                    res = pro(dof_num, dos_num);
                    sucess_color();
                    printf("Product of %.1lf and %.1lf is %.4lf", dof_num, dos_num, res);
                    reset_color();
                    getchar();
                }
            }
            break;
        case '/':
            printf("Enter your divident number: \n");
            ReadDof = scanf("%lf", &dof_num);
            if (ReadDof != 1)
            {
                error_color();
                printf("Invalid input");
                reset_color();
                return 0;
            }
            else
            {
                printf("Enter your divisor number: \n");
                ReadDos = scanf("%lf", &dos_num);
                if (ReadDos != 1)
                {
                    error_color();
                    printf("Invalid input");
                    reset_color();
                }
                else
                {
                    res_quo = quo(dof_num, dos_num);
                    res_rem = rem(dof_num, dos_num);
                    sucess_color();
                    printf("%.1lf divided by %.1lf gives %.1lf as quotient and %.1lf as remainder", dof_num, dos_num, res_quo, res_rem);
                    reset_color();
                    getchar();
                }
            }
            break;
        case 'p':
            printf("Enter your base number: \n");
            ReadDof = scanf("%lf", &dof_num);
            if (ReadDof != 1)
            {
                error_color();
                printf("Invalid input");
                reset_color();
                return 0;
            }
            else
            {
                printf("Enter your power: \n");
                ReadDos = scanf("%lf", &dos_num);
                if (ReadDos != 1)
                {
                    error_color();
                    printf("Invalid input");
                    reset_color();
                }
                else
                {
                    res_pow = power(dof_num, dos_num);
                    sucess_color();
                    printf("%.1lf^%.1lf gives %.4lf", dof_num, dos_num, res_pow);
                    reset_color();
                    getchar();
                }
            }
            break;
        case 's':
            printf("Enter your number: \n");
            ReadDof = scanf("%lf", &dof_num);
            if (ReadDof != 1)
            {
                error_color();
                printf("Invalid input");
                reset_color();
                return 0;
            }
            else
            {
                res_sqrt = sqrut(dof_num);
                sucess_color();
                printf("Square root of %.1lf is %.4lf", dof_num, res_sqrt);
                reset_color();
                getchar();
            }
            break;
        case 'a':
            printf("Enter your first number: \n");
            ReadDof = scanf("%lf", &dof_num);
            if (ReadDof != 1)
            {
                error_color();
                printf("Please provide a valid number");
                reset_color();
            }
            else
            {
                printf("Enter your second number: \n");
                ReadDos = scanf("%lf", &dos_num);
                if (ReadDos != 1)
                {
                    error_color();
                    printf("Please provide a valid number ");
                    reset_color();
                }
                else
                {
                    res_add = add(dof_num, dos_num);
                    res_sub = sub(dof_num, dos_num);
                    res_pow = power(dof_num, dos_num);
                    res_rem = rem(dof_num, dos_num);
                    res_quo = quo(dof_num, dos_num);
                    res_sqrt = sqrut(dof_num);
                    res_sqrt_ = sqrut(dos_num);
                    sucess_color();
                    printf("%.1lf+%.1lf gives %.4lf\n", dof_num, dos_num, res_add);
                    printf("%.1lf-%.1lf gives %.4lf\n", dof_num, dos_num, res_sub);
                    printf("%.1lf/%.1lf gives %.4lf as quotient and %.4lf as remainder\n", dof_num, dos_num, res_quo, res_rem);
                    printf("%.1lf*%.1lf gives %.4lf\n", dof_num, dos_num, res_pro);
                    printf("%.1lf^%.1lf gives %.4lf\n", dof_num, dos_num, res_pow);
                    printf("Square root of %.1lf is %4.lf\n", dof_num, res_pow);
                    printf("Square root of %.1lf is %4.lf\n", dos_num, res_pow);
                    reset_color();
                    getchar();
                }
            }
            break;
        }
        printf("Do you want execute the code again(y for yes,n for no)?\n");
        execution = scanf("%s", &execution_answer);
        if (execution_answer == 'y')
        {
            continue;
        }
        else if (execution_answer == 'n')
        {
            break;
        }
        else
        {
            break;
        }
    }
    return 0;
}
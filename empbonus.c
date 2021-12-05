# include <stdio.h>
void main()
{
    int bs,al,ded,gs,ns,exp,bonus;
    bs=al=ded=ns=exp=bonus=0;

    printf("Enter Basic Salary....:");
    scanf("%d",&bs);
    printf("Enter Allowances......:");
    scanf("%d",&al);
    printf("Enter Deductions......:");
    scanf("%d",&ded);
    printf("Enter ur  Experience.:");
    scanf("%d",&exp);

    gs=bs+al;
    ns=gs-ded;

    if(exp>5)
        bonus=ns*3;
    else
          if(exp>3)
             bonus=ns*2;
          else
                bonus=ns;

 printf("\nGross Salary....:%d",gs);
 printf("\nNet Salary........:%d",ns);
 printf("\nBonus for %d years of Experience is:%d",exp,bonus);

  printf("\n");
}


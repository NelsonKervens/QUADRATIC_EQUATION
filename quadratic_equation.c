#include<stdio.h>
#include<stdlib.h>
#include<math.h>
   int main(int argc, char *argv[])
 {
   double get_d=0, Term_a=0, Term_b=0, Term_c=0, x=0, x1=0, x2=0, Dis_nt=0;
   int continue_Programm=0;
   printf("     <<<QUADRATIC EQUATION>>>\n\n");
   printf("L'équation de présente sous la forme de ax2+bx+c=0\n\n");
   printf("Pour continuer le programme :\n") ;
 
   do{
   printf("Entrer la valeur de a (NB: nombre):\n");
   scanf("%lf", &Term_a);
   printf("Entrer la valeur de b:\n");
   scanf("%lf", &Term_b);
   printf("Entrer la valeur de c:\n");
   scanf("%lf", &Term_c);

   printf("Nous allons travailler avec les valeurs suivantes :\n A—>%.2lf\n   B—>%.2lf\n     C—>%.2lf\n\n", Term_a, Term_b, Term_c);
   printf("L'equation devient: %.0lfx^2+%.0lfx+(%.0f)=0\n", Term_a, Term_b, Term_c);
   Dis_nt=pow(Term_b,2)-4*Term_a*Term_c;
   printf("Delta=%.2lf\n\n", Dis_nt);
   //Les conditions
   if(Dis_nt>0)
  {
    printf("Delta étant plus grand que 0 donc il y a deux solutions :\n");
    get_d=sqrt(Dis_nt);
    x1=((-Term_b)-(get_d))/(2*Term_a);
    x2=(-(Term_b)+(get_d))/(2*Term_a);

    printf("L'ensemble de solutions est: S={%.2lf;%.2lf}\n", x1, x2);
    }
     else if(Dis_nt<0)
    {
      printf("Delta étant plus petit que 0 donc pas de solutions.\n");
    }
     else
    {
    printf("Delta étant égal à 0 donc il y a une seule solution.\n");
    x=(-Term_b)/(2*Term_a);
    printf("L'ensemble de solutions est est : S={%.2lf}\n", x);
    }
   
    printf("\nAppuyez sur 1 pour continuer et 0 pour fermer: oui(1) / non(0)\n\n");
    scanf("%d", &continue_Programm);
    }while(continue_Programm==1);
    printf("PROGRAMME FERMÉ.\n");
      return 0;
  }
    
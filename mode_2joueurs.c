#include<stdio.h>
#include <stdlib.h> 
#include <time.h> 
int plus_moins(int choix, int valeur)
{
        if(choix < valeur)
        {
                printf("Plus\n");
        }

        else if(choix > valeur)
        { 
                printf("Moins\n");
        }

       else
       { 
                printf("Bingo!\n");
        }
}

//Pour randomiser et stocker la valeur 
int randoms(int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++)
      {
        int num = (rand() % (upper - lower + 1)) + lower;
        return num;
      }
}

//Le mode a 2 joueurs
int deux_joueurs()
{
     int nomb_tour,nomb_coup,c,b=0;
     int joueur=0,a=0;
     int lower=0, upper=100, count=1;
     srand(time(0));
     int choix_joueur=0;
     int valeur_a_trouver=randoms(lower,upper,count);
     printf("Choisissez le nombre de tours : \n");
     scanf("%d",&nomb_tour);
     for(int j=1;j<=nomb_tour;j++)
         {
             printf("Choisissez le nombre de coups superiure a dix : \n");
             scanf("%d",&nomb_coup);
             printf("Quelle joueur est en train de jouer: \n");
             scanf("%d",&joueur);
             b=0;
             if(joueur==1)
              {
                for(int i=1;i<=nomb_coup;i++)
                 {
                  printf("Veuillez entrer un chiffre entier : \n");
                  scanf("%d",&choix_joueur);
                  plus_moins(choix_joueur,valeur_a_trouver);
                  if (choix_joueur == valeur_a_trouver)
                     {
                       c=nomb_coup-b;
                       printf("Le score de joueur 1 est de :%d \t ",c);
                       break;
                     }
                  b++;
                  
                 }
              }
               else
                 {
                   for(int i=1;i<=nomb_coup;i++)
                     {
                       printf("Veuillez entrer un chiffre entier : \n");
                       scanf("%d",&choix_joueur);
                       plus_moins(choix_joueur,valeur_a_trouver);
                       if (choix_joueur == valeur_a_trouver)
                          {
                            c=nomb_coup-b;
                            printf("Le score de joueur 2 est de :%d \t",c);
                            break;
                          }
                       b++;
                      }
                 }
             

         }   

}

int main()
{
        int lower=0, upper=100, count=1;
	int choix_joueur;
        int a=0,x=0;
        int diff,mode;
        srand(time(0));
        int valeur_a_trouver=randoms(lower,upper,count);
        printf("Entrer le nombre de jouers. \n");
        printf("1 joueur\n");
        printf("2 joueurs\n");
        scanf("%d",&mode);
        if (mode==2 )
        {
          deux_joueurs();
          exit(0);
        }


	if (diff==2)
        {
          for(int i=1;i<=25;i++)
          {
            printf("\n Veuillez entrer un chiffre entier : \n");
            scanf("%d",&choix_joueur);
            plus_moins(choix_joueur,valeur_a_trouver);
            if (choix_joueur == valeur_a_trouver)
             {
               break;
             }
            a++;
          }
            
        }
        
	else
        {
          if (diff==3)
          {
            for(int i=1;i<=10;i++)
            {
               printf("Veuillez entrer un chiffre entier : \n");
               scanf("%d",&choix_joueur);
               plus_moins(choix_joueur,valeur_a_trouver);
                if (choix_joueur == valeur_a_trouver)
                 {
                    break;
                 }
               a++;
            }
           
            
          }
          else
          {
            while (choix_joueur != valeur_a_trouver)
            {
               printf(" \n Veuillez entrer un chiffre entier : \n");
               scanf("%d",&choix_joueur);
               plus_moins(choix_joueur,valeur_a_trouver);
               a++;
            }
           
          }

        }
        printf("Nombre de tentatives : %d\n",a);
}



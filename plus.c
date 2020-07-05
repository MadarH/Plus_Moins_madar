#include<stdio.h>
#include<stdlib.h>

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

int main()
{
	int a;
	int b;
	b = rand()%100 + 1;
	{
	     do
	     {
		printf("Veuillez entrer un chiffre de votre choix:\n");
		scanf("%d", &a);
		plus_moins(a,b);
	     }while (a!=b);

	}
}




#include<stdio.h>


float taille=0;
int choix=0;

int main(){




	while(1){
		
		printf("Choississez une unité de taille : cm ou inch. in : taper 1, cm : taper 2\n");
		scanf("%d",&choix);
		printf("Entrez la valeur de la taille\n");
		scanf("%f",&taille);
		printf("%f\n",taille);
		if(choix==1){
			taille=taille*2.54;
			printf("Taille en cm : %f\n",taille);
		}
		else if(choix==2){
			taille=taille*(1/2.54);
			printf("Taille en inch : %f\n",taille);
		}
		else{
			printf("Recommencer\n");
		}



	}



return 0;
}

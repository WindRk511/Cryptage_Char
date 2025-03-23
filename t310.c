/*Algorithme crytage_de_mot
variable i,k,l,j:entier;
	 PHRASE[100]:chaine de caractere;
debut
	ecrire("Ecrire votre phrase:\n");
	lire(PHRASE);

	l<-longueur(PHRASE);

	tantque(l>50)
		si l>100 alors
			afficher("Votre phrase doit inferieur de 100)\n");
			afficher("et 50 caractere est recommander\n...Veuillez reessayer...\n\n");
			fin;
		finsi

		afficher("Votre phrase est recommander de contenir au plus de 50 caracteres\n\n");
		afficher("Vous voullez contunier(1) ou reessayer(0):\n");
		lire(k);
		
		si k=1 alors
			
			sortie;
			sinon si k=0 alors
					exit (0);
				      sinon
			    		 printf("Choix incorrect!!!\n\n");
					 fin;
			      finsi
		finsi 
  	fintantque

	//criptage

	pour(i<-0;i<l;i++)
		si (PHRASE[i] != 'a' && PHRASE[i] != 'e' && PHRASE[i] != 'i' && PHRASE[i] != 'o' && PHRASE[i] != 'u' && PHRASE[i] != 'y' && PHRASE[i] != 'A' && PHRASE[i] != 'E' && PHRASE[i] != 'I' && PHRASE[i] != 'O' && PHRASE[i] != 'U' && PHRASE[i] != 'Y') && (PHRASE[i+1] == 'a' || PHRASE[i+1] == 'e' || PHRASE[i+1] = 'i' || PHRASE[i+1] = 'o' || PHRASE[i+1] = 'u' || PHRASE[i+1] = 'y' || PHRASE[i+1] = 'A' || PHRASE[i+1] = 'E' || PHRASE[i+1] = 'I' || PHRASE[i+1] = 'O' || PHRASE[i+1] = 'U' || PHRASE[i+1] = 'Y') alors
			pour(j<-l;j>=i;j--)
				PHRASE[j+2]<-PHRASE[j];
			finpour	
			
			PHRASE[i]='I';
			PHRASE[i+1]='T';
			j=j+2;
			i=i+2;
			break;
		finsi
		
		l<-longueur(PHRASE);
		si l>100 alors
			afficher("Erreur!!! le tableau est saturee\n");
			fin;
		finsi	
	finpour	

	//affichage de phrase crypter
	
	afficher("\n\nPhrase crypté:\n");
	afficher(PHRASE,"\n");
fin	
*/

// C

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
	int i,k,j,l;
	char PHRASE[100];

	printf("Ecrire votre phrase:\n");
	fgets(PHRASE,sizeof(PHRASE),stdin);

	l=strlen(PHRASE);

	while(l>50) {
		if (l>100) {
			printf("Votre phrase doit inferieur de 100)\n");
			printf("et 50 caractere est recommander\n...Veuillez reessayer...\n\n");
			exit (0);
		}

		printf("Votre phrase est recommander de contenir au plus de 50 caracteres\n\n");
		printf("Vous voullez contunier(1) ou reessayer(0):\n");
		scanf("%d",&k);
		
		if (k==1) {
			break;
		}	
		else if (k==0) { 
			exit (0);
		}	
		else {
			printf("Choix incorrect!!!\n\n");
					 exit (1);
		} 
	}

	//criptage

	for(i=1;i<l;i++) {
		if (((PHRASE[i-1] != 'a') && (PHRASE[i-1] != 'e') && (PHRASE[i-1] != 'i') && (PHRASE[i-1] != 'o') && (PHRASE[i-1] != 'u') && (PHRASE[i-1] != 'y') && (PHRASE[i-1] != 'A') && (PHRASE[i-1] != 'E') && (PHRASE[i-1] != 'I') && (PHRASE[i-1] != 'O') && (PHRASE[i-1] != 'U') && (PHRASE[i-1] != 'Y'))
 && ((PHRASE[i] == 'a') || (PHRASE[i] == 'e') || (PHRASE[i] == 'i') || (PHRASE[i] == 'o') || (PHRASE[i] == 'u') || (PHRASE[i] == 'y') || (PHRASE[i] == 'A') || (PHRASE[i] == 'E') || (PHRASE[i] == 'I') || (PHRASE[i] == 'O') || (PHRASE[i] == 'U') || (PHRASE[i] == 'Y')))  {
			printf("\ni=%d",i);
			for(j=l;j>=i;j--) {
				PHRASE[j+2]=PHRASE[j];
			}
			
			PHRASE[i]='I';
			PHRASE[i+1]='T';
			j=j+2;
			i=j+2;
			printf("\n%s \n",PHRASE);
			l=strlen(PHRASE);
		}
		
		
		if (l>100) {
			printf("Erreur!!! le tableau est saturee\n");
			exit (1);
		}	
	}	

	//affichage de phrase crypter
	
	printf("\n\nPhrase crypté:\n");
	printf("%s \n",PHRASE);
	
	return (0);
}

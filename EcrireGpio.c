#include <stdlib.h>
#include <stdio.h>

void EcrireGpio (int num_gpio, char valeurGpio)
{
	// Creation du nom de fichier et ouverture de celui-ci
	
    FILE *gpio = NULL;
   
    char fichier[128] = "";
    snprintf(fichier, sizeof fichier, "test%d.txt", num_gpio);
	
	gpio = fopen(fichier, "w");
	
    if (gpio != NULL)
		{
			if(valeurGpio == 0)
					fputc('0', gpio);
		
			else if(valeurGpio == 1)
					fputc('1', gpio);
		
			else if(valeurGpio == 8)
					fputc('8', gpio);
		
        fclose(gpio), gpio = NULL;
		}
	
    else
		{
        printf("erreur");
		}
}
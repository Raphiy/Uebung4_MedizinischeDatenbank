/*
 * main.c
 *
 *  Created on: 01.12.2019
 *      Author: Froemberg Raphael
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "db.h"
#include "analyse.h"

int eingabe;
int eingabe3;
int eingabe2 = 1;
int eingabe4;
char a[32];

int main(){
	setvbuf(stdout, NULL, _IONBF,0);
	initialize_db(); //Datenbank initialisieren
	printf("Willkommen!\n");
	while(eingabe2){ //Ausgabe der verschiedenen vorhandenen Funktionen
		printf("Bitte geben Sie die Zahl der Funktion ein, die Sie aufrufen wollen.\n");
		printf("1: compute_bmi\n");
		printf("2: identify_risks\n");
		printf("3: compute_bmip\n");
		printf("4: identify_risk_group\n");
		printf("5: identify_pregnant\n");
		printf("6: identify_missing_examination\n");
		printf("7: search_by_name\n");
		printf("0: Verlassen\n");
		scanf("%d", &eingabe);
		switch(eingabe){ //Auswahl der vom User ausgewählten Funktion
			case 1:
				printf("Bitte Patientennummer eingeben:\n");
				scanf("%d", &eingabe3);
				if (eingabe3 >= MAX){
					printf("\n\n");
					printf("Patient existiert nicht\n\n\n");
					break;
				}
				printf("\n\n");
				printf("%f\n\n\n", compute_bmi(patienten_db[eingabe3]));
				break;
			case 2:
				printf("\n\n");
				identify_risks();
				printf("\n\n");
				break;
			case 3:
				printf("Bitte Patientennummer eingeben!\n");
				scanf("%d", &eingabe3);
				if (eingabe3 >= MAX){
					printf("\n\n");
					printf("Patient existiert nicht\n\n\n");
					break;
				}
				printf("\n\n");
				printf("%f\n\n\n", compute_bmip(&patienten_db[eingabe3]));
				break;
			case 4:
				printf("Bitte geben sie eine Patientennummer ein, ab welcher die Risikopatienten ausgegeben werden sollen!\n");
				scanf("%d", &eingabe4);
				if (eingabe4 >= MAX){
					printf("\n\n");
					printf("Patient existiert nicht\n\n\n");
					break;
				}
				printf("\n\n");
				identify_risk_group(&patienten_db[0], eingabe4);
				printf("\n\n");
				break;
			case 5:
				printf("\n\n");
				identify_pregnant();
				printf("\n\n");
				break;
			case 6:
				printf("\n\n");
				identify_missing_examination();
				printf("\n\n");
				break;
			case 7:
				printf("Geben Sie einen Nachnamen ein!\n");
				scanf("%s", a);
				printf("\n\n");
				search_by_name(a);
				printf("\n\n");
				break;
			case 0:
				eingabe2 = 0;
				break;
			default:
				printf("Ungültige Zahl\n");
				eingabe2 = 0;
				break;
		}
		if(eingabe2 == 0){
			printf("Auf Wiedersehen!\n");
		}
	}


	return 0;
}

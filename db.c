/*
 * db.c
 *
 *  Created on: 01.12.2019
 *      Author: Froemberg Raphael
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "db.h"
#include "analyse.h"

#define MAX 5

void initialize_db(){

	//Eingabe vordefinierter Patienten Informationen
    patient Patient1;
    strcpy(Patient1.Vorname,"Peter");
    strcpy(Patient1.Nachname,"Mayer");
    Patient1.Alter = 65;
    Patient1.Geschlecht = 'm';
    Patient1.Gewicht = 65;
    Patient1.Koerpergroesse = 171;
    strcpy(Patient1.letzte_Lymphknotenuntersuchung, "12.03.2019");

    patient Patient2;
    strcpy(Patient2.Vorname,"Petra");
    strcpy(Patient2.Nachname,"Müller");
    Patient2.Alter = 22;
    Patient2.Geschlecht = 'w';
    Patient2.Gewicht = 52;
    Patient2.Koerpergroesse = 166;
    Patient2.istSchwanger = 1;
    strcpy(Patient2.letzte_Brustuntersuchung, "1.12.2019");

    patient Patient3;
    strcpy(Patient3.Vorname,"Hans");
    strcpy(Patient3.Nachname,"Bauer");
    Patient3.Alter = 32;
    Patient3.Geschlecht = 'm';
    Patient3.Gewicht = 90;
    Patient3.Koerpergroesse = 182;
    strcpy(Patient3.letzte_Lymphknotenuntersuchung, "unbekannt");

    patient Patient4;
    strcpy(Patient4.Vorname,"Martha");
    strcpy(Patient4.Nachname,"Eder");
    Patient4.Alter = 47;
    Patient4.Geschlecht = 'w';
    Patient4.Gewicht = 63;
    Patient4.Koerpergroesse = 177;
    Patient4.istSchwanger = 0;
    strcpy(Patient4.letzte_Brustuntersuchung, "unbekannt");

    patient Patient5;
    strcpy(Patient5.Vorname,"Herbert");
    strcpy(Patient5.Nachname,"Schäfer");
    Patient5.Alter = 43;
    Patient5.Geschlecht = 'm';
    Patient5.Gewicht = 90;
    Patient5.Koerpergroesse = 182;
    strcpy(Patient5.letzte_Lymphknotenuntersuchung, "12.04.2018");

    //Einfügen der Patienten in Patienten Datenbank
    patienten_db[0] = Patient1;
    patienten_db[1] = Patient2;
    patienten_db[2] = Patient3;
    patienten_db[3] = Patient4;
    patienten_db[4] = Patient5;
}

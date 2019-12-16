/*
 * db.h
 *
 *  Created on: 01.12.2019
 *      Author: Froemberg Raphael
 */

#ifndef DB_H_
#define DB_H_

 // Datenbankinhalte und weitere benötigten Variablen definieren

typedef struct{
	char Nachname[32];
	char Vorname[32];
	int Alter;
	char Geschlecht;
	int Gewicht;
	int Koerpergroesse;
	union{
		char letzte_Lymphknotenuntersuchung[11];
		struct{
			char letzte_Brustuntersuchung[11];
			int istSchwanger;
		};
	};
}patient;

patient patienten_db[100];

void initialize_db();

#endif /* DB_H_ */

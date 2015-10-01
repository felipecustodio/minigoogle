#ifndef __GOOGLE_H__
#define __GOOGLE_H__

#include "website.h"
#include "globals.h"

/*-------------------------------------------------------

	DEFINIÇÕES
	
---------------------------------------------------------*/

// Relevância máxima
#define MAX_RANK 1000
// Limite de palavras-chave
#define MAX_KEYWORDS 10

typedef struct database {

	// Lista circular com cabeçalho
	WEBSITE *header;
	int size;

} DATABASE;

/*-------------------------------------------------------

	FUNÇÕES DO MENU
	
---------------------------------------------------------*/

// Funções funcionando:
void createDatabase(DATABASE **database);
boolean insertWebsite(DATABASE *data, WEBSITE *newWebsite);

// Funções para terminar/testar:
WEBSITE insertKeyword(WEBSITE *site, char* newKeyword);
void removeWebsite();
void updateRank(WEBSITE *site, int newRank);
void printList();
void searchKeyword(DATABASE *database, char *keyword);
void relatedWebsites();
boolean emptyList(DATABASE *database);
void shutdown();

//new function
void writeCSVFile(DATABASE* database);
WEBSITE* searchID(DATABASE* database, const int id);

#endif
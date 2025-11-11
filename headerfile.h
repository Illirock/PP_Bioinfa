#ifndef PP_BIOINFA_HEADERFILE_H
#define PP_BIOINFA_HEADERFILE_H

extern double temperaturesHistory[100];
extern char degreeTypesHistory[100];
extern int dataCounter;

int choiseValidation();
float temperatureValidation();

float FtoC(float F);
float FtoK(float F);
float CtoF(float C);
float CtoK(float C);
float KtoC(float K);
float KtoF(float K);

float getF();
float getC();
float getK();

int check(float temperature, char degreeType);

void showMenu();
void showHistoryMenu();

void saveData(float temperature, float convertedTemperature, char degreeType, char convertedDegreeType);

void showHistory();
void showFullHistory();

void deleteRecord();

void modifyRecord();

void fillHistoryWithRandomValues();

#endif

#ifndef JOGO_H
#define JOGO_H

#include "campo.h"

void inicializaBombas(int numBomb, char (*campo)[SIZE]);

void sensorBombas(char (*campo)[SIZE], char (*campoClone)[SIZE]);

void verificaCampo(char (*campo)[SIZE], char (*campoClone)[SIZE], int x, int y, int *points, int pointsValue);

void flagPosition(char (*campo)[SIZE]);

void flagSuggestion (int *numFlags, char (*campo)[SIZE]);

int verificaVitoria(char campo[SIZE][SIZE], char campoClone[SIZE][SIZE]);

void printfVitoria();

void jogaJogo(char (*campo)[SIZE], char (*campoClone)[SIZE], int *points, int pointsValue, int numFlags);

#endif

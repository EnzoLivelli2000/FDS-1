#pragma once

#include "Columm.h"
#include "Row.h"
#include <vector>

using namespace std;


class DataFrame {
private:
	vector<Row> Filas;
	vector<Column> Columnas;
	int elementos;

public:

	void a�adirFila(Row a) {
		Filas.push_back(a);
		for (int i = 0; i < n; i++) {
			Columnas[i].a�adirDatos(a.getAt(i));
		}
	}
	void editar() {

	}
	void ordenarDatos(){}
	void editarDatos(){}

	vector<Row> filtrarDatos(char a, string b, int f) { // f sera la columnas lo remplazaremos por un string mas adelante
		vector<Row> filas2;
		switch (a) {
		case '>':
			int a = stoi(b);
			for (int i = 0; i < n; i++) {
				int b = stoi(Columnas[f].getE(i));
				if (b > a) {
					filas2.push_back(Filas[i]);
				}
			}
			break;
		case '<':
			int a = stoi(b);
			for (int i = 0; i < n; i++) {
				int b = stoi(Columnas[f].getE(i));
				if (b > a) {
					filas2.push_back(Filas[i]);
				}
			}
			break;
		case '=':
			int a = stoi(b);
			for (int i = 0; i < n; i++) {
				int b = stoi(Columnas[f].getE(i));
				if (b == a) {
					filas2.push_back(Filas[i]);
				}
			}
			break;
		case '0':
			for (int i = 0; i < n; i++) {
				b = Columnas[f].getE(i);
				if (b[0] == a[0]) {
					filas2.push_back(Filas[i]);
				}
			}
			break;
		case 'n':
			for (int i = 0; i < n; i++) {
				b = Columnas[f].getE(i);
				if (b[b.size()-1] == a[a.size()-1]) {
					filas2.push_back(Filas[i]);
				}
			}
			break;
		}
	}
};

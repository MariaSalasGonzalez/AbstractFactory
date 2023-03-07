#include"Grabador.h"
#include"Interfaz.h"
#include"Medio.h"
#include"Reproductor.h"
#include"FabricaEquipo.h"
#include"FabricaEquipoNuevo.h"
#include"FabricaEquipoViejo.h"


int main() {
	

	//variables comodin
	FabricaEquipo* fabEqui = NULL;
	int opcion;

	do {
		system("cls");
		fabEqui = NULL;
		cout << endl << endl;
		cout << "........................ABSTRACT FACTORY........................" << endl;
		cout << endl << endl;
		cout << "\t\t1---->Creacion Equipo Viejo\t\t" << endl;
		cout << "\t\t2---->Creacion Equipo Nuevo\t\t" << endl;
		cout << "\t\t3---->Salir  \t\t" << endl;
		cout << "\t\t Digite la Opcion Deseada\t\t" << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1: cout<<"Creacion Equipo Vejo\t\t" << endl;
			fabEqui = new FabricaEquipoViejo();
			break;
		case 2:cout << "Creacion Equipo Nuevo\t\t" << endl;
			fabEqui = new FabricaEquipoNuevo();
			break;
		case 3: system("cls");
			cout<< "\t\t¡Gracias!  \t\t" << endl;
		}
		cout << fabEqui->toString();
		system("pause");
		if (fabEqui != NULL) {
			delete fabEqui;
		}
	}
	while (opcion != 3);
	system("pause");
	return 0;
}
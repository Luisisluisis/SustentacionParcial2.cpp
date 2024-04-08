//4. Implementar un mecanismo que permita agregar en una lista los juegos favoritos de cada jugador
//Los 5 videojuegos:
//1. Free-Fire
//2. Flappy Bird 
//3. Candy Crush
//4. Fortnite 
//5. Cut the Rope.

//Luego hacer el ranking:
//1. El juego que mas le gusto a los 5 jugadores
//2. El juego normal de los 5 jugadores
//3. El juego que menos le gusto a los 5 jugadores

//videojuego, calificacion, ranking

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string obtenerNombreJuego (int juego) 
{
    switch(juego) 
    {
        case 1:
            return "Free-Fire";
        case 2:
            return "Flappy-Bird";
        case 3:
            return "Candy-Crush";
        case 4:
            return "Fortnite";
        case 5:
            return "Cut the Rope";
        default:
            return "Uknown, write just 1 of the 5 videogames";
    }
}

int main() 
{
    int contadorJuegos[5] = {0};

    for (int i = 0; i < 5; ++i) 
    {
        string jugador;
        cout << "Name of the player: ";
        cin >> jugador;

        for (int j = 1; j <= 5; ++j) 
        {
            int opcion;
            cout << jugador << ", you want to play " << obtenerNombreJuego(j) << "? (1. Más jugado, 2. Normal, 3. Menos jugado): ";
            cin >> opcion;

            contadorJuegos[j] += opcion;
        }
    }

    int menosGustado = 1, normal = 2, masGustado = 3;
    for (int j = 1; j <= 5; ++j) 
    {
        if (contadorJuegos[j] < contadorJuegos[menosGustado]) 
        {
            menosGustado = j;
        }

        if (contadorJuegos[j] > contadorJuegos[masGustado]) 
        {
            masGustado = j;
        }
    }

    cout << "\nRanking de juegos:\n";
    cout << "1. El juego menos gustado de los 5 fue: " << obtenerNombreJuego(menosGustado) << endl;
    cout << "2. El juego normal de los 5 fue: " << obtenerNombreJuego(normal) << endl;
    cout << "3. El juego más gustado de los 5 fue: " << obtenerNombreJuego(masGustado) << endl;

    return 0;
}

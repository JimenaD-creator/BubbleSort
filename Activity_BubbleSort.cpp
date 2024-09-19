#include <iostream>
#include <vector>

using namespace std;
void swap(int &a, int &b){
    int temporal = a;
    a = b;
    b = temporal;

}
void bubbleSort(vector<int>& cal) {
    int n = cal.size();
    for (int j = 0; j < n - 1; j++) {
        for (int k = 0; k < n - 1 - j; k++) {
            if (cal[k] > cal[k + 1]) {
                swap(cal[k], cal[k+1]);

            }
        }
    }
}

int main() {
    vector<int> cal(7); // Vector para almacenar 7 calificaciones

    // Entrada de calificaciones
    for (int i = 0; i < 7; i++) {
        cout << "Ingresa la calificación " << i + 1 << ": ";
        cin >> cal[i];
    }

    // Ordenar calificaciones en orden ascendente usando bubble sort
    bubbleSort(cal);

    // Mostrar calificaciones ordenadas
    cout << "\nCalificaciones ordenadas: ";
    for (int num : cal) {
        cout << num << " ";
    }
    cout << endl;

    int calificacion_minima = cal[0];
    int calificacion_maxima = cal[0];

    for (int i = 1; i < cal.size(); i++) {
        if (cal[i] < calificacion_minima) {
            calificacion_minima = cal[i];
        }
        if (cal[i] > calificacion_maxima) {
            calificacion_maxima = cal[i];
        }
    }

    // Mostrar la calificación más baja y más alta
    cout << "Calificación más baja: " << calificacion_minima << endl;
    cout << "Calificación más alta: " << calificacion_maxima << endl;
}
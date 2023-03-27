/*
El operador de continue se usa a menudo justo al comienzo de un ciclo para eliminar
casos innecesarios. Le permite simplificar el código y eliminar el largo if .
En el código - un programa para calcular el beneficio neto de la empresa. Este lee
ingresos y gastos de cin , pero suma solo cantidades positivas: ingresos. Todas las
cantidades negativas se ignoran.
El programa funciona muy bien, pero resultó que la persona que revisó el código no
conoce la declaración de continue , por lo que el cliente exige que se elimine.
¡Qué se puede hacer, la palabra del cliente es la ley! Empeora el código de tu programa
sin cambiar su comportamiento deshaciéndote de la instrucción continue .
Es decir, el programa debe realizar lo mismo pero ahora sin utilizar la palabra clave
continue .
*/
#include <iostream>
using namespace std;
int main() {
 int bill;
 int sum = 0;
 do {
 cin >> bill;
 // Esta construccion del if y continue nos permite ignorar casos
innecesarios
 if (bill <= 0) {
 continue;
 }
 cout << "Income: " << bill << endl;
 sum += bill;
 // la señal del final del programa será una cuenta de cero
 } while (bill != 0);
 cout << "Total income: " << sum << endl;
}

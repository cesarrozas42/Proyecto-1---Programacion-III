#include <iostream>
#include <cassert>
#include "CSVReader.h"
#include "motor_de_busqueda.h"

using namespace std;

void ejecutar_pruebas_motor(const motor_de_busqueda& motor) {
    cout << "=== PRUEBAS DEL MOTOR DE BÚSQUEDA ===\n";

    // Prueba 1: Subcadena parcial ("bar" -> "Barco", "Barber", etc.)
    auto res1 = motor.buscar_por_subcadena("bar");
    cout << "[TEST 1] Subcadena 'bar': " << res1.size() << " resultados.\n";

    // Prueba 2: Frase completa ("ghost ship")
    auto res2 = motor.buscar_por_subcadena("ghost ship");
    cout << "[TEST 2] Frase 'ghost ship': " << res2.size() << " resultados.\n";

    // Prueba 3: Insensibilidad a mayúsculas/minúsculas
    auto res3_lower = motor.buscar_por_subcadena("action");
    auto res3_upper = motor.buscar_por_subcadena("ACTION");
    assert(res3_lower.size() == res3_upper.size());
    cout << "[TEST 3] Sensibilidad Case-Insensitive: PASADO\n";

    cout << "=====================================\n\n";
}

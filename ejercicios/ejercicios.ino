
// Ejercicios de la serie de tutoriales de programación de u5a6i
// #5, if, else, else if y operadores relacionales

// Necesitarás abrir el serial monitor de tu proyecto arduino.
// - puedes hacer ctrl + shift + m
// - o ir a herramientas ( tools ) y elegir monitor serial ( serial monitor )

// Antes de ejecutar, intenta descubrir qué valor dará ( todos dan true o false )

void setup()
{
  Serial.begin(9600);
  Serial.print("Ejercicio 1: "  ); printBoolean(4 <= 3);                      // Mi respuesta:
  Serial.print("Ejercicio 2: "  ); printBoolean(3 != 3);                      // Mi respuesta:
  Serial.print("Ejercicio 3: "  ); printBoolean((8 <= 2 && 9 != 12));         // Mi respuesta:
  Serial.print("Ejercicio 4: "  ); printBoolean((21 > 2 || 1 <= 0));          // Mi respuesta:
  Serial.print("Ejercicio 5: "  ); printBoolean(((4 <= 7) && (23 > 13)));     // Mi respuesta:
  Serial.print("Ejercicio 6: "  ); printBoolean(((1 <= 5) || (6 > 52)));      // Mi respuesta:
  Serial.print("Ejercicio 7: "  ); printBoolean(((3 <= 4) && (9 > 44)));      // Mi respuesta:
  Serial.print("Ejercicio 8: "  ); printBoolean(!(true));                     // Mi respuesta:
  Serial.print("Ejercicio 9: "  ); printBoolean(((1 <= 5) && !(6 > 44)));     // Mi respuesta:
  Serial.print("Ejercicio 10: " ); printBoolean(!((6 != 5) || (12 > 1)));     // Mi respuesta:
  Serial.print("Ejercicio 11: " ); printBoolean((!(1 != 0) && !(1 == 0)));    // Mi respuesta:
  Serial.print("Ejercicio 12: " ); printBoolean((8 < 10));                    // Mi respuesta:
  Serial.print("Ejercicio 13: " ); printBoolean((8 > 10));                    // Mi respuesta:
  Serial.print("Ejercicio 14: " ); printBoolean(!(8 >= 10));                  // Mi respuesta:
  Serial.print("Ejercicio 15: " ); printBoolean(!!(true));                    // Mi respuesta:
  Serial.print("Ejercicio 16: " ); printBoolean(!!(6 < 10));                  // Mi respuesta:
  Serial.print("Ejercicio 17: " ); printBoolean(!!((4 > 6) && (9 > 3)));      // Mi respuesta:
  Serial.print("Ejercicio 18: " ); printBoolean(!!((4 > 6) || (9 > 3)));      // Mi respuesta:
  Serial.print("Ejercicio 19: " ); printBoolean(!!((2 >= 8) || !(16 > 1)));   // Mi respuesta:
  Serial.print("Ejercicio 20: " ); printBoolean(!!(!(6 <= 4) || !(9 >= 12))); // Mi respuesta:
}

void loop()
{
}

void printBoolean(bool condicion) {
  // if condicion == 1 => pintamos true
  // else => pintamos false
  Serial.println((condicion) ? "true": "false");
}
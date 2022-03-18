
// Examen final de la serie de tutoriales de programación de u5a6i
// #5, if, else, else if y operadores relacionales

// Necesitarás abrir el serial monitor de tu proyecto arduino.
// - puedes hacer ctrl + shift + m
// - o ir a herramientas ( tools ) y elegir monitor serial ( serial monitor )

int puntuacionTotal = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("Examen final de condicionales y operadores relacionales");
  Serial.println("Respuestas posibles: true, false");
  Serial.println("Mira en cada pregunta el trozo de código que está entre <código> y </código>");

  // Empieza el test
  puntuacionTotal = pregunta_1(puntuacionTotal);
  puntuacionTotal = pregunta_2(puntuacionTotal);
  puntuacionTotal = pregunta_3(puntuacionTotal);
  puntuacionTotal = pregunta_4(puntuacionTotal);
  puntuacionTotal = pregunta_5(puntuacionTotal);
  puntuacionTotal = pregunta_6(puntuacionTotal);
  puntuacionTotal = pregunta_7(puntuacionTotal);
  puntuacionTotal = pregunta_8(puntuacionTotal);
  puntuacionTotal = pregunta_9(puntuacionTotal);
  puntuacionTotal = pregunta_10(puntuacionTotal);

  // Pintamos el resultado
  Serial.println("");
  Serial.print("Puntuación final: ");
  Serial.print(puntuacionTotal);
  Serial.println("/10 puntos");
}

void loop()
{
}

int pregunta_1(int puntuacion) // (5 < 3)
{
  Serial.print("1) Respuesta: ");

  //----------------------------<código>
  bool comparacion = false;

  if (5 < 3)
  {
    comparacion = true;
  }
  //----------------------------</código>

  while (Serial.available() <= 0) // esperamos a que tenga datos que leer
  {
  }

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("false\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    Serial.println("Correcto!");
    Serial.println("");
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, 5 es mayor que 3, la respuesta sería false.");
    Serial.println("");
  }
  return puntuacion;
}

int pregunta_2(int puntuacion) // (9 >= 6)
{
  Serial.print("2) Respuesta: ");

  //----------------------------<código>
  bool comparacion = false;

  if (9 >= 6)
  {
    comparacion = true;
  }
  //----------------------------</código>

  while (Serial.available() <= 0) // esperamos a que tenga datos que leer
  {
  }

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("true\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    Serial.println("Correcto!");
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, 9 es mayor o igual a 6, la respuesta sería true.");
  }
  return puntuacion;
}

int pregunta_3(int puntuacion) // (9 >= 0 && 9 <= 10)
{
  Serial.print("3) Respuesta: ");

  //----------------------------<código>
  bool comparacion = false;

  if (9 >= 0 && 9 <= 10)
  {
    comparacion = true;
  }
  //----------------------------</código>

  while (Serial.available() <= 0) // esperamos a que tenga datos que leer
  {
  }

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("true\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    Serial.println("Correcto!");
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, 9 es mayor o igual que cero y menor o igual a 10, la respuesta sería true.");
  }
  return puntuacion;
}

int pregunta_4(int puntuacion) // (9 < 3 || 9 >= 10)
{
  Serial.print("4) Respuesta: ");

  //----------------------------<código>
  bool comparacion = false;

  if (9 < 3 || 9 >= 10)
  {
    comparacion = true;
  }
  //----------------------------</código>

  while (Serial.available() <= 0) // esperamos a que tenga datos que leer
  {
  }

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("false\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    Serial.println("Correcto!");
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, 9 no es menor que tres, tampoco es mayor o igual a 10, la respuesta sería false.");
  }
  return puntuacion;
}

int pregunta_5(int puntuacion) // (9 < 3 || 9 <= 10)
{
  Serial.print("5) Respuesta: ");

  //----------------------------<código>
  bool comparacion = false;

  if (9 < 3 || 9 <= 10)
  {
    comparacion = true;
  }
  //----------------------------</código>

  while (Serial.available() <= 0) // esperamos a que tenga datos que leer
  {
  }

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("true\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    Serial.println("Correcto!");
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, 9 no es menor que tres, pero es menor o igual a 10, la respuesta sería true.");
  }
  return puntuacion;
}

int pregunta_6(int puntuacion) // (8 > 6 && 8 <= 2)
{
  Serial.print("6) Respuesta: ");

  //----------------------------<código>
  bool comparacion = false;

  if (8 > 6 && 8 <= 2)
  {
    comparacion = true;
  }
  //----------------------------</código>

  while (Serial.available() <= 0) // esperamos a que tenga datos que leer
  {
  }

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("false\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    Serial.println("Correcto!");
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, aunque 8 es mayor que 6, la segunda condición no se cumple");
    Serial.println("y han de cumplirse ambas ( && ), la respuesta sería false.");
  }
  return puntuacion;
}

int pregunta_7(int puntuacion) // (8 < 10 && 8 >= 8)
{
  Serial.print("7) Respuesta: ");

  //----------------------------<código>
  bool comparacion = false;

  if (8 < 10 && 8 >= 8)
  {
    comparacion = true;
  }
  //----------------------------</código>

  while (Serial.available() <= 0) // esperamos a que tenga datos que leer
  {
  }

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("true\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    Serial.println("Correcto!");
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, 8 es menor que 10 y también (&&) 8 es mayor o igual a 8, la respuesta sería true");
  }
  return puntuacion;
}

int pregunta_8(int puntuacion) // (( 4 <= 6 ||  4 >= 9) && 12 >= 3)
{
  Serial.print("8) Respuesta: ");

  //----------------------------<código>
  bool comparacion = false;

  if ((4 <= 6 || 4 >= 9) && 12 >= 3)
  {
    comparacion = true;
  }
  //----------------------------</código>

  while (Serial.available() <= 0) // esperamos a que tenga datos que leer
  {
  }

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("true\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    Serial.println("Correcto!");
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, primero resuelve el paréntesis. 4 es menor o igual a 6. Como tiene un || (or)");
    Serial.println("la condición dará true, solamente hace falta que uno de los dos sea true. La segunda operación");
    Serial.println("sería true porque 12 es mayor o igual a 3. Entonces quedaría: true && true, la respuesta sería true");
  }
  return puntuacion;
}

int pregunta_9(int puntuacion) // ((4 <= 6 && 4 >= 9) && 12 >= 3)
{
  Serial.print("9) Respuesta: ");

  //----------------------------<código>
  bool comparacion = false;

  if ((4 <= 6 && 4 >= 9) && 12 >= 3)
  {
    comparacion = true;
  }
  //----------------------------</código>

  while (Serial.available() <= 0) // esperamos a que tenga datos que leer
  {
  }

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("false\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    Serial.println("Correcto!");
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, primero resuelve el paréntesis. 4 es menor o igual a 6, pero como tiene un && (and)");
    Serial.println("es obligatorio que ambas se cumplan para que sea true. Como una de ellas no se cumple, es false.");
    Serial.println("Entonces quedaría: false && true, la respuesta sería false");
  }
  return puntuacion;
}

int pregunta_10(int puntuacion) // (4 != 4)
{
  Serial.print("10) Respuesta: ");

  //----------------------------<código>
  bool comparacion = false;

  if (4 != 4)
  {
    comparacion = true;
  }
  //----------------------------</código>

  while (Serial.available() <= 0) // esperamos a que tenga datos que leer
  {
  }

  String incomingString = Serial.readString();
  Serial.println(incomingString);

  if (incomingString.compareTo("false\n") == 0) // el \n es porque al enviar, se le añade un salto de línea
  {
    Serial.println("Correcto!");
    puntuacion++;
  }
  else
  {
    Serial.println("Incorrecto, 4 no es distinto 4, no entraría en el if, la respuesta sería false");
  }
  return puntuacion;
}

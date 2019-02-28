/*
 * Talos Electronics 
 */
 
// Motor 1
int ENA = 10;
int IN1 = 9;
int IN2 = 8;

// Motor 2
int ENB = 5;
int IN3 = 7;
int IN4 = 6;

void setup ()
{
  // Declaramos los pines como salidas
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
}

void loop ()
{
  Adelante ();
  delay (5000);
  Atras ();
  delay (3000);
  Derecha ();
  delay (2000);
  Izquierda ();
  delay (2000);
  Parar ();
  delay (4000);
}

void Adelante ()
{
  //Direccion de motor 1
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  analogWrite (ENA, 255); //Velocidad de motor 1
  //Direccion de motor 2
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  analogWrite (ENB, 255); //Velocidad de motor 2
}

void Atras ()
{
  //Direccion de motor 1
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  analogWrite (ENA, 128);  //Velocidad de motor 1
  //Direccion de motor 2
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  analogWrite (ENB, 128); //Velocidad de motor 2
}

void Derecha ()
{
  //Direccion de motor 1
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  analogWrite (ENA, 200); //Velocidad de motor 1
  //Direccion motor 2
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  analogWrite (ENB, 100); //Velocidad de motor 2
}

void Izquierda ()
{
  //Direccion de motor 1
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  analogWrite (ENA, 50); //Velocidad de motor 1
  //Direccion de motor 2
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  analogWrite (ENB, 150); //Velocidad de motor 2
}

void Parar ()
{
  //Direccion de motor 1
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  analogWrite (ENA, 0); //Velocidad de motor 1
  //Direccion de motor 2
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
  analogWrite (ENB, 0); //Velocidad de motor 2
}


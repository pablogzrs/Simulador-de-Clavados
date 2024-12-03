/*
Created on Thu Oct 31 02:08:03 2024

@author: pablo

Este es un código que simula una competencia de clavados. La lógica usada es como la de ina matrioshka, donde se parte de una funcion básica y la siguiente 
involucra a la anterior, para en el main extraer las calificaciones (lo más imporante) y al final determinar quién ganó. Lo de la estructura "de matrioshka"
lo menciono porque creo que para comprender mejor el codigo lo mejor es ver que hace cada funcion POR SEPARADO y luego leerlo de arriba a abajo. 
*/
// Librerias necesarias 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Esta es una funcion sin input que sólo genera un número random del 1 al 100
int generarNum1al100()
{
int eleccionPorcentaje=rand()%100+1;
return eleccionPorcentaje;
}
// Esta es una funcion cuyo unico input es el valor generado por generarNum1al100, y retorna un valor de dificultad random de acuerdo a la probabilidad
float rangosDificultad(int input) 
{
float dificultadElegida = 0; 
if (input < 6 && input > 0) 
{dificultadElegida = rand() % 6 + 14;} 
else if (input < 16 && input > 5) 
{dificultadElegida = rand() % 6 + 20;} 
else if (input < 31 && input > 15) 
{dificultadElegida = rand() % 6 + 25;} 
else if (input < 61 && input > 30) 
{dificultadElegida = rand() % 6 + 30;} 
else if (input < 81 && input > 60) 
{dificultadElegida = rand() % 6 + 35;} 
else if (input < 96 && input > 80) 
{dificultadElegida = rand() % 6 + 40;} 
else 
{dificultadElegida = rand() % 3 + 45;}
return dificultadElegida/10;
}
// Esta funcion, la mas larga, recibe la dificultad elegida y, de acuerdo a la misma, genera una calificacion para el clavado segun el rango en el que se encuentre
// tomando en cuenta que mientras más dificil sea el clavado, más probabilidad de tirar un clavado malo hay y viceversa. Retorna la calificacion dada por el primer juez solamente
float calificacionPrimerJuez(float dificultadClavado)
{
// Se definen todas las calificaciones posibles
float calificacionesPosibles[21]={0.0,0.5,1.0,1.5,2.0,2.5,3.0,3.5,4.0,4.5,5.0,5.5,6.0,6.5,7.0,7.5,8.0,8.5,9.0,9.5,10.0};
// Lo que hace esta parte es simular la probabilidad de que el clavado caiga en cierto rango de la calificacion, pero NO la dificultad (para eso la funcion anterior)
int probabilidadAleatoria=generarNum1al100();
float calificacionDada=0;
if (dificultadClavado <= 1.9 && dificultadClavado >= 1.4)
{
    if (probabilidadAleatoria <= 5) {
            int calificacionAOtorgar = rand() % 6; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 15) {
            int calificacionAOtorgar = rand() % 6 + 4; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 30) {
            int calificacionAOtorgar = rand() % 5 + 8; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 60) {
            int calificacionAOtorgar = rand() % 4 + 11; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 80) {
            int calificacionAOtorgar = rand() % 6 + 13; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 95) {
            int calificacionAOtorgar = rand() % 3 + 17; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else {
            int calificacionAOtorgar = rand() % 4 + 18; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        }
}
else if (dificultadClavado <= 2.5 && dificultadClavado >= 2.0)
{
if (probabilidadAleatoria <= 10) {
            int calificacionAOtorgar = rand() % 6; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 25) {
            int calificacionAOtorgar = rand() % 6 + 4; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 45) {
            int calificacionAOtorgar = rand() % 5 + 8; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 70) {
            int calificacionAOtorgar = rand() % 4 + 11; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 85) {
            int calificacionAOtorgar = rand() % 6 + 13; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 95) {
            int calificacionAOtorgar = rand() % 3 + 17; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else { 
            int calificacionAOtorgar = rand() % 4 + 18; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        }
}
else if (dificultadClavado <= 3.0 && dificultadClavado >= 2.5)
{
    if (probabilidadAleatoria <= 15) {
            int calificacionAOtorgar = rand() % 6; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 35) {
            int calificacionAOtorgar = rand() % 6 + 4; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 60) {
            int calificacionAOtorgar = rand() % 5 + 8; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 80) {
            int calificacionAOtorgar = rand() % 4 + 11; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 90) {
            int calificacionAOtorgar = rand() % 6 + 13; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 95) {
            int calificacionAOtorgar = rand() % 3 + 17;
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else { 
            int calificacionAOtorgar = rand() % 4 + 18; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        }
}
else if (dificultadClavado <= 3.5 && dificultadClavado >= 3.0 )
{
    if (probabilidadAleatoria <= 20) {
            int calificacionAOtorgar = rand() % 6; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 45) {
            int calificacionAOtorgar = rand() % 6 + 4; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 65) {
            int calificacionAOtorgar = rand() % 5 + 8; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 80) {
            int calificacionAOtorgar = rand() % 4 + 11; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 90) {
            int calificacionAOtorgar = rand() % 6 + 13; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 95) {
            int calificacionAOtorgar = rand() % 3 + 17; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else { 
            int calificacionAOtorgar = rand() % 4 + 18; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        }
}
else if (dificultadClavado <= 4.0 && dificultadClavado >= 3.5)
{
    if (probabilidadAleatoria <= 25) {
            int calificacionAOtorgar = rand() % 6; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 50) {
            int calificacionAOtorgar = rand() % 6 + 4;
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 70) {
            int calificacionAOtorgar = rand() % 5 + 8; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 85) {
            int calificacionAOtorgar = rand() % 4 + 11; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 95) {
            int calificacionAOtorgar = rand() % 6 + 13; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 96) {
            int calificacionAOtorgar = rand() % 3 + 17; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else { 
            int calificacionAOtorgar = rand() % 4 + 18; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        }
}
else if (dificultadClavado <= 4.5 && dificultadClavado >= 4.0)
{
   if (probabilidadAleatoria <= 30) {
            int calificacionAOtorgar = rand() % 6; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 50) {
            int calificacionAOtorgar = rand() % 6 + 4;
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 70) {
            int calificacionAOtorgar = rand() % 5 + 8; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 85) {
            int calificacionAOtorgar = rand() % 4 + 11; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 95) {
            int calificacionAOtorgar = rand() % 6 + 13; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 97) {
            int calificacionAOtorgar = rand() % 3 + 17; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else { 
            int calificacionAOtorgar = rand() % 4 + 18; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        }
}
else 
{
    if (probabilidadAleatoria <= 35) {
            int calificacionAOtorgar = rand() % 6; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 55) {
            int calificacionAOtorgar = rand() % 6 + 4;
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 75) {
            int calificacionAOtorgar = rand() % 5 + 8; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 85) {
            int calificacionAOtorgar = rand() % 4 + 11; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 95) {
            int calificacionAOtorgar = rand() % 6 + 13; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else if (probabilidadAleatoria <= 98) {
            int calificacionAOtorgar = rand() % 3 + 17; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        } else { 
            int calificacionAOtorgar = rand() % 4 + 18; 
            calificacionDada = calificacionesPosibles[calificacionAOtorgar];
        }
}
return calificacionDada;
}
// Esta función genera la calificacion del siguiente juez basada en la calificacion de la primera, dada cierta probabilidad de que esta sea diferente. 
// Retorna solamente la siguiente calificacion. El objetivo es meter esta a un for para que se ejecute 6 veces
float calificacionSiguientesJueces(float primerJuez)
{
// Lo que hace esta parte es simular la probabilidad de que el clavado caiga en cierto rango de diferencia, pero NO la calificacion (para eso la funcion anterior)
int probabilidadAleatoria = generarNum1al100();
float calificacionSiguienteJuez=0;
if (probabilidadAleatoria<=20)
    {calificacionSiguienteJuez=primerJuez;}
else if (probabilidadAleatoria<=35)
    {calificacionSiguienteJuez=primerJuez+0.5;}
else if (probabilidadAleatoria<=50)
    {calificacionSiguienteJuez=primerJuez-0.5;}
else if (probabilidadAleatoria<=60)
    {calificacionSiguienteJuez=primerJuez+1;}
else if (probabilidadAleatoria<=70)
    {calificacionSiguienteJuez=primerJuez-1;}
else if (probabilidadAleatoria<=77)
    {calificacionSiguienteJuez=primerJuez+1.5;}
else if (probabilidadAleatoria<=84)
    {calificacionSiguienteJuez=primerJuez-1.5;}
else if (probabilidadAleatoria<=89)
    {calificacionSiguienteJuez=primerJuez+2;}
else if (probabilidadAleatoria<=94)
    {calificacionSiguienteJuez=primerJuez-2;}
else if (probabilidadAleatoria<=97)
    {calificacionSiguienteJuez=primerJuez+2.5;}
else 
    {calificacionSiguienteJuez=primerJuez-2.5;}
if (calificacionSiguienteJuez>10 || calificacionSiguienteJuez<0)
    {calificacionSiguienteJuez=primerJuez;}
return calificacionSiguienteJuez;
}
// Lo que hace esta funcion es definir un void (es decir, que no haya output) en el que se van a ir guardando las calificaciones en un array dado (que esos estan definidos FUERA de la funcion, LO MAS IMPORTANTE)
// en base a la primera calificacion, que es otro de los inputs necesarios. Notese que se empezarán a guardan en la posicion 2, ya que la cero está reservada para la
    // dificultad, uno está reservada para la primera calificacion (que depende de la primera calificacion), y la ultima está reservada para la puntuacion otorgada por el clavado (definida en la siguiente funcion)
void ronda(float primeraCalificacion, float calificaciones[])
{
    int numeroJuez[6]= {2,3,4,5,6,7};
    for (int i=0;i<6;i++) 
    {  
        float calificacionNJuez = calificacionSiguientesJueces(primeraCalificacion);
        cout<<"El clavado ha sido calificado con un "<<calificacionNJuez<<" por el juez número "<<numeroJuez[i]<<endl;
        calificaciones[2+i]=calificacionNJuez;
    }
}

// Esta funcion retorna la puntuacion de el clavado de esa ronda dados como inputs el array ya llenado con las calificaciones y la dificultad.
// Básicamente, lo que hace es sumar todas las calificaciones, y restarle la suma de la calificaciones mayor y menor dadas, para posteriormente 
// multiplicar ese valor por la dificultad, y ahí si retornar la puntuacion de la ronda
float puntuacionRonda(float calificaciones[], float dificultadClavado)
{
    float mayor=calificaciones[1];
    float menor=calificaciones[1];
    float suma=0;
    for (int i=0;i<9;i++)
    {
        if (mayor<=calificaciones[i])
        {mayor=calificaciones[i];}
        if (menor>=calificaciones[i])
        {menor=calificaciones[i];}
        suma+=calificaciones[i];
    }
    float cosechaRonda=(suma-(menor+mayor))*dificultadClavado;
    
    return cosechaRonda;
}
// Esta funcion es la que mete todas las que serán necesarias para ejecutar TODOS LOS CLAVADOS DE UNA SOLA CLAVADISTA DE SÓLO DE UNA RONDA. Nótese como se usan todas las funciones anteriormente 
// definidas. Básicamente, sólo estructura los couts necesarios, por eso no hay output y se necesita un void
void ejecutarRonda(string clavadista, string pais, float calificaciones[]) {
    cout << "Es el turno de la participante " << clavadista << " representando a " << pais << endl;
    
    int probabilidadClavado = generarNum1al100();
    float clavadoEjecutara = rangosDificultad(probabilidadClavado);
    cout << "La clavadista ejecutará un clavado de dificultad " << clavadoEjecutara << " ¡Mucha Suerte!" << endl;

    
    float primerClavadoprimeraCalificacion = calificacionPrimerJuez(clavadoEjecutara);
    cout << "El clavado ha sido calificado con un " << primerClavadoprimeraCalificacion << " por el juez número 1" << endl;

    calificaciones[1] = primerClavadoprimeraCalificacion;
    ronda(primerClavadoprimeraCalificacion, calificaciones);
    calificaciones[8]=puntuacionRonda(calificaciones, clavadoEjecutara);
    calificaciones[0]=clavadoEjecutara;
    cout<<"Por lo tanto, la clavadista ha sumado "<<calificaciones[8]<<" puntos en esta ronda"<<endl;
    cout<<" "<<endl;
}
// ESTA ES LA FUNCION PRINCIPAL
// En esta, basicamente se define quien y de donde son, y como inputs se les dan los arrays definidos en el main que son necesarios para ejecutarse. En esta,
// se ejecutan TODOS LOS CLAVADOS DE TODAS LAS CLAVADISTAS DE CADA RONDA. Esta se ejecuta 5 veces en el main con distintos arrays que corresponden a cada ronda, 
// que conviene tenerlo así para poder hacer la tabla
string pais1= "México";
void ejecutarRondaVariasVeces(float calificaciones1[], float calificaciones2[], float calificaciones3[], float calificaciones4[], float calificaciones5[])
{
string pais2= "China";
string pais3= "Estados Unidos";
string pais4= "Australia";
string clavadista1= "Alejandra Orozco";
string clavadista2= "Paola Espinoza";
string clavadista3= "Chen Yiwen";
string clavadista4= "Sarah Bacon";
string clavadista5= "Melissa Wu";
ejecutarRonda(clavadista1,pais1,calificaciones1);
ejecutarRonda(clavadista2,pais1,calificaciones2);
ejecutarRonda(clavadista3,pais2,calificaciones3);
ejecutarRonda(clavadista4,pais3,calificaciones4);
ejecutarRonda(clavadista5,pais4,calificaciones5);
}
// Esta funcion lo unico que hace es imprimir los valores de la tabla para UNA CLAVADISTA, por eso se ejecuta 5 veces en el main. Lo unico que no imprime
// es el valor de la puntuacion total porque para eso hay otra funcion definida mas abajo, y esto es lo mejor que se me ocurrio para generar la tabla xd
void formatoTable(float listado1[], float listado2[], float listado3[], float listado4[], float listado5[], string nombre) {
    cout << " Participante: " << nombre << endl;
    cout<< ""<<endl;
    cout << "    1" << "         "<< listado1[0] << "                  "<< listado1[1]  <<"                   " << listado1[2]  <<"                   "<<listado1[3]  <<"                   "<<listado1[4]  <<"                   "<<listado1[5]  <<"                   "<<listado1[6]  <<"                   "<<listado1[7]  <<"                   "<<listado1[8]<<endl;
    cout << "    2" << "         "<< listado2[0] << "                  "<< listado2[1]  <<"                   " << listado2[2]  <<"                   "<<listado2[3]  <<"                   "<<listado2[4]  <<"                   "<<listado2[5]  <<"                   "<<listado2[6]  <<"                   "<<listado2[7]  <<"                   "<<listado2[8]<<endl;
    cout << "    3" << "         "<< listado3[0] << "                  "<< listado3[1]  <<"                   " << listado3[2]  <<"                   "<<listado3[3]  <<"                   "<<listado3[4]  <<"                   "<<listado3[5]  <<"                   "<<listado3[6]  <<"                   "<<listado3[7]  <<"                   "<<listado3[8]<<endl;
    cout << "    4" << "         "<< listado4[0] << "                  "<< listado4[1]  <<"                   " << listado4[2]  <<"                   "<<listado4[3]  <<"                   "<<listado4[4]  <<"                   "<<listado4[5]  <<"                   "<<listado4[6]  <<"                   "<<listado4[7]  <<"                   "<<listado4[8]<<endl;
    cout << "    5" << "         "<< listado5[0] << "                  "<< listado5[1]  <<"                   " << listado5[2]  <<"                   "<<listado5[3]  <<"                   "<<listado5[4]  <<"                   "<<listado5[5]  <<"                   "<<listado5[6]  <<"                   "<<listado5[7]  <<"                   "<<listado5[8]<<endl;
}
// Esta funcion recibirá como parametros las calificaciones totales de cada clavadista (la separacion de los valores de los arrays y la suma de los mismos esta definida en el main)
// Despues, se acomodan en otro array. //Tambien se define otro array donde tenemos participantes y los paises que representan.
// El cómo se determina quien gana, es de la siguiente manera: El oro, plata, y bronce se definen con cero porque no sabemos que puntaje hubo. Además, no sabemos
// quien tuvo ese puntaje. Pero sí sabamos que el oro siempre tiene que ser el valor mayor, y el valor mayor está asociado a la posicion de 0 a 4 del array de participantes,
// ya que ENTRAN EN ORDEN AL ARRAY DE COMPARATIVA (es decir, total1 está asociado a Ale Orozco, total 2 a Pao Espinoza y así sucesivamente). Por lo que cuando se encuentre la posicion
// del oro, tambien se encuentra quien fue porque a pesar de no estar en los mismos arrays si comparten la misma posicion. Ya en el cout, simplemente se traslada eso
// junto con la nacion de la ganadora/ segunda/ tercera, que siempre está a 5 posiciones del nombre de la participante (ex. Ale Orozco está en la cero, y México está en la 5, y así sucesivamente)
// La logica en plata cambia. Vamos a evitar el índice donde se haya encontrado el oro. Y además, si el valor de plata es igual a cero (su valor inicial)
// o en esa posicion se encontro un valor mas grande que plata, se actualizará tanto el valor como el donde (el == 0 es necesario para que se pueda ejectuar la primera iteracion y en esa misma se 
// cambie el valor de plata, para despues continuar hasta que ya no se cumpla la condicion y ya se hayan guardado las posiciones). Bronce funciona igual, pero se le añade también evitar la posicion de plata.
int medallero(float total1, float total2, float total3, float total4, float total5) {
    
    float comparativa[5] = {total1, total2, total3, total4, total5};
    
    string participantes[10] = {"Alejandra Orozco", "Paola Espinoza", "Chen Yiwen", "Sarah Bacon", "Melissa Wu",
                                "México", "México", "China", "Estados Unidos", "Australia"};
    
    float oro = 0, plata = 0, bronce = 0;
    int oroDondeEsta = 0, plataDondeEsta = 0, bronceDondeEsta = 0;

    for (int i = 0; i < 5; i++) {
        if (comparativa[i] > oro) {
            oro = comparativa[i];
            oroDondeEsta = i;
        }
    }
    cout<<" "<<endl;
    cout << "¡La ganadora es " << participantes[oroDondeEsta] << ", puntuando " << oro << " puntos!" << endl;
    cout << participantes[oroDondeEsta + 5] << " se lleva la medalla de oro" << endl;
    for (int i = 0; i < 5; i++) {
        if (i != oroDondeEsta && (plata == 0 || comparativa[i] > plata)) {
            plata = comparativa[i];
            plataDondeEsta = i;
        }
    }
        cout << "¡El segundo lugar es para " << participantes[plataDondeEsta] << ", puntuando " << plata << " puntos!" << endl;
        cout << participantes[plataDondeEsta + 5] << " se lleva la medalla de plata" << endl;
    for (int i = 0; i < 5; i++) {
        if (i != oroDondeEsta && i != plataDondeEsta && (bronce == 0 || comparativa[i] > bronce)) {
            bronce = comparativa[i];
            bronceDondeEsta = i;
        }
    }
        cout << "¡El tercer lugar es para " << participantes[bronceDondeEsta] << ", puntuando " << bronce << " puntos!" << endl;
        cout << participantes[bronceDondeEsta + 5] << " se lleva la medalla de bronce" << endl;
    return 0;
}

int main()
{
srand(static_cast<unsigned>(time(0)));
// Bienvenida
cout <<"Bienvenidas y bienvenidos al concurso internacional de clavados 2024"<<endl;
// Ronda 1
float calificacionesR1AO[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR1PE[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR1CY[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR1SB[9]= {0.0, 0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR1MW[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
cout<<"Comenzará la primera ronda..."<<endl;
ejecutarRondaVariasVeces(calificacionesR1AO, calificacionesR1PE, calificacionesR1CY, calificacionesR1SB, calificacionesR1MW);
// Ronda 2
float calificacionesR2AO[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR2PE[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR2CY[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR2SB[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR2MW[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
cout<<"Comenzará la segunda ronda..."<<endl;
ejecutarRondaVariasVeces(calificacionesR2AO, calificacionesR2PE, calificacionesR2CY, calificacionesR2SB, calificacionesR2MW);
// Ronda 3
float calificacionesR3AO[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR3PE[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR3CY[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR3SB[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR3MW[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
cout<<"Comenzará la tercera ronda..."<<endl;
ejecutarRondaVariasVeces(calificacionesR3AO, calificacionesR3PE, calificacionesR3CY, calificacionesR3SB, calificacionesR3MW);
// Ronda 4
float calificacionesR4AO[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR4PE[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR4CY[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR4SB[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR4MW[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
cout<<"Comenzará la cuarta ronda..."<<endl;
ejecutarRondaVariasVeces(calificacionesR4AO, calificacionesR4PE, calificacionesR4CY, calificacionesR4SB, calificacionesR4MW);
// Ronda 5
float calificacionesR5AO[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR5PE[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR5CY[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR5SB[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
float calificacionesR5MW[9]= {0.0,0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
cout<<"Comenzará la quinta y última ronda..."<<endl;
ejecutarRondaVariasVeces(calificacionesR5AO, calificacionesR5PE, calificacionesR5CY, calificacionesR5SB, calificacionesR5MW);
// Despedida
cout<<"¡Hemos llegado al final del evento! Así queda la tabla:\n"<<endl;
// Tabla de Puntajes
cout << " Clavado | Dificultad | Calificacion Juez 1 | Calificacion Juez 2 | Calificacion Juez 3 | Calificacion Juez 4 | Calificacion Juez 5 | Calificacion Juez 6 | Calificacion Juez 7 | Total Ronda" << endl;
cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

formatoTable(calificacionesR1AO, calificacionesR2AO, calificacionesR3AO, calificacionesR4AO, calificacionesR5AO, "Alejandra Orozco");
formatoTable(calificacionesR1PE, calificacionesR2PE, calificacionesR3PE, calificacionesR4PE, calificacionesR5PE, "Paola Espinoza");
formatoTable(calificacionesR1CY, calificacionesR2CY, calificacionesR3CY, calificacionesR4CY, calificacionesR5CY, "Chen Yiwen");
formatoTable(calificacionesR1SB, calificacionesR2SB, calificacionesR3SB, calificacionesR4SB, calificacionesR5SB, "Sarah Bacon");
formatoTable(calificacionesR1MW, calificacionesR2MW, calificacionesR3MW, calificacionesR4MW, calificacionesR5MW, "Melissa Wu");

float totalAO=calificacionesR1AO[8]+calificacionesR2AO[8]+calificacionesR3AO[8]+calificacionesR4AO[8]+calificacionesR5AO[8];
float totalPE=calificacionesR1PE[8]+calificacionesR2PE[8]+calificacionesR3PE[8]+calificacionesR4PE[8]+calificacionesR5PE[8];
float totalCY=calificacionesR1CY[8]+calificacionesR2CY[8]+calificacionesR3CY[8]+calificacionesR4CY[8]+calificacionesR5CY[8];
float totalSB=calificacionesR1SB[8]+calificacionesR2SB[8]+calificacionesR3SB[8]+calificacionesR4SB[8]+calificacionesR5SB[8];
float totalMW=calificacionesR1MW[8]+calificacionesR2MW[8]+calificacionesR3MW[8]+calificacionesR4MW[8]+calificacionesR5MW[8];
//Medallero
medallero(totalAO,totalPE,totalCY,totalSB,totalMW);
return 0;
}
// https://www.mycompiler.io/view/CKC0VLRCw7s
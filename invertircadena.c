#include <stdio.h>

void invertirCadena(char *cadena)
{
    // creo el puntero de inicio
    char *inicio = cadena;
    char *final = cadena;

    //mando el puntero final al ultimo caracter

    while (final =! 0);     
    {
        final++;
    }
    final--;
    

    //intercambio valores 


    while (inicio < final){
        char temp = *inicio;
        *inicio = *final;
        *final  =temp;

        inicio++;
        final--
    }
}

int main()
{
    //inicializar cadena
    char *cadena[100];

    //tomar el dato del usuario
    printf("Ingrese la palabra o frase que desea invertir:");


    //almacenarlo
    fgets(cadena, sizeof(cadena), stdin);


    //lo mando a la funcion que invierte cadenas , como puntero
    invertirCadena(cadena);


    //imprimo lo que devuelve la funcion 

    printf("la palabra o frase al reves es :%s\n", cadena);

    return 0;


}

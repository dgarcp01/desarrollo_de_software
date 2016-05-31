
// Primera prueba de concepto de como relizar una clase en c segun miro Samek

// Author: Diego Garcia Perez



#ifndef FORMA_H
#define FORMA_H


// Estructura de datos
typedef struct{
    int x;
    int y;
}forma;

// Metodos para tratar los datos

void forma_ctor(forma * f, int x, int y);
void forma_mv(forma *f, int in_x, int in_y);


#endif // FORMA_H

#include <stdio.h>

// Función para leer una línea completa del usuario

void leerLinea(char *buffer, int longitud) {
    fgets(buffer, longitud, stdin);                  // Leer línea desde entrada estándar
    size_t len = strlen(buffer);                     // Obtener longitud de la cadena
    if (len > 0 && buffer[len - 1] == '\n')         // Si la última posición es salto de línea
        buffer[len - 1] = '\0';                     // Reemplazar salto de línea por nulo
}

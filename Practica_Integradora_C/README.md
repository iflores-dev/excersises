Desarrolla una aplicacion en C para encriptar y desencriptar mensajes usando criptografia elemental (Caesar cipher, XOR) y calcular checksums. 
Temas que debe cubrir (obligatorio)
1. Entrada/salida con `printf`, `scanf`, `puts`, `getchar`.
2. Estructuras de control: `if/else`, `while`, `for`, `switch`.
3. Funciones y prototipos.
4. Separacion por archivos: `main.c`, modulo `.c`, encabezado `.h`.
5. Alcance de variables: local, global y `static` local.
6. Enumeraciones (`enum`).
7. Recursion (al menos una funcion recursiva).
8. Refinamiento top-down (diseno por modulos).
 

Requerimiento funcional
El sistema debe mostrar un menu principal en consola con `switch`:
1. Encriptar cadena de texto con Caesar cipher (desplazamiento configurable 1-25).
2. Desencriptar cadena con Caesar cipher.
3. Encriptar/desencriptar con XOR (clave numerica 0-255).
4. Calcular checksum simple de cadena usando funcion recursiva.
5. Salir.
 

Reglas
1. Caesar cipher: desplazamiento de 1-25 posiciones, solo caracteres alfabeticos (mantener mayus/minus y espacios sin cambio).
2. XOR: operacion XOR bit a bit de cada caracter con la clave.
3. Checksum recursivo: suma acumulada del valor ASCII de cada caracter, modulo 256.
 

Estructura minima de archivos
1. `src/main.c`
2. `src/criptografia.c`
3. `src/criptografia.h`
Restricciones 
1. No duplicar logica: operaciones de encriptacion deben estar en funciones reutilizables.
2. Validar entradas invalidas (desplazamiento fuera de rango, claves no numericas).
3. Usar prototipos de funcion en header.
4. La funcion de checksum recursivo DEBE ser recursiva (sin usar loops).
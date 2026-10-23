# Examen práctico de C: puntuaciones de videojuego

**Temas:** desarrollo estructurado y estructuras de control  
**Tiempo:** 45 minutos  
**Puntaje:** 100 puntos

## Problema

Un jugador completa cinco niveles de un videojuego. Escribe un programa en C que lea los puntos obtenidos en cada nivel y genere un resumen de la partida.

El programa debe:

1. Solicitar los puntos obtenidos en cada nivel, indicando su número.
2. Aceptar únicamente puntajes entre **0 y 1000**, inclusive. Si el usuario escribe un valor fuera del intervalo, volver a solicitarlo hasta que sea válido.
3. Calcular el promedio de puntos obtenidos en los cinco niveles.
4. Contar cuántos niveles fueron de **puntaje alto** (700 puntos o más) y cuántos fueron de **puntaje bajo** (menos de 200 puntos).
5. Al final, mostrar el promedio con dos decimales y los dos conteos.

## Requisitos de implementación

- Resolverlo en `main`; no se requieren arreglos ni funciones adicionales.
- Usar una estructura de repetición para procesar los cinco niveles.
- Usar una estructura de selección para clasificar los puntajes.
- Validar cada entrada antes de incorporarla a los cálculos.
- Usar nombres de variables descriptivos y mantener el código ordenado en pasos: entrada, procesamiento y salida.

## Ejemplo de ejecución

```text
Puntos del nivel 1 (0 a 1000): 180
Puntos del nivel 2 (0 a 1000): 850
Puntos del nivel 3 (0 a 1000): 120
Puntos del nivel 4 (0 a 1000): 1200
Puntaje fuera de rango. Intente de nuevo: 620
Puntos del nivel 5 (0 a 1000): 700

Promedio de puntos: 494.00
Niveles de puntaje alto: 2
Niveles de puntaje bajo: 2
```

## Criterios de evaluación

- Lectura de los cinco puntajes y mensajes identificables por nivel: **15 puntos**
- Validación del intervalo, repitiendo la lectura cuando sea necesario: **25 puntos**
- Uso correcto de acumulador y cálculo del promedio de puntos: **20 puntos**
- Clasificación y conteo correcto de niveles de puntaje alto y bajo: **20 puntos**
- Uso apropiado de repetición y selección: **10 puntos**
- Claridad, formato de salida y nombres descriptivos: **10 puntos**

## Casos para probar

- Todos los puntajes en el límite inferior: `0, 0, 0, 0, 0`.
- Todos los puntajes en el límite superior: `1000, 1000, 1000, 1000, 1000`.
- Puntajes en los límites de clasificación: `199, 200, 699, 700, 0`.
- Una entrada fuera del intervalo seguida por una entrada válida.

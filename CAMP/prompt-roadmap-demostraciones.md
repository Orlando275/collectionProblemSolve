# Prompt: complementar mi roadmap de competitiva con entrenamiento de demostraciones

Instrucciones de uso: pega TODO lo que está dentro del bloque, reemplazando las dos
secciones marcadas con [[ ]] por tu roadmap actual y tus ajustes de nivel/tiempo.

---

```
Actúa como coach de ICPC especializado en RIGOR MATEMÁTICO, no en volumen de problemas.
Tu trabajo no es enseñarme algoritmos nuevos: es enseñarme a DEMOSTRAR que mis
conjeturas son correctas, para que mi intuición en contest quede calibrada y deje de
depender de "se me hace que sí funciona".

## Contexto del estudiante

- Estudiante de ESCOM (IPN), en campamento de entrenamiento ICPC presencial.
- Mis coaches son World Finalists. Cuando justifican una solución NO ponen ejemplos:
  construyen un argumento general. Esa es exactamente la habilidad que quiero copiar.
- Nivel actual: resuelvo Codeforces Div2 A-B con soltura, C a veces, y voy avanzando
  en CSES. Escribo C++17 con plantilla propia.
- Mi diagnóstico honesto de mis fallas, en orden:
  1. Traduzco mal una idea correcta a código (me trabo en "cómo lo implemento").
  2. Acepto conjeturas por intuición y me quemo cuando son falsas.
  3. No sé escribir una demostración aunque la solución me haya salido bien.
- [[AJUSTA AQUÍ: horas por semana disponibles, fecha del próximo contest/regional,
  y cualquier tema que ya domines o que aún no hayas visto]]

## Mi roadmap actual

[[PEGA AQUÍ TU ROADMAP ACTUAL COMPLETO. Si aún no tienes uno escrito, escribe
"no tengo, constrúyelo desde cero" y también la lista de temas que ya viste]]

## Lo que quiero que produzcas

Un roadmap COMPLEMENTARIO de demostraciones que se ENTRELACE con el que ya tengo:
no un plan paralelo. Cada bloque tuyo debe decir explícitamente a qué parte de mi
roadmap actual se engancha (ej. "esto va junto a tu semana de greedy").

Debe cubrir, en orden de rentabilidad real para competitiva, estas técnicas:

1.  Argumento de intercambio (exchange argument) — greedy y validez de comparadores
2.  Cota inferior + construcción que la alcanza — todo problema de mínimo/máximo
3.  Invariante y monovariante — correctitud y terminación de bucles y procesos
4.  Inducción: fuerte, estructural, y el patrón "mira el último paso"
5.  Contradicción y argumento extremal — mínimo contraejemplo, primera posición que difiere
6.  Contribución individual e intercambio del orden de sumatorias — "cuenta por parejas/aristas"
7.  Doble conteo y biyección
8.  Principio del palomar
9.  Corrección de DP — definir el estado con precisión, subestructura óptima,
    y probar que la recurrencia cubre TODOS los casos sin traslape
10. Análisis amortizado (método del potencial) — por qué two pointers, pila monótona
    y DSU son O(n) aunque "se vean" cuadráticos
11. Teoría de juegos — estados W/L por inducción hacia atrás, simetría, robo de estrategia
12. Paridad, coloración e invariantes de tablero
13. (Fase avanzada) Dualidad y cortes — min-cut, Hall, König

## Formato exigido por cada técnica

- **Señales de reconocimiento**: qué frases o estructuras del enunciado gritan que
  esta técnica aplica. Quiero poder clasificar en 30 segundos leyendo el problema.
- **Plantilla del argumento**: los pasos fijos del esqueleto, en lenguaje llano, con
  los huecos que cambian de problema a problema marcados.
- **Un ejemplo desarrollado completo**: conjetura enunciada con precisión + prueba
  escrita como la escribiría un coach, en 10 líneas o menos.
- **Ejercicios graduados**: 2 de calentamiento, 3 de núcleo, 1 reto. Para cada uno:
  juez, ID y nombre del problema, y la CONJETURA que debo probar (no el problema
  entero: la afirmación puntual que sostiene la solución).
- **Errores típicos en esta técnica**: los tres agujeros lógicos más comunes,
  incluyendo cómo se ve la versión circular del argumento.
- **Criterio de dominio**: cómo sé, objetivamente, que ya puedo pasar a la siguiente.

## Protocolo de práctica

Dame un protocolo repetible de sesión, corto y ejecutable, que incluya:

- Enunciar la conjetura con cuantificadores explícitos ANTES de intentar probarla
  (la mitad de mis atoros son afirmaciones vagas, no falta de habilidad).
- Un bloque de "modo adversario": intentar CONSTRUIR un contraejemplo a propósito
  durante unos minutos, y usar la razón por la que fracaso como semilla de la prueba.
- Escribir la prueba en 10 líneas o menos.
- Auto-evaluación con rúbrica.
- Stress testing contra fuerza bruta como verificación empírica INDEPENDIENTE de la
  prueba, y cuándo cada una es la herramienta correcta.

## Entregables adicionales

- **Rúbrica de autoevaluación de una demostración** (5 a 7 criterios, cada uno con
  cómo se ve un 0, un 1 y un 2). Debe castigar explícitamente: enunciado impreciso,
  caso no cubierto, razonamiento circular, y "salto por obviedad".
- **Banco de 10 conjeturas FALSAS pero plausibles**, del estilo que aparece en
  Codeforces, para que entrene refutar y no sólo confirmar. Con el contraejemplo
  mínimo de cada una en una sección aparte al final, para poder taparla.
- **Cadencia semanal** realista con mis horas disponibles, que no sacrifique mi
  volumen de problemas: el objetivo es agregar rigor, no cambiar resolver por probar.
- **Lista corta de lectura** (máximo 4 recursos), diciendo de cada uno qué capítulo
  exacto sirve para qué técnica de la lista. Nada de bibliografías genéricas.

## Restricciones

- Todo en español, tono directo, sin adornos.
- NADA de LaTeX: mi terminal no lo renderiza. Fórmulas en texto plano o en bloques
  de código. Usa palabras para los símbolos ("para todo", "existe", "sumatoria de").
- Sólo problemas REALES que conozcas con certeza. Da juez, ID y nombre. Si no estás
  seguro de que un ID existe, NO lo inventes: describe el arquetipo del problema y
  dilo abiertamente. Un roadmap con enlaces falsos me hace perder horas.
- Marca la dificultad estimada de cada ejercicio y si es adecuado para mi nivel actual
  o si es aspiracional.
- Las pruebas de los ejercicios van en pistas escalonadas (nivel 1 = empujón, nivel 2 =
  la idea clave, nivel 3 = prueba completa), en secciones separadas y claramente
  etiquetadas, para que pueda leer sólo la que necesito.
- Prioriza profundidad sobre cobertura. Prefiero 6 técnicas que de verdad domine a 13
  que reconozca de nombre: si con mis horas no alcanza para todas, corta la lista y
  dime explícitamente qué dejaste fuera y para cuándo.

Empieza preguntándome lo mínimo indispensable que te falte para calibrar el plan
(máximo 3 preguntas). Si no falta nada, arranca directo.
```

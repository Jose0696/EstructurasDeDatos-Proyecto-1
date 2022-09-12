                                           1 Poyecto de Ejecución Estructuras de Datos EIF-207 

                                                            Escuela de Informática                  
                                                    Facultad de Ciencias Exactas y Naturales 
                                                              Universidad Nacional 

El proyecto se realiza en grupo en C++, se recibe únicamente proyectos en CLion o Zinjai. Para la entrega se estará habilitando un espacio en el aula virtual en la fecha y hora establecida por el profesor. El equipo de trabajo es responsable de entregar  el  proyecto  completo  a  tiempo  y  que  no  supere  el  tamaño  máximo permitido por el aula virtual, para poder realizar la revisión. En caso de copia se seguirá el reglamento establecido por la universidad, según lo estipulado. 

Como es esperado, para el desarrollo de un proyecto ustedes pueden necesitar realizar investigaciones de temas adicionales o ahondar en los temas ya vistos en clase, mediante investigación para solucionar adecuadamente el proyecto. Puntos totales 100 que corresponde a un 20% de la nota final.  

Fecha de entrega: lunes 26 de Setiembre. 

IMPORTANTE 

El uso de STL está terminantemente prohibido. 

Proyecto Banco UNO 

La empresa de banca y finanzas Banco UNO necesita generar un sistema especial para la generación de fichas de servicio de los clientes que ingresan.  

Los clientes que ingresan cuentan con los siguientes data y son los data que usted debe incluir en su estructura: 



|**DATOS DEL CLIENTE** |**Porcentaje de influencia** |
| - | - |
|**Nombre** |No aplica |
|**Identificación** |No aplica |
|**Ingresa con un niño** |20% |
|**Está embarazada** |25% |
|**Es adulto mayor** |35% |
|**Categoría** ||
|•  **Categoría 1 (premium)** |20% |
|•  **Categoría 2 (oro)** |10% |
|•  **Categoría 3 (normal)** |0% |

Carga de data de un archivo de texto 

Se le facilita un archivo de texto separado por comas para que usted cargue la información de los clientes del banco (100 registros). Esta información se debe insertar en un árbol de búsqueda binaria (ABB) donde la llave que nos permite ordenar el árbol es el número de identificación del cliente. Cuando la aplicación se inicia, la carga de estos data debe ser automática dentro del ABB, ya que en adelante la aplicación funcionará únicamente con los data que están dentro del sistema para atender a los clientes. 

El menú del sistema  

El menú del sistema se debe ver de la next manera 

1-  Encolar todos los clientes 

2-  Encolar un cliente 

3-  Atender los siguientes 5 clientes 

4-  Mostrar el next cliente a ser atendido 5-  Simulación de Atención de Clientes 

6-  Agregar un Cliente Nuevo 

7-  Salir 

Encolar todos los Clientes 

Esta opción debe leer los data del árbol ABB/BST en su totalidad, y de 1 en 1 los debe colocar en una estructura de type Cola Prioritaria (Priority Queue) que debe estar montada sobre un montículo (Heap), sin embargo, este montículo ordena de forma inversa a la convención, lo que significa que está ordenado de mayor a menor (en la raíz está el valor más alto). 

El  criterio  de  ordenamiento  está  dado  por  los  porcentajes  de  influencia  para definir  la  prioridad  del  cliente,  según  los  porcentajes  de  influencia  vamos  a calcular  un  número  entre  0  y  100,  el  cual  es  la  llave  (key)  de  ordenamiento correspondiente. 

Encolar un cliente 

Esta opción debe recibir vía teclado un número de cédula, el cual se debe buscar en el árbol binario, para que sus data sean agregados a la Cola Prioritaria. 

Atender los siguientes 5 clientes 

Esta opción debe sacar y mostrar en pantalla en orden de prioridad los siguientes 5 clientes de la Cola Prioritaria.  

Mostrar el next cliente a ser atendidos 

Esta opción únicamente muestra el next cliente con la prioridad más alta. 

Simulación de Atención de Clientes 

Esta opción extrae y muestra en pantalla en orden de prioridad TODOS los clientes que estén en ese momento en la Cola Prioritaria. Al final de este proceso la cola queda totalmente vacía. 

Agregar un Cliente Nuevo 

Esta opción captura vía pantalla todos los data de un cliente nuevo y lo agrega al árbol ABB donde se encuentran todos los data de los clientes del banco. 

Salir 

Esta opción recorre el árbol ABB de sistema y construye nuevamente el archivo de texto separado por comas para almacenar los data, tal y como están al momento de cerrar la aplicación. Es importante que note que el sistema inicia con 100 clientes, y solamente se puede agregar más clientes, por lo que el archivo de texto al finalizar debe tener 100 o más data, en caso de que se haya ingresado nuevos clientes. 



|Rubro |Puntos |
| - | - |
|Uso de CSV – Lectura Escritura  |20 |
|Manejo de errores y excepciones  |20 |
|Uso Priority Queue sobre Heap ordenamiento mayor a menor |10 |
|Uso de Templates en la cola y el árbol ABB  |10 |
|Funcionalidad completa solicitada  |40 |
|TOTAL |100 |


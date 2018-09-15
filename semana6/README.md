/*Este documento es un resumen de la semana 6 realizado po Misael Rojas*/

En la semana 6, vimos los denominados arreglos con los cuales se pueden realizar una serie de variables que lo integran.
En los primeros ejemplos utilizamos secuencia de numeros que se impriman en la pantalla, o por ejemplo se multpliquen por el valor doble, incluyendo una serie de numeros que se determinan por el usuario o la persona que accede al programa.

Los ejercicios fueron más complicados, debido a que en arrays se utilizan terminos complicados como fputs, fprintf, fputc, fclose para cerrar los arreglos, uno de los principales, fopen para acceder a un archivo y modificarlo con una ser de caracteres determinados.

La mayoria de los arreglos modifican o leen archivos mediante series especificas de patrones por ejemplo, para lectura e archivos se utilizan las siguiuentes lineas:

archivo = fopen("test.txt", "r");
fgets(var,255,(FILE*)archivo);
printf("%s",var)
fscanf(archivo, "%s", var);
fclose(archivo);

Para eso se determinan una serie de valores asignados segun el documento que se creara o que crearemos.

Hice casi todos los ejemplos, aunque no soy capaz de modificarlos directamente, solo me falto el ultimo.

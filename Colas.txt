¿Qué es una cola?
Una cola es una estructura de datos que permite almacenar elementos en un orden determinado. Los elementos se agregan al final de la cola y se retiran desde el principio.
Funciona de manera similar a una fila de personas esperando para comprar una entrada: la primera persona que llega es la primera en ser atendida.
  

Características principales
* Los elementos se organizan en forma de fila.
* Los elementos nuevos se agregan al final.
* Los elementos se eliminan desde el principio.
* Mantienen un orden de llegada.
* Se utilizan para organizar procesos y tareas.
Operaciones principales
Operación
	Función
	Enqueue
	Agregar un elemento a la cola.
	Dequeue
	Eliminar el primer elemento.
	Front
	Consultar el primer elemento.
	Empty
	Verificar si la cola está vacía.
	

Ejemplo en C++


#include <iostream>
#include <queue>
using namespace std;


int main() {


    queue<int> cola;


    // Agregar elementos
    cola.push(10);
    cola.push(20);
    cola.push(30);


    cout << "Primer elemento: " << cola.front() << endl;


    // Eliminar el primer elemento
    cola.pop();


    cout << "Nuevo primer elemento: " << cola.front() << endl;


    return 0;
}


Resultado:
Primer elemento: 10
Nuevo primer elemento: 20


¿Dónde se utilizan las colas?
* Filas de atención en bancos.
* Impresión de documentos.
* Atención de clientes.
* Procesamiento de tareas en computadores.
* Sistemas de turnos.

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    // Declaración de una cola (FIFO: First-In, First-Out) usando la librería estándar (STL)
    queue<string> colaImpresion;

    cout << "--- AGREGANDO DOCUMENTOS A LA COLA (Enqueue / push) ---" << endl;
    colaImpresion.push("Documento_1_Contrato.pdf");
    cout << "Encolado: Documento_1_Contrato.pdf" << endl;

    colaImpresion.push("Documento_2_Factura.pdf");
    cout << "Encolado: Documento_2_Factura.pdf" << endl;

    colaImpresion.push("Documento_3_Reporte.pdf");
    cout << "Encolado: Documento_3_Reporte.pdf" << endl;

    cout << "\nTotal de elementos en la cola: " << colaImpresion.size() << endl;
    cout << "Primer elemento en la fila (front): " << colaImpresion.front() << endl;
    cout << "Ultimo elemento en la fila (back): " << colaImpresion.back() << endl;

    cout << "\n--- PROCESANDO LA COLA EN ORDEN FIFO (Dequeue / pop) ---" << endl;
    while (!colaImpresion.empty()) {
        // Consultamos el elemento al frente de la cola
        string docActual = colaImpresion.front();
        cout << "Imprimiendo: " << docActual << endl;
        
        // Eliminamos el elemento que ya fue atendido
        colaImpresion.pop();
    }

    cout << "\nCola vacia. Todos los documentos fueron procesados en orden de llegada." << endl;

    return 0;
}

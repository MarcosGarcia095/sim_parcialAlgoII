#ifndef APP_H
#define APP_H

#include "CustomerController.h"
#include "ArticleController.h"
#include "OrderController.h"

class App {
private:
    CustomerController customerController;
    ArticleController articleController;
    OrderController orderController;

    void cargarCliente();        // Para cargar un nuevo cliente
    void cargarArticulo();       // Para cargar un nuevo artículo
    void cargarPedido();         // Para generar un pedido
    void mostrarPedidosCliente(); // Mostrar pedido por cliente
    void mostrarTodosPedidos();  // Mostrar todos los pedidos

public:
    App();                       // Constructor de la aplicación
    void run();                  // Método principal que ejecuta el menú
};

#endif // APP_H
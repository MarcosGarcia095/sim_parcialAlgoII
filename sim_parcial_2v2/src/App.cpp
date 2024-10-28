#include <iostream>
#include "App.h"

using namespace std;

App::App() {
    // Inicialización de controladores si es necesario
}

// Función para cargar un nuevo cliente
void App::cargarCliente() {
    string nombre, apellido, direccion;
    cout << "Ingrese el nombre del cliente: ";
    cin >> nombre;
    cout << "Ingrese el apellido del cliente: ";
    cin >> apellido;
    cout << "Ingrese la direccion del cliente: ";
    cin >> direccion;
    customerController.createCustomer(nombre, apellido, direccion);
    cout << "Cliente cargado exitosamente.\n";
}

// Función para cargar un nuevo artículo
void App::cargarArticulo() {
    string nombre;
    double precio;
    int cantidad;
    cout << "Ingrese el nombre del articulo: ";
    cin >> nombre;
    cout << "Ingrese el precio del articulo: ";
    cin >> precio;
    cout << "Ingrese la cantidad de unidades: ";
    cin >> cantidad;
    articleController.createArticle(nombre, precio, cantidad);
    cout << "Articulo cargado exitosamente.\n";
}

// Función para cargar un nuevo pedido
void App::cargarPedido() {
    int customerID;
    cout << "Ingrese el ID del cliente que realiza el pedido: ";
    cin >> customerID;

    if (!customerController.customerExists(customerID)) {
        cout << "Cliente no encontrado.\n";
        return;
    }

    int articleID;
    cout << "Ingrese el ID del articulo que desea agregar al pedido: ";
    cin >> articleID;

    if (!articleController.articleExists(articleID)) {
        cout << "Articulo no encontrado.\n";
        return;
    }

    orderController.createOrder(customerID, articleID);
    cout << "Pedido cargado exitosamente.\n";
}

// Función para mostrar pedidos de un cliente en particular
void App::mostrarPedidosCliente() {
    int customerID;
    cout << "Ingrese el ID del cliente para mostrar su pedido: ";
    cin >> customerID;

    if (!customerController.customerExists(customerID)) {
        cout << "Cliente no encontrado.\n";
        return;
    }

    orderController.showOrdersByCustomer(customerID);
}

// Función para mostrar todos los pedidos de todos los clientes
void App::mostrarTodosPedidos() {
    orderController.showAllOrders();
}

// Función principal para ejecutar el menú
void App::run() {
    int opcion = 0;

    while (opcion != 5) {
        cout << "\n--- Menu de la App de Cosmeticos ---\n";
        cout << "1. Cargar Cliente\n";
        cout << "2. Cargar Articulo\n";
        cout << "3. Cargar Pedido\n";
        cout << "4. Mostrar Pedido por Cliente\n";
        cout << "5. Mostrar Todos los Pedidos\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cargarCliente();
                break;
            case 2:
                cargarArticulo();
                break;
            case 3:
                cargarPedido();
                break;
            case 4:
                mostrarPedidosCliente();
                break;
            case 5:
                mostrarTodosPedidos();
                break;
            case 6:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente.\n";
                break;
        }
    }
}
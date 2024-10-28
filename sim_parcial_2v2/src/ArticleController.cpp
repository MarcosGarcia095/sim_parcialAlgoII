#include "ArticleController.h"
#include <iostream>

void ArticleController::createArticle(const std::string& nombre, double precio, int cantidad) {
    int id = articles.size() + 1;  // Genera un ID único incrementando el tamaño del vector
    articles.emplace_back(id, nombre, precio, cantidad);
}

Article* ArticleController::getArticleByID(int id) {
    for (auto& article : articles) {
        if (article.getId() == id) {
            return &article;
        }
    }
    return nullptr; // Retorna nullptr si no se encuentra el artículo
}

bool ArticleController::articleExists(int id) const {
    for (const auto& article : articles) {
        if (article.getId() == id) {
            return true;
        }
    }
    return false;
}

void ArticleController::listArticles() const {
    for (const auto& article : articles) {
        std::cout << "ID: " << article.getId() << ", Nombre: " << article.getNombre()
                  << ", Precio: $" << article.getPrecio() << ", Cantidad: " << article.getCantidad() << std::endl;
    }
}
#ifndef ARTICLE_CONTROLLER_H
#define ARTICLE_CONTROLLER_H

#include <vector>
#include "Article.h"

class ArticleController {
private:
    std::vector<Article> articles;  // Almacena los artículos

public:
    ArticleController() = default;

    void createArticle(const std::string& nombre, double precio, int cantidad);
    Article* getArticleByID(int id);
    bool articleExists(int id) const;
    void listArticles() const;
};

#endif // ARTICLE_CONTROLLER_H
//
// Created by albin on 04/05/2019.
//

#include "Library.h"
Library::Library(int q_books, int q_magazines): q_books{q_books}, q_magazines{q_magazines}{}
void Library::show_library() {
for(auto& current_volume: volumes)
{
    current_volume->show();
}
}
bool Library::include(Volume *n_volume)
{
    volumes.push_back(n_volume);
    return  true;
}
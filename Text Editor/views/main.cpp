#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <stdbool.h>
#include <../controllers/controllers.h>

int main()
{
    text *base_character = NULL;
    int n_insert, n_delete;
    char char_insert, char_delete;

    // insert and remove a character
    /*
    base_character = insert_character(base_character, 'B');
    base_character = insert_character(base_character, 'e');
    base_character = insert_character(base_character, 'n');
    base_character = insert_character(base_character, ' ');
    base_character = insert_character(base_character, 'A');
    base_character = insert_character(base_character, 'l');
    base_character = insert_character(base_character, 'a');
    base_character = insert_character(base_character, 'r');
    base_character = insert_character(base_character, 'k');
    inorder(base_character);
    puts("");
    base_character = delete_character(base_character, 'B');
    base_character = delete_character(base_character, 'e');
    base_character = delete_character(base_character, 'n');
    base_character = delete_character(base_character, ' ');
    */

    // scan berapa banyak karakter yang ingin user masukkan
    scanf("%d", &n_insert);

    for (int i = 1; i <= n_insert; i++)
    {
        scanf("%d", &char_insert);
        base_character = insert_character(base_character, char_insert);
    }

    // scan berapa banyak karakter yang ingin user delete
    scanf("%d", &n_delete);

    for (int j = 1; j <= n_delete; j++)
    {
        scanf("%d", &char_delete);
        base_character = delete_character(base_character, char_delete);
    }
    

    return 0;
}
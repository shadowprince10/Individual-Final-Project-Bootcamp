#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <../models/models.h>

// BST Implementation
text *create_character(char character)
{
    text *new_text = (text*)(malloc(sizeof(text)));
    new_text -> character = character;
    new_text -> left = new_text -> right = NULL;
    return new_text;
}

text *insert_character(text *root, char character)
{
    if (!root)
    {
        return create_character(character);
    }

    else if (character < root -> character)
    {
        root -> left = insert_character(root -> left, character);
    }

    else if (character > root -> character)
    {
        root -> right = insert_character(root -> right, character);
    }

    return root;
}

text *minimum_character(text *root)
{
    text *current = root;

    while(current && current -> left)
    {
        current = current -> left;
    }

    return current;
}

text *delete_character(text *root, char character)
{
    if (!root)
    {
        return root;
    }

    else if (character < root -> character)
    {
        root -> left = delete_character(root -> left, character);
    }

    else if (character > root -> character)
    {
        root -> right = delete_character(root -> right, character);
    }

    else if (character == root -> character)
    {
        if (!root -> left)
        {
            text *temp = root -> right;
            free(root);
            root = NULL;
            return temp;
        }

        else if (!root -> right)
        {
            text *temp = root -> left;
            free(root);
            root = NULL;
            return temp;
        }

        text *minimum_character_of_right_subtree = minimum_character(root -> right); // I use predecessor (minimum character in the right subtree)
        root -> character = minimum_character_of_right_subtree -> character;
        root -> right = delete_character(root -> right, minimum_character_of_right_subtree -> character);
    }

    return root;
}

void inorder(text *root)
{
    if(root)
    {
        inorder(root -> left);
        printf("%c ", root -> character);
        inorder(root -> right);
    }
}

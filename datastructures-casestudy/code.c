#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for binary tree node
struct BinaryTreeNode {
    char word[50];
    struct BinaryTreeNode *left, *right;
};

// Create a new node with the given word
struct BinaryTreeNode* newNodeCreate(char* word) {
    struct BinaryTreeNode* temp = (struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
    strcpy(temp->word, word);
    temp->left = temp->right = NULL;
    return temp;
}

// Insert a new word into the BST
struct BinaryTreeNode* insertNode(struct BinaryTreeNode* node, char* word) {
    if (node == NULL) {
        return newNodeCreate(word);
    }

    if (strcmp(word, node->word) < 0) {
        node->left = insertNode(node->left, word);
    } else if (strcmp(word, node->word) > 0) {
        node->right = insertNode(node->right, word);
    }

    return node;
}

// Search for a word in the BST
struct BinaryTreeNode* searchNode(struct BinaryTreeNode* root, char* target) {
    if (root == NULL || strcmp(root->word, target) == 0) {
        return root;
    }

    if (strcmp(root->word, target) < 0) {
        return searchNode(root->right, target);
    }

    return searchNode(root->left, target);
}

// Perform in-order traversal to suggest words
void suggestWords(struct BinaryTreeNode* root) {
    if (root != NULL) {
        suggestWords(root->left);
        printf("%s ", root->word);
        suggestWords(root->right);
    }
}

int main() {
    struct BinaryTreeNode* root = NULL;
    char word[50];
    int n, i;

    // Ask the user to input the number of dictionary words
    printf("Enter the number of words to insert into the dictionary: ");
    scanf("%d", &n);

    // Insert dictionary words into the BST
    for (i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", word);
        root = insertNode(root, word);
    }

    // Ask the user to input a word to search
    printf("Enter a word to search: ");
    scanf("%s", word);

    // Search for the word and suggest alternatives if not found
    if (searchNode(root, word) == NULL) {
        printf("Word not found. Suggestions: ");
        suggestWords(root);
    } else {
        printf("Word found.");
    }

    return 0;
}

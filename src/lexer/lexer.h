/* General lexer for c files
 *
 * Author: Jake Roggenbuck
 *
 * Important definitions for the structs salt_lexer, salt_token.
 * This is not a full lexer for the C language but can determine symbols.
 * Some inspiration for the structure of the lexer is from
 * Adam Hutchings' https://github.com/y-flat/yfc
 */

enum salt_tok_type {
    TOKEN,
};

struct salt_token {
    enum salt_tok_type type;
};

struct salt_lexer {
    struct salt_token *token_arr;
};

int salt_getc(struct salt_lexer *lexer);
int salt_ungetc(struct salt_lexer *lexer, int c);

int salt_skip_whitespace(struct salt_lexer *lexer);
int salt_skip_comment(struct salt_lexer *lexer);

void salt_init(struct salt_lexer *lexer, char *input);

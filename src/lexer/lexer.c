/* General lexer for c files
 *
 * Author: Jake Roggenbuck
 *
 * This is not a full lexer for the C language but can determine symbols.
 * Some inspiration for the structure of the lexer is from
 * Adam Hutchings' https://github.com/y-flat/yfc
 */
#include "lexer.h"
#include <stdio.h>
#include <stdlib.h>

int salt_getc(struct salt_lexer *lexer);
int salt_ungetc(struct salt_lexer *lexer, int c);

int salt_skip_whitespace(struct salt_lexer *lexer);
int salt_skip_comment(struct salt_lexer *lexer);

void salt_init(struct salt_lexer *lexer, char *input) {
    lexer->token_arr = malloc(10 * sizeof(struct salt_token));

    if (lexer->token_arr == NULL) {
        fprintf(stderr, "Malloc failed.\n");
        exit(1);
    }

    printf("input: %s", input);
}

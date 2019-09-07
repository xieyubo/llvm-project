// RUN: %check_clang_tidy %s bugprone-argument-comment %t -- \
// RUN:   -config="{CheckOptions: [ \
// RUN:     {key: bugprone-argument-comment.IgnoreStdFunctionArguments, value: 1}, \
// RUN:     {key: bugprone-argument-comment.CommentIntegerLiterals, value: 1}]}" --

#include <string.h>

void g(int i);

void foo()
{
    g(1);
    // CHECK-MESSAGES: [[@LINE-1]]:7: warning: argument comment missing for literal argument 'i' [bugprone-argument-comment]
    // CHECK-FIXES: g(/*i=*/1);

    char buffer[1024];
    memset(buffer, 0, sizeof(buffer));
}

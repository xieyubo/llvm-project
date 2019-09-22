# The LLVM Compiler Infrastructure

This directory and its subdirectories contain source code for LLVM,
a toolkit for the construction of highly optimized compilers,
optimizers, and runtime environments.

## XYB Port

I made the following changes based on the latest LLVM master:

- [Add option "--driver-mode" to config driver mode used by clang-tidy.](https://github.com/xieyubo/llvm-project/commit/a7533c8c292c8e8c311310e5254735dbc1ae469e)
- [Add an option "IgnoreStdFunctionArguments" to bugprone-argument-comment.](https://github.com/xieyubo/llvm-project/commit/0ef5db32846661cf7fab284582f7342ebacbc82f)

Some changes have been merged back to LLVM master already:

- [Fix bugprone-argument-comment bug if there are marcos.](https://github.com/xieyubo/llvm-project/commit/b882946b522ee3b1f3fb0be5554d04385505226f).
- [Fix bugprone-argument-comment bug: negative literal number is not checked.](https://github.com/xieyubo/llvm-project/commit/b458819012215a9a33f67631f51f19fba1170130).
- [Add bugprone-argument-comment option: IgnoreSingleArgument.](https://github.com/xieyubo/llvm-project/commit/1aa31a81d30f918b27ecd1198c658337f812bc1f).
- [Fix relative path in header-filter of clang-tidy.](https://github.com/xieyubo/llvm-project/commit/814910e71adf2e6e28ef6222c1b38fc916d6ba44)
mkdir -p build
cd build
cmake -GNinja -DLLVM_ENABLE_PROJECTS=clang -DCMAKE_BUILD_TYPE=Release ../llvm
ninja
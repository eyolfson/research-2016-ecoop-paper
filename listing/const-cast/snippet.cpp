void writeToArg(int *y) { *y = 17; }

const int *x = ...;
writeToArg(const_cast<int *>(x));

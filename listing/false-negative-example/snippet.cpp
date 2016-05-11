const int * x = new int(0);
int * y = const_cast<int *>(x);
*y = 1;

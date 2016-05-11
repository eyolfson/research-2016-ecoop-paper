Status DB::Open(const Options& options, ...) {
  s = options.env->NewWritableFile(...);
}

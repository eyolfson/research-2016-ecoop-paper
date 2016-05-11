... InMemoryEnv::NewWritableFile(...) {
  MutexLock lock(&mutex_);
        file_map_[fname] = file;
}

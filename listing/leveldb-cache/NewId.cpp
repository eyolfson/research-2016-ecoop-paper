virtual ShardedLRUCache::uint64_t NewId() {
  MutexLock l(&id_mutex_);
  return ++(last_id_);
}

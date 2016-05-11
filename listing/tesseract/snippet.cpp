const char* STRING::string() const {
  const STRING_HEADER* header = GetHeader();
  header->used_ = -1;
  return GetCStr();
}

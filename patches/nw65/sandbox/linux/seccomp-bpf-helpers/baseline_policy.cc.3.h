  // with fs_denied_errno. However some allowed fstat syscalls are rewritten by
  // libc implementations to fstatat syscalls, and we need to rewrite them back.
  if (sysno == __NR_fstatat_default) {
    return RewriteFstatatSIGSYS(fs_denied_errno);
  }

  // The statx syscall is a filesystem syscall, which will be denied below with

//----replace
  // with fs_denied_errno. However some allowed fstat syscalls are rewritten by
  // libc implementations to fstatat syscalls, and we need to rewrite them back.
  if (sysno == __NR_fstatat_default) {
#if defined(__loongarch64) // loongarch64
    return RewriteStatxSIGSYS(fs_denied_errno); // loongarch64
#else // loongarch64
    return RewriteFstatatSIGSYS(fs_denied_errno);
#endif // loongarch64
  }

  // The statx syscall is a filesystem syscall, which will be denied below with

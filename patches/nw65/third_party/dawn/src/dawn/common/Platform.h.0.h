#endif

#if defined(_WIN64) || defined(__aarch64__) || defined(__x86_64__) || defined(__mips64__) || \
    defined(__s390x__) || defined(__PPC64__)
#    define DAWN_PLATFORM_64_BIT 1
static_assert(sizeof(sizeof(char)) == 8, "Expect sizeof(size_t) == 8");
#elif defined(_WIN32) || defined(__arm__) || defined(__i386__) || defined(__mips32__) || \

//----replace
#endif

#if defined(_WIN64) || defined(__aarch64__) || defined(__x86_64__) || defined(__mips64__) || \
    defined(__s390x__) || defined(__PPC64__) || defined(__loongarch64) // loongarch64
#    define DAWN_PLATFORM_64_BIT 1
static_assert(sizeof(sizeof(char)) == 8, "Expect sizeof(size_t) == 8");
#elif defined(_WIN32) || defined(__arm__) || defined(__i386__) || defined(__mips32__) || \
